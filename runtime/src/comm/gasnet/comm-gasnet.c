/*
 * Copyright 2004-2015 Cray Inc.
 * Other additional copyright holders may be indicated within.
 * 
 * The entirety of this work is licensed under the Apache License,
 * Version 2.0 (the "License"); you may not use this file except
 * in compliance with the License.
 * 
 * You may obtain a copy of the License at
 * 
 *     http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "chplrt.h"

#include "gasnet.h"
#include "gasnet_vis.h"
#include "gasnet_coll.h"
#include "gasnet_tools.h"
#include "chpl-comm.h"
#include "chpl-mem.h"
#include "chplsys.h"
#include "chpl-tasks.h"
#include "chplcgfns.h"
#include "chpl-gen-includes.h"
#include "chpl-atomics.h"
#include "error.h"
#include "chpl-mem-desc.h"
#include "chpl-cache.h" // to call chpl_cache_init()
#include "chpl-visual-debug.h"

// Don't get warning macros for chpl_comm_get etc
#include "chpl-comm-no-warning-macros.h"

#include <signal.h>
#include <sched.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <time.h>

static chpl_sync_aux_t chpl_comm_diagnostics_sync;
static chpl_commDiagnostics chpl_comm_commDiagnostics;
static int chpl_comm_no_debug_private = 0;
static gasnet_seginfo_t* seginfo_table = NULL;



typedef struct chpl_comm_transitMsgAlt* chpl_comm_transitMsgAlt_p;
//per locale
static volatile chpl_comm_transitMsgAlt_p guest1list, guest2list;
static volatile  chpl_comm_transitMsgAlt_p msgCurr;
//UNUSED typedef struct chpl_comm_transitArgAlt* chpl_comm_transitArgAlt_p;
//UNUSED typedef struct myTransit* myTransit_p;


int userCodeStart=0, inRecovery=0, initialisation_done =0, recoveriesSum = 0, sigOrder[10], nextSig=0, commMsgs=0;
static int fail_update_done = 0, child_alive=0, parent_alive=0, timeoutflag=0,timeouted = 0,processedAMtimeoutNB =0, locale_is_dead=0, nbfork =0, buddiesNo =2;
static volatile int current_parent =0, amIdead =0,  handled_failure =0, status_update =0,  remoteForks=0, needToRecover=0, once=0, recoveredAlready=0;
struct buddies myBuddies;
struct buddies myGuests;
static volatile int remoteCountPut=0, remoteCountGet=0;
/*
//int commMsgs=0;
//static volatile int amIdead =0; //static int amIdead; 
//static volatile int handled_failure =0; //handled on fork_wrapper_res or LATER
//static volatile int status_update =0;
//static volatile int remoteForks=0;
//static volatile int needToRecover=0;
//no of buddies needs to be configurable
//static int buddiesNo =2;
static int child_alive=0;
//static int parent_alive=0;
//static int timeoutflag = 0;
//static int timeouted = 0;
//static int processedAMtimeoutNB =0;
// to check in std modules: ChapelLocale.chpl, ChapelBase.chpl
//static int locale_is_dead=0;
//int recoveriesSum = 0;
//int inRecovery=0;
//int initialisation_done =0;
//static int nbfork =0;
//int sigOrder[10];
//int nextSig=0;
*/


/** FUNCTION PROROTYPES*/
void 						update_failed_table(int);
int 						recordFailure(int, int);
/*in use for transit msgs*/
chpl_comm_transitMsgAlt_p  	deleteMsgArg(chpl_comm_transitMsgAlt_p, chpl_comm_transitMsgAlt_p,int);
void 						printTransits(chpl_comm_transitMsgAlt_p); 
chpl_comm_transitMsgAlt_p 	lookupMsg(chpl_comm_transitMsgAlt_p, int);
//transits - only msg
chpl_comm_transitMsgAlt_p 	addTransitMsg(chpl_comm_transitMsgAlt_p, chpl_comm_transitMsgAlt_p);
void  						deleteAllTransits(chpl_comm_transitMsgAlt_p );
chpl_comm_transitMsgAlt_p 	createTransitList(chpl_comm_transitMsgAlt_p, chpl_comm_transitMsgAlt_p);
struct buddies				calculateBuddies(int);
struct buddies				calculateGuests(int);
/*in use?*/
void 						printSingleMsg(void);//
gasnett_tick_t 				ticktime(void);
uint64_t 					tickcvt(gasnett_tick_t);
void  						chpl_comm_fork_nb_res(c_nodeid_t, c_sublocid_t,chpl_fn_int_t, void* , int32_t);
void  						chpl_comm_fork_res(c_nodeid_t, c_sublocid_t,chpl_fn_int_t, void*, int32_t);

void 						chpl_comm_userCode_starts(void);
void 						printMemory(void*, int);

int 						chpl_comm_getLocaleStatus(void);
int 						chpl_comm_getPerformedRecovery(void);
void						chpl_comm_setInRecovery(void);
void 						statusFunct(void);

void  						chpl_comm_fork_fast_res(c_nodeid_t, c_sublocid_t ,chpl_fn_int_t , void *, size_t); 
//unused
//void 						addTransits(chpl_comm_transitMsgAlt_p, chpl_comm_transitArgAlt_p);
//void 						printArgs(chpl_comm_transitArgAlt_p);
//chpl_comm_transitArgAlt_p lookupArg(int);
//chpl_comm_transitMsgAlt_p* deleteMsgRec(chpl_comm_transitMsgAlt_p , int);//
//chpl_comm_transitArgAlt_p deleteArgRec(chpl_comm_transitArgAlt_p , int);//
//void 						checkRemoteForks(int);
//void						lookup(int);//

//void						addTransitsAlt(chpl_comm_transitMsgAlt_p);


#define TIMEOUTNS 30000000
#define LOGFILE "experiments-set4.log" 
#define LOGFILE2 "test01loc1.log" 
#define LOGGING 0
#define PRINTING 0
#define DPRINTING 0
#define DBG 0
#define REMOTEDBG 0



// Gasnet AM handler arguments are only 32 bits, so here we have
// functions to get the 2 arguments for a 64-bit pointer,
// and a function to reconstitute the pointer from the 2 arguments.
static inline
gasnet_handlerarg_t get_arg_from_ptr0(void* addr)
{
  // This one returns the bottom 32 bits.
  return ((gasnet_handlerarg_t)
            ((((uint64_t) (intptr_t) (addr)) << 32UL) >> 32UL));
}
static inline
gasnet_handlerarg_t get_arg_from_ptr1(void* addr)
{
  // this one returns the top 32 bits.
  return ((gasnet_handlerarg_t)
            (((uint64_t) (intptr_t) (addr)) >> 32UL));
}
static inline
void* get_ptr_from_args(gasnet_handlerarg_t a0, gasnet_handlerarg_t a1 )
{
  return (void*) (intptr_t)
           (((uint64_t) (uint32_t) a0)
            | (((uint64_t) (uint32_t) a1) << 32UL));
}

//
// Build acknowledgement address arguments for gasnetAMRequest*() calls.
//
#define AckArg0(addr) get_arg_from_ptr0(addr)
#define AckArg1(addr) get_arg_from_ptr1(addr)

//
// The following macro is from the GASNet test.h distribution
//
#define GASNET_Safe(fncall) do {                                        \
    int _retval;                                                        \
    if ((_retval = fncall) != GASNET_OK) {                              \
      fprintf(stderr, "ERROR calling: %s\n"                             \
              " at: %s:%i\n"                                            \
              " error: %s (%s)\n",                                      \
              #fncall, __FILE__, __LINE__,                              \
              gasnet_ErrorName(_retval), gasnet_ErrorDesc(_retval));    \
      fflush(stderr);                                                   \
      gasnet_exit(_retval);                                             \
    }                                                                   \
  } while(0)

//
// Adapted from the above, this one is for the case where the caller
// needs to do the fncall separately (see chpl_comm_barrier()).  Here
// the fn is not actually called; fncall is only used to produce the
// message.
//
#define GASNET_Safe_Retval(fncall, _retval) do {                        \
    if (_retval != GASNET_OK) {                                         \
      fprintf(stderr, "ERROR calling: %s\n"                             \
              " at: %s:%i\n"                                            \
              " error: %s (%s)\n",                                      \
              #fncall, __FILE__, __LINE__,                              \
              gasnet_ErrorName(_retval), gasnet_ErrorDesc(_retval));    \
      fflush(stderr);                                                   \
      gasnet_exit(_retval);                                             \
    }                                                                   \
  } while(0)

//
// This is the type of object we use to manage GASNet acknowledgements.
//
// Initialize the count to 0, the target to the number of return signal
// events you expect, and the flag to 0.  Fire the request, then do a
// BLOCKUNTIL(flag).  When all the return signals have occurred, the AM
// handler will set the flag to 1 and your BLOCKUNTIL will complete.
// (Note that the GASNet documentation says that GASNet code assumes
// the condition for a BLOCKUNTIL can only be changed by the execution
// of an AM handler.)
//
typedef struct {
  atomic_uint_least32_t count;
  uint_least32_t        target;
  volatile int          flag;
} done_t;


struct chpl_comm_transitMsgAlt{
	chpl_fn_int_t 				fid;
	int 						mid;
	int		 					src;
	int 						dst;
	void*         				ack;
	int          				arg_size;	
	char          				arg[0];       // variable-sized data here
	chpl_comm_transitMsgAlt_p 	next;
};

//
// Initialize one of the above.
//
static inline
void init_done_obj(done_t* done, int target) {
  atomic_init_uint_least32_t(&done->count, 0);
  done->target = target;
  done->flag = 0;
}

static inline
void wait_done_obj(done_t* done)
{
#ifndef CHPL_COMM_YIELD_TASK_WHILE_POLLING
  GASNET_BLOCKUNTIL(done->flag);
#else
  while (!done->flag) {
    (void) gasnet_AMPoll();
    chpl_task_yield();
  }
#endif
}

typedef struct {
  int           caller;
  c_sublocid_t  subloc;
  void*         ack;
  chpl_bool     serial_state; // true if not allowed to spawn new threads
  chpl_fn_int_t fid;
  int           arg_size;
  int 			recoveredLoc;
  int 			recoveryfl;
  char          arg[0];       // variable-sized data here
} fork_t;

typedef struct {
  void*   ack;
  int     id;       // private broadcast table entry to update
  int     size;     // size of data
  char    data[0];  // data
} priv_bcast_t;

typedef struct {
  void* ack;
  int   id;       // private broadcast table entry to update
  int   size;     // size of data
  int   offset;   // offset of piece of data
  char  data[0];  // data
} priv_bcast_large_t;

typedef struct{
	int 			caller;
	int 			requestedId;
	int 			requestedAlive;
}update_t;

typedef struct{
	int 			quit_bool;
}quit_t;

typedef struct{		//failed node struct
	int 			dID;
	int 			parentID;
	int 			alive;
}failed_t;

typedef struct {
  void* ack; // acknowledgement object
  void* tgt; // target memory address
  void* src; // source memory address
  size_t size; // number of bytes.
} xfer_info_t;

// change this for arbitrary no of buddies
struct buddies{
	int first;
	int second;
};

//table of failed nodes 
/*init in comm_init use in comm_fork and aux functions*/
static failed_t* failed_table =NULL;

//
// AM functions
//
#define FORK          128 // synchronous fork
#define FORK_LARGE    129 // synchronous fork with a huge argument
#define FORK_NB       130 // non-blocking fork 
#define FORK_NB_LARGE 131 // non-blocking fork with a huge argument
#define FORK_FAST     132 // run the function in the handler (use with care)
#define FORK_FAST_RES 161
#define SIGNAL        133 // ack of synchronous fork
#define PRIV_BCAST    134 // put data at addr (used for private broadcast)
#define PRIV_BCAST_LARGE 135 // put data at addr (used for private broadcast)
#define FREE          136 // free data at addr
#define EXIT_ANY      137 // free data at addr
#define BCAST_SEGINFO 138 // broadcast for segment info table
#define DO_REPLY_PUT  139 // do a PUT here from another locale
#define DO_COPY_PAYLOAD 140 // copy AM payload to another address
//
#define BCAST_FAIL_TABLE	  	141 // 0 broadcasts the failed_table
#define FAIL		  			142 // failure notification (blocking fork)
#define FAILEDNODES 			143 // sent to loc 0 by every locale (reduce failed table report)
#define FAIL_UPDATE_REQUEST	  	144 // update for future child node (blocking fork)
#define FAIL_UPDATE_REPLY	  	145 // reply with update (blocking fork)
#define IN_TRANSIT	  			146 // new message in transit
#define IN_TRANSIT_LARGE	  	147 // new message in transit large
#define IN_TRANSIT_DEL	  		148 // free message in transit
//#define IN_TRANSIT_DEL_LARGE	  	149 // free message in transit large
#define TIMEOUTOTHER 			149 // UNUSED
#define FORK_RES		  		150 // resilient blocking fork
#define FORK_RES_LARGE 			151 // resilient blocking fork (large arg)
#define FORK_NB_RES	  			152 // resilient non-blocking fork
#define FORK_NB_RES_LARGE	  	153 // resilient non-blocking fork(large arg)

#define PID			  			154 // register pid of every bootstrapped locale
#define TIMEOUT		  			155 // suicide message (blocking fork)
#define TIMEOUTNB	  			156 // suicide message (non-blocking fork)
#define FREE_TM		  			157 // acknowledgement for transit msg 
#define QUIT 					158 // UNUSED
#define GUESTFAILURE			159 // UNUSED
#define BUDDYFAILURE 			160 // UNUSED
#define NOTIFICATION			161 



struct buddies calculateBuddies(int id){	//called in chpl_comm_init and in recovery
	struct buddies result;
	if(id+1 <= (chpl_numNodes-1))
		result.first = id+1;
	else
		result.first=0;
	if(result.first +1 <= (chpl_numNodes-1))
		result.second = result.first +1;
	else
		result.second =0;	
	return result;
}


struct buddies calculateGuests(int id){ //called in recovery
	struct buddies guests;
	if(id-1 >=0 && id-1<=(chpl_numNodes-1))
		guests.first = id-1;
	else
		guests.first=chpl_numNodes-1;	
	if(guests.first-1 >=0 && guests.first-1<= (chpl_numNodes-1))
		guests.second = guests.first -1;
	else
		guests.second =chpl_numNodes-1;		
	return guests;
}

void chpl_comm_setInRecovery(){		//called from ChapelLocale.chpl
	if(inRecovery==1){
		inRecovery = 0;
	}else{
		inRecovery =1;
	}
}
 
int chpl_comm_getLocaleStatus(){
	if(PRINTING)
		printf("(COMM LAYER) %d  chpl_comm_getLocaleStatus CALLED  locale_is_dead=%d \n\n", chpl_nodeID, locale_is_dead);
	return locale_is_dead;
}
 
int chpl_comm_getPerformedRecovery(){
	if(PRINTING)
		printf("(COMM LAYER) %d  calling chpl_comm_getPerformedRecovery() how many = %d \n\n", chpl_nodeID, recoveriesSum);
	return recoveriesSum;

}

void statusFunct(){ //UNUSED
	if(PRINTING)
	printf("(statusFunct) Locale %d detected failure later on ----------- ********* \n********\n********\n********\n", chpl_nodeID);
	if(chpl_nodeID!=0){
		/* only covers the blocking case */
		failed_t* childF = (failed_t*)chpl_mem_alloc(sizeof(failed_t), CHPL_RT_MD_COMM_DEAD_NODE, 0, 0);
		childF->dID = (int)chpl_nodeID;
		childF->alive = 1;
		childF->parentID = current_parent;
		
		printf("(statusFunct) Locale %d detected failure  TIMEOUT signal to PARENT %d \n", chpl_nodeID, current_parent);
		GASNET_Safe(gasnet_AMRequestMedium0((c_nodeid_t)current_parent, TIMEOUT, childF, sizeof(failed_t))); //timeout to parent locale
		chpl_mem_free(childF, 0, 0);
	}else{
		printf("(statusFunct) Locale %d cannot fail \n", chpl_nodeID);
	}
}

void update_failed_table(int id){ //called from AM_fail - on locale 0
	assert(failed_table[id].dID  == id); 
	if(PRINTING)
		printf("(COMM LAYER) %d  update_failed_table ::::------- passed assertion \n ", chpl_nodeID);
	failed_table[id].alive = 1;
}

int recordFailure(int id, int pid){ //equivalent of AM_fail when failure is detected on 0
	int i;
	if(PRINTING)
		printf("(COMM LAYER) %d  recordFailure ::::------- on node %d with parent %d \n ", chpl_nodeID, id, pid);	
	assert(failed_table[id].dID  == id);
	if(failed_table[id].alive ==1){
		return 1; //discard, already detected (and probably also handled)
	}else{
		failed_table[id].alive = 1;
		failed_table[id].parentID = pid;
		return 0;
	}
	if(PRINTING){
		printf("%d view :: FAILED NODES \n",chpl_nodeID);	
		for (i=0; i<chpl_numNodes; i++) {
			printf("-ID: %d -PARENT: %d -DEAD %d\n",failed_table[i].dID,failed_table[i].parentID, failed_table[i].alive);
		}
	}
}

// handler to update list of locales (on locale 0) [FAIL signal sent by who? other locales? exit signal?]
static void AM_fail(gasnet_token_t token, void* buf, size_t nbytes) {
	failed_t* newFailed = (failed_t*)chpl_mem_alloc(sizeof(failed_t), CHPL_RT_MD_COMM_DEAD_NODE, 0, 0);
	int myid;
	int rec;
	chpl_memcpy(newFailed, buf, nbytes);
	rec = recordFailure(newFailed->dID, newFailed->parentID);
	if(PRINTING)
		printf("(recordFailure ) %d  : sending TIMEOUT to (parent) %d  \n ", chpl_nodeID, newFailed->parentID);
	//GASNET_Safe(gasnet_AMRequestMedium0(newFailed->parentID, TIMEOUT, newFailed, sizeof(failed_t)));
	chpl_mem_free(newFailed, 0, 0);
}

static void AM_fail_update_reply(gasnet_token_t token, void* buf, size_t nbytes) {
	if(!amIdead){
     update_t* updateNode = (update_t*)chpl_mem_alloc(sizeof(update_t), CHPL_RT_MD_COMM_UPDATE_NODE, 0, 0);
     if(PRINTING)
		printf("(COMM LAYER) %d  AM_fail_update_reply ::::   \n ", chpl_nodeID);      
	 chpl_memcpy(updateNode, buf, nbytes);
	 assert(updateNode->caller ==chpl_nodeID);
	 if(updateNode->requestedAlive==0){
			child_alive =1;
			parent_alive = 1;
	 }else{
			child_alive =0;
			parent_alive=0;
	 }
	 if(PRINTING)
		printf("(COMM LAYER) %d  AM_fail_update_reply ::::  fail_update_done =1\n ", chpl_nodeID);
	 fail_update_done = 1;
	 chpl_mem_free(updateNode, 0, 0);	
	}
}

//executed on locale 0 
static void AM_fail_update_request(gasnet_token_t token, void* buf, size_t nbytes) {
	update_t* updateA = (update_t*)chpl_mem_alloc(sizeof(update_t), CHPL_RT_MD_COMM_UPDATE_NODE, 0, 0);
	int reqNode;
	update_t* updateB = (update_t*)chpl_mem_alloc(sizeof(update_t), CHPL_RT_MD_COMM_UPDATE_NODE, 0, 0);
	if(PRINTING)
		printf("(COMM LAYER) %d  AM_fail_update_request ::: \n ", chpl_nodeID);  
	chpl_memcpy(updateA, buf, nbytes);
	//send partial update
	reqNode = updateA->requestedId;
	updateB->caller =updateA->caller;
	updateB->requestedId = reqNode;
	if (failed_table[reqNode].alive == 0){ 
		updateB->requestedAlive=0;
	}else{
		updateB->requestedAlive=1;
	}			
	GASNET_Safe(gasnet_AMReplyMedium0(token, FAIL_UPDATE_REPLY, updateB, sizeof(update_t)));
	if(PRINTING)
		printf("(COMM LAYER) %d  AM_fail_update_request :::: ======= SENDING FAIL UPDATE REPLY \n ", chpl_nodeID);
	chpl_mem_free(updateA, 0, 0);
	chpl_mem_free(updateB, 0, 0);
}

//UNUSED
static void AM_guest_failure(gasnet_token_t token, void* buf, size_t nbytes) {
	failed_t* newFailed = (failed_t*)chpl_mem_alloc(sizeof(failed_t), CHPL_RT_MD_COMM_DEAD_NODE, 0, 0);
	int rec;
	chpl_memcpy(newFailed, buf, nbytes);
	assert(newFailed->dID == myGuests.first || newFailed->dID == myGuests.second);
	rec = recordFailure(newFailed->dID, newFailed->parentID);
	if(DPRINTING)
		printf("(AM_guest_failure) %d  : failure on %d - what's next??  \n ", chpl_nodeID, newFailed->dID);
	chpl_mem_free(newFailed, 0, 0);
}

//UNUSED
static void AM_buddy_failure(gasnet_token_t token, void* buf, size_t nbytes) {}

// for in transit msgs
static int get_next_msg_id() {
  static int      id = 0 + 1;
  int              next_id;
  next_id = id++;
  return next_id;
}

//UNUSED
void printSingleMsg(){
	chpl_comm_transitMsgAlt_p temp = (chpl_comm_transitMsgAlt_p)chpl_mem_alloc(sizeof(struct chpl_comm_transitMsgAlt), CHPL_RT_MD_COMM_SEND_TRANSIT_MSG, 0, 0);
	//compiler complained -- not using the function anyway
	chpl_comm_transitMsgAlt_p msgHead = NULL;
	printf("%d ====== TRANSIT LIST======= \n ", chpl_nodeID);
	if(msgHead !=NULL){
		printf("id: %d - src: %d - dst: %d - fid: %d - \n", msgHead->mid, msgHead->src, msgHead->dst, msgHead->fid);
		temp = msgHead->next;
		while(temp!=NULL){
			printf("id: %d - src: %d - dst: %d - fid: %d - \n", temp->mid, temp->src, temp->dst, temp->fid);
			temp=temp->next;
		}
	}else{
		printf("%d LIST EMPTY ======= \n ", chpl_nodeID);
	}
	chpl_mem_free(temp, 0, 0);	
}


chpl_comm_transitMsgAlt_p createTransitList(chpl_comm_transitMsgAlt_p head, chpl_comm_transitMsgAlt_p msg){
    int iidd = get_next_msg_id();
    msg->mid = iidd;
    msg->next = NULL;
    if(PRINTING)
		printf("%d creating transit list ..\n", chpl_nodeID);
    head = msgCurr = msg;
    if(PRINTING)
		printTransits(head);
    return head;
}

chpl_comm_transitMsgAlt_p addTransitMsg(chpl_comm_transitMsgAlt_p head, chpl_comm_transitMsgAlt_p msg){
	if(NULL == head){ //msgHead){
		head = createTransitList(head, msg);
	}else{
		int iid = get_next_msg_id();
		msg->mid =iid;
		msg->next = NULL;
		msgCurr->next = msg;
		msgCurr = msg;
	}
	if(PRINTING){
		printf(" %d addTransitMsg SRC= %d DST= %d :: DONE \n", chpl_nodeID, msg->src, msg->dst);
		printTransits(head);
	}
	return head;
}

//void addTransits(chpl_comm_transitMsgAlt_p msg, chpl_comm_transitArgAlt_p arg){}

chpl_comm_transitMsgAlt_p  deleteMsgArg(chpl_comm_transitMsgAlt_p head, chpl_comm_transitMsgAlt_p msg, int recoveryFlag){ 
	chpl_comm_transitMsgAlt_p del = NULL;
	chpl_comm_transitMsgAlt_p ptr = head;
	chpl_comm_transitMsgAlt_p prev = NULL;
	chpl_comm_transitMsgAlt_p tmp = NULL;
	int found = 0;
	if(DPRINTING)
		printf("delete %d : ENTERING WHILE LOOP with recoveryFlag = %d - looking for msg-dst = %d \n", chpl_nodeID, recoveryFlag, msg->dst);
	if(recoveryFlag)
		msg->mid = 0; // delete only recovered messages
		
	while(ptr){
		
		assert(msg->dst);
		assert(ptr->dst);
		if(ptr->dst== msg->dst){ 
			found = 1;
			break;
		}else{
			tmp = ptr;
			prev = ptr;
			ptr = ptr->next;
		}
	}
	if(1== found){
		if(DPRINTING)
			printf("delete %d : foundMsg  fid = %d recoveryFlag = %d\n", chpl_nodeID, ptr->fid, recoveryFlag);
		if(prev != NULL){
			prev->next =ptr->next;
		}else{
			if(DPRINTING)
				printf(" delete %d : foundMsg msgHead fid = %d recoveryFlag = %d\n", chpl_nodeID,ptr->fid, recoveryFlag);
			if(ptr->next){
				head = ptr->next;
			}else{ 
				head=NULL;
			}
		}
	}else{
		if(DPRINTING)
			printf("\n delete %d : NOT found  src %d dst %d fid %d argsizeize %d ", chpl_nodeID,msg->src, msg->dst, msg->fid, msg->arg_size);
	}
	return head;
}
	
//UNUSED	
void  deleteAllTransits(chpl_comm_transitMsgAlt_p msgHead){ 

	if(PRINTING)
		printf("(deleteAllTransits)  %d Deleting transit list \n", chpl_nodeID);
	if(msgHead!=NULL){
		chpl_comm_transitMsgAlt_p deleteThis ;
		chpl_comm_transitMsgAlt_p nextM;
		deleteThis = msgHead;
		while(deleteThis ){
			nextM= deleteThis->next;
			chpl_mem_free(deleteThis, 0, 0);
			deleteThis = nextM;
		}
		msgHead = NULL;
	}
	if(PRINTING)
		printf( "(deleteAllTransits)  %d done\n", chpl_nodeID);
}

void printTransits(chpl_comm_transitMsgAlt_p msgHead){ 
	chpl_comm_transitMsgAlt_p traverseM ;
	printf(" ===== TRANSIT MSG LIST === %d \n ", chpl_nodeID);
	if(msgHead!=NULL){
		traverseM = msgHead;
		while(traverseM!=NULL){
			printf("id: %d - src: %d - dst: %d - fid: %d   \n", traverseM->mid, traverseM->src, traverseM->dst,  traverseM->fid);
			traverseM = traverseM->next;
		}	
	}else{
		printf(" EMPTY \n");
	}
	printf(" ====== TRANSIT MSG LIST === %d done\n", chpl_nodeID);
}

chpl_comm_transitMsgAlt_p lookupMsg(chpl_comm_transitMsgAlt_p head, int Rid){ //lookup by msg->dst

    chpl_comm_transitMsgAlt_p ptr = head;
    chpl_comm_transitMsgAlt_p prev = NULL;
    chpl_comm_transitMsgAlt_p tmp = NULL;
    int found = 0;
	if(PRINTING){
		printf(" %d lookup funct rID %d \n", chpl_nodeID, Rid);
		printTransits(head);
	}
    while(ptr != NULL && found!=1){
        if(ptr->dst== Rid ){ //&& ptr->mid!=0){
            found = 1;
            break;
        }else{
            tmp = ptr;
	    prev = ptr;
            ptr = ptr->next;
        }
    }
    //assert(ptr!=NULL);
	if(PRINTING)
		printf(" %d lookup funct : found = %d \n", chpl_nodeID, found);
    if(1== found ){
	        ptr->mid =0; //mark
		return ptr;
    }else{
        return NULL;
    }
}

//hanlder for IN_TRANSIT_LARGE signal (called on buddy locales)
static void AM_in_transit_large(gasnet_token_t token, void* buf, size_t nbytes) {
  if(!amIdead){
  	chpl_comm_transitMsgAlt_p transitInfo = (chpl_comm_transitMsgAlt_p) chpl_mem_allocMany(1, nbytes, CHPL_RT_MD_COMM_RECV_TRANSIT_MSG_LARGE, 0, 0);      	                                 	
	void* arg = chpl_mem_allocMany(1, transitInfo->arg_size, CHPL_RT_MD_COMM_RECV_TRANSIT_MSG_ARG, 0, 0);
    void* tr_arg;
    chpl_memcpy(transitInfo, buf, nbytes);
	chpl_memcpy(&tr_arg, transitInfo->arg, sizeof(void*));
	chpl_comm_get(arg, transitInfo->src, tr_arg, transitInfo->arg_size, -1 /*typeIndex: unused*/, 1, 0, "transit message large arg");
		
	chpl_memcpy(&transitInfo->arg, arg, transitInfo->arg_size);
	
	//as in the regular AM_in_transit
	if(PRINTING)
		printf("(AM_in_transit_large) %d  addTransits() call\n ", chpl_nodeID);
	if(myGuests.first == transitInfo->dst){
		guest1list = addTransitMsg(guest1list,transitInfo);
		if(PRINTING)
			printf("(AM_in_transit_large) %d  added to my 1st list - sender %d \n ", chpl_nodeID, transitInfo->dst);
	}else if(myGuests.second == transitInfo->dst){
		guest2list = addTransitMsg(guest2list,transitInfo);
		if(PRINTING)
			printf("(AM_in_transit_large) %d  added to my 2nd list - sender %d \n ", chpl_nodeID, transitInfo->dst);
	}else{
		printf("(AM_in_transit_large) %d  ERROR: not hosting data from loc %d\n ", chpl_nodeID, transitInfo->dst);	 
	}
		/* this is what happens in AM_fork_large after execution of fork
		 * should I be doing the same?
		 * cannot free arg locally
		 * cannot free transitInfo locally
		 * should send a FREE_TM (have an unused version already)
		 * back to the src but this may take too long
		 * 
		 * GASNET_Safe(gasnet_AMRequestShort2(f->caller, SIGNAL, AckArg0(f->ack), AckArg1(f->ack)));
		 * chpl_mem_free(f, 0, 0);
		 * chpl_mem_free(arg, 0, 0);
		*/
  }
}

/** NOTE TO SELF--
 * since we are only looking at the dst of the transit message in order to decide to delete it
 * maybe it makes sense to only pack src, dst, fid when sending the IN_TRANSIT_DEL request
 * 
 * could possible replace this by a AMShort request
 * 
 * So, we need to provide different versions for IN_TRANSIT and IN_TRANSIT_LARGE
 * but not for IN_TRANSIT_DEL*/
/* no need to distinguish between IN_TRANSIT _DEL and IN_TRANSIT_DEL_LARGE
 * when packing the message we only add src, dst, fid, arg_size and
 * not mid, arg(regular or pointer), next so
 * no need for thsi handler
 * static void AM_in_transit_del_large(gasnet_token_t token, void* buf, size_t nbytes) {}	
*/

//hanlder for IN_TRANSIT_DEL signal (called on buddy locales)
static void AM_in_transit_del(gasnet_token_t token, void* buf, size_t nbytes) {
  if(!amIdead){
	int rId, fl;
	chpl_comm_transitMsgAlt_p transitInfo = (chpl_comm_transitMsgAlt_p) chpl_mem_allocMany(1, nbytes, CHPL_RT_MD_COMM_RECV_TRANSIT_MSG, 0, 0);  
	chpl_comm_transitMsgAlt_p glist;
	chpl_memcpy(transitInfo, buf, nbytes);
	
	if(DPRINTING){
		printf("(AM_in_transit_DEL) %d src = %d DST = %d fid = %d \n", chpl_nodeID, transitInfo->src, transitInfo->dst, transitInfo->fid);
		//printTransits(guest1list);
		//printTransits(guest2list);
	}
	//decide which list *** 
	if(myGuests.first == transitInfo->dst){
		if(PRINTING)
			printf("AM_in_transit_DEL %d for dst= %d is on my first list\n", chpl_nodeID, transitInfo->dst);
		guest1list = deleteMsgArg(guest1list, transitInfo,0);
		
	}else if(myGuests.second == transitInfo->dst){
	  	if(PRINTING)
	  		printf("AM_in_transit_DEL %d for dst= %d is on my 2nd list\n", chpl_nodeID, transitInfo->dst);
		guest2list = deleteMsgArg(guest2list, transitInfo,0);
	}else{
		printf("(AM_in_transit_del) %d  ERROR: not hosting data from loc %d\n ", chpl_nodeID, transitInfo->dst);	 
	}
	remoteForks--;
	if(DPRINTING)
		printf("(AM_in_transit_del) %d DELETING fid = %d  DONE!!! and remoteForks-- = %d \n", chpl_nodeID, transitInfo->fid, remoteForks);
	if(PRINTING){
		printf("(AM_in_transit_del %d DELETED fid = %d  \n", chpl_nodeID, transitInfo->fid);
		//if(PRINTING){
		//	printTransits(guest1list);
		//	printTransits(guest2list);
		//}
	}
	//chpl_mem_free(transitInfo,0,0); //should I do this here?
  }
}	



static void AM_fork_fast(gasnet_token_t token, void* buf, size_t nbytes) {
  fork_t *f = buf;

  if (f->arg_size)
    chpl_ftable_call(f->fid, &f->arg);
  else
    chpl_ftable_call(f->fid, NULL);
  GASNET_Safe(gasnet_AMReplyShort2(token, SIGNAL,
                                   AckArg0(f->ack), AckArg1(f->ack)));
}



static void AM_fork_fast_res(gasnet_token_t token, void* buf, size_t nbytes) {
  fork_t *f = buf;
  if(PRINTING)
		printf("(AM_fork_fast) %d , my pid = %d, amIdead= %d\n", chpl_nodeID, getpid(), amIdead);
  if(amIdead){//dead
	failed_t* newFailedNode= (failed_t*)chpl_mem_alloc(sizeof(failed_t), CHPL_RT_MD_COMM_DEAD_NODE, 0, 0);
	handled_failure=1;
	status_update =0;
	newFailedNode->dID = chpl_nodeID;
	newFailedNode->parentID = f->caller;
	newFailedNode->alive= 1;
	if(PRINTING)
		printf("(fork_wrapper_res) %d sending TIMEOUT to %d",chpl_nodeID, f->caller);
	GASNET_Safe(gasnet_AMRequestMedium0(f->caller, TIMEOUT, newFailedNode, sizeof(failed_t)));
	chpl_mem_free(newFailedNode, 0, 0);  
  }else{ //alive
  	if (f->arg_size)
    	chpl_ftable_call(f->fid, &f->arg);
  	else
    	chpl_ftable_call(f->fid, NULL);
 	GASNET_Safe(gasnet_AMReplyShort2(token, SIGNAL,
                                   AckArg0(f->ack), AckArg1(f->ack)));
  }
}

static void SIGUSR1_handler(int sig) { 
  if(sig == SIGUSR1){ 
	amIdead = 1;
	status_update=1;
	raise(SIGUSR2); //raise USR2 for the tasking layer to catch
	if(PRINTING)
		printf("(sigUSR1_handler) %d RECEIVED SIGUSR1  \n", chpl_nodeID);
  }
  signal(SIGUSR1, SIGUSR1_handler);
}
/*
//UNUSED
static void SIGUSR2_handler(int sig) { 
  if(sig == SIGUSR2 && chpl_nodeID!=0){
	amIdead = 1;
	status_update=1;
	if(PRINTING)
		printf("(sigUSR2_handler) %d RECEIVED SIGUSR2  \n", chpl_nodeID); //- chpl_task_exit() 
	//chpl_task_exit(); //shut down the tasking layer
  }
 signal(SIGUSR2, SIGUSR2_handler);
}
*/
//UNUSED
static void SIGALRM_handler(int sig) { 
  if(sig == SIGALRM && chpl_nodeID!=0){
	amIdead = 1;
	printf("--------------(SIGALRM_handler) %d RECEIVED SIGNAL SIGALRM - setting amIdead var \n", chpl_nodeID);	
  }
  signal(SIGALRM, SIGALRM_handler);
}

static int pp2id =0;

static void fork_wrapper(fork_t *f) {
  if(PRINTING)
	printf("(fork_wrapper) %d (from %d) In AM_fork :::\n", chpl_nodeID, f->caller);
  if (f->arg_size)
    chpl_ftable_call(f->fid, &f->arg);
  else
    chpl_ftable_call(f->fid, NULL);
  GASNET_Safe(gasnet_AMRequestShort2(f->caller, SIGNAL,
                                     AckArg0(f->ack), AckArg1(f->ack)));
  chpl_mem_free(f, 0, 0);
}

static void AM_fork(gasnet_token_t token, void* buf, size_t nbytes) {
  fork_t *f = (fork_t*)chpl_mem_allocMany(nbytes, sizeof(char),
                                          CHPL_RT_MD_COMM_FRK_RCV_INFO, 0, 0);
                                          
  if(PRINTING)
	printf("(COMM_LAYER) %d (from %d) In AM_fork :::\n", chpl_nodeID, f->caller);
	
  /** NOTE TO SELF: Add check for remote place alive here before calling the function
  * look at the dead locale list locally owned 
  * this DOESN'T solve the parent failed case,
  * may solve the child failed */
  chpl_memcpy(f, buf, nbytes);
  chpl_task_startMovedTask((chpl_fn_p)fork_wrapper, (void*)f,
                           f->subloc, chpl_nullTaskID,
                           f->serial_state);
}

volatile sig_atomic_t sigdone = 0;
static volatile int sigread =0;


//WithExtras
static void fork_wrapper_res(fork_t *f) { //% invokes function directlt or creates task that evaluates the function
	int ret = 1;
	if(PRINTING)
		printf("(fork_wrapper_res)%d   ***********************-=-------*********amIdead %d \n ",chpl_nodeID, amIdead);
	if(amIdead){
		failed_t* newFailedNode= (failed_t*)chpl_mem_alloc(sizeof(failed_t), CHPL_RT_MD_COMM_DEAD_NODE, 0, 0);
		handled_failure=1;
		status_update =0;
		newFailedNode->dID = chpl_nodeID;
		newFailedNode->parentID = f->caller;
		newFailedNode->alive= 1;
		if(PRINTING)
			printf("(fork_wrapper_res) %d sending TIMEOUT to %d",chpl_nodeID, f->caller);
		GASNET_Safe(gasnet_AMRequestMedium0(f->caller, TIMEOUT, newFailedNode, sizeof(failed_t)));
		chpl_mem_free(newFailedNode, 0, 0);
	}else{ 		
		if (f->arg_size){
			if(PRINTING)
				printf("(fork_wrappe_res) %d chpl_ftable_call with arg \n", chpl_nodeID);		
			chpl_ftable_call(f->fid, &f->arg);
		}else{
			if(PRINTING)
				printf("(fork_wrapper_res) %d chpl_ftable_call without arg \n", chpl_nodeID);		
			chpl_ftable_call(f->fid, NULL);	
		}
		if(PRINTING)
			printf("(fork_wrapper_res)  %d sending SIGNAL to %d \n", chpl_nodeID,f->caller);	
		GASNET_Safe(gasnet_AMRequestShort2(f->caller, SIGNAL, AckArg0(f->ack), AckArg1(f->ack)));
		if(PRINTING)
			printf("(fork_wrapper_res)  %d sending SIGNAL to %d DONE!!! \n", chpl_nodeID,f->caller);
	}	
	assert(f);
	chpl_mem_free(f, 0, 0);	
	if(PRINTING)
			printf("(fork_wrapper_res)  %d DONE!!! \n", chpl_nodeID);
}

static void AM_fork_res (gasnet_token_t token, void* buf, size_t nbytes) {
	fork_t *f = (fork_t*)chpl_mem_allocMany(nbytes, sizeof(char),
                                          CHPL_RT_MD_COMM_FRK_RCV_INFO, 0, 0);      						
	int my_pid = getpid();	   
	chpl_memcpy(f, buf, nbytes); 
	if(PRINTING)
		printf("(AM_fork_res) %d (from %d) In AM_fork_res, my pid = %d my ppid = %d \n", chpl_nodeID, (int)f->caller, my_pid, getppid());  
		if(PRINTING)
			printf("(AM_fork_res) %d - Doing real work - startMovedTask\n ", chpl_nodeID);
		chpl_task_startMovedTask((chpl_fn_p)fork_wrapper_res, (void*)f,		
									f->subloc, chpl_nullTaskID,f->serial_state); 
}

static void fork_large_wrapper(fork_t* f) {
  void* arg = chpl_mem_allocMany(1, f->arg_size,
                                 CHPL_RT_MD_COMM_FRK_RCV_ARG, 0, 0);

  // A note on strict aliasing:
  // We used to say something like *(void**)f->arg,
  // but that leads to compiler errors about type-punning
  // since it breaks strict aliasing rules. The memcpy approach
  // employed here is one way around the problem, and a
  // more appealing solution would be to use a union.
  void* f_arg;
  chpl_memcpy(&f_arg, f->arg, sizeof(void*));

  chpl_comm_get(arg, f->caller, f_arg,
                f->arg_size, -1 /*typeIndex: unused*/, 1, 0, "fork large");
  chpl_ftable_call(f->fid, arg);
  GASNET_Safe(gasnet_AMRequestShort2(f->caller, SIGNAL,
                                     AckArg0(f->ack), AckArg1(f->ack)));

  chpl_mem_free(f, 0, 0);
  chpl_mem_free(arg, 0, 0);
}

////GASNET - can we send as much of user data as possible initially
////           hide data copy by making get non-blocking
////GASNET - can we allocate f big enough so as not to need malloc in wrapper
static void AM_fork_large(gasnet_token_t token, void* buf, size_t nbytes) {
  fork_t* f = (fork_t*)chpl_mem_allocMany(1, nbytes,
                                          CHPL_RT_MD_COMM_FRK_RCV_INFO,
                                          0, 0);
  chpl_memcpy(f, buf, nbytes);
  chpl_task_startMovedTask((chpl_fn_p)fork_large_wrapper, (void*)f,
                           f->subloc, chpl_nullTaskID,
                           f->serial_state);
}

static void fork_large_wrapper_res(fork_t* f) {
	int ret = 1;
	if(PRINTING)
		printf("(fork_large_wrapper_res)%d  amIdead %d \n ",chpl_nodeID, amIdead);
	if(amIdead){
		failed_t* newFailedNode= (failed_t*)chpl_mem_alloc(sizeof(failed_t), CHPL_RT_MD_COMM_DEAD_NODE, 0, 0);
		if(PRINTING)
			printf("(fork_large_wrapper_res)%d sending tTIMEOUT msg to parent \n",chpl_nodeID);
		newFailedNode->dID = chpl_nodeID;
		newFailedNode->parentID = f->caller;
		newFailedNode->alive= 1;
		GASNET_Safe(gasnet_AMRequestMedium0(f->caller, TIMEOUT, newFailedNode, sizeof(failed_t)));
		chpl_mem_free(newFailedNode, 0, 0);
	}else{ //all went well
		void* arg = chpl_mem_allocMany(1, f->arg_size, CHPL_RT_MD_COMM_FRK_RCV_ARG, 0, 0);
        void* f_arg;
        if(PRINTING)
			printf("(fork_large_wrapper_res)%d calling f with large arg \n",chpl_nodeID);
		chpl_memcpy(&f_arg, f->arg, sizeof(void*));
		chpl_comm_get(arg, f->caller, f_arg, f->arg_size, -1 /*typeIndex: unused*/, 1, 0, "fork large");
		chpl_ftable_call(f->fid, arg);
		GASNET_Safe(gasnet_AMRequestShort2(f->caller, SIGNAL, AckArg0(f->ack), AckArg1(f->ack)));
		chpl_mem_free(f, 0, 0);
		chpl_mem_free(arg, 0, 0);
	}
}

static void AM_fork_large_res(gasnet_token_t token, void* buf, size_t nbytes) {
    fork_t* f = (fork_t*)chpl_mem_allocMany(1, nbytes,
                                          CHPL_RT_MD_COMM_FRK_RCV_INFO,
                                          0, 0);
  int my_pid = getpid();	
  if(PRINTING)
	printf("(AM_fork_large_res) %d In AM_fork_large_res, my pid = %d my ppid = %d \n", chpl_nodeID, my_pid, getppid());  
  chpl_memcpy(f, buf, nbytes);
  chpl_task_startMovedTask((chpl_fn_p)fork_large_wrapper_res, (void*)f,
                           f->subloc, chpl_nullTaskID,
                           f->serial_state);
}

static void fork_nb_wrapper(fork_t *f) {
   if(PRINTING)
		printf("(fork_nb_wrapper) %d from %d  \n",chpl_nodeID, f->caller);
		
  if (f->arg_size)
    chpl_ftable_call(f->fid, &f->arg);
  else
    chpl_ftable_call(f->fid, NULL);
  chpl_mem_free(f, 0, 0);
}

static void AM_fork_nb(gasnet_token_t  token,
                        void           *buf,
                        size_t          nbytes) {
  fork_t *f = (fork_t*)chpl_mem_allocMany(nbytes, sizeof(char),
                                          CHPL_RT_MD_COMM_FRK_RCV_INFO,
                                          0, 0);
  chpl_memcpy(f, buf, nbytes);
  chpl_task_startMovedTask((chpl_fn_p)fork_nb_wrapper, (void*)f,
                           f->subloc, chpl_nullTaskID,
                           f->serial_state);
}

static void fork_nb_wrapper_res(fork_t *f){ 
	int ret = 1;
	int i;
	void* argCopy = NULL;
	struct buddies rembuddies;
	if(!amIdead){ 		//all went well
		chpl_comm_transitMsgAlt_p mymsg, head;
		assert(amIdead==0);
		locale_is_dead =2;//set locale_is_dead for the RT and module functions
		if(PRINTING){
			printf("(fork_wrapper_nb_res) %d   --> --> IN RECOVERY: %d RECOVERED LOCALE : %d  \n",chpl_nodeID, f->recoveryfl,f->recoveredLoc);
			printf("(fork_wrapper_nb_res)%d   ********** ALL GOOD  \n ",chpl_nodeID);
		}
		/***** execute the fork ********/
		if (f->arg_size){
			chpl_ftable_call(f->fid, &f->arg);
		}else{
			if(PRINTING)
				printf("(fork_wrapper_nb_res)%d without f->arg_size \n", chpl_nodeID);
			chpl_ftable_call(f->fid, NULL);	
		}		
		/***** pack IN_TRANSIT DEL ********/
		if(f->recoveryfl){ //check if this is a regular or recovery task
			if(PRINTING)
				printf("(fork_wrapper_nb_res)%d  task-fid %d is a RECOVERY TASK \n ",chpl_nodeID, f->fid);
		}else{
			if(PRINTING)
				printf("(fork_wrapper_nb_res)%d   task-fid %d is a NORMAL TASK TASK \n ",chpl_nodeID, f->fid);
		}
		if(PRINTING)
			printf("(fork_wrapper_nb_res)%d   pack transit mesg DEL  \n ",chpl_nodeID);
		mymsg = (chpl_comm_transitMsgAlt_p)chpl_mem_alloc(sizeof(struct chpl_comm_transitMsgAlt),CHPL_RT_MD_COMM_SEND_TRANSIT_MSG, 0, 0);  
		mymsg->src = f->caller;
		if(f->recoveryfl)
			mymsg->dst = f->recoveredLoc; 
		else
			mymsg->dst = (int)chpl_nodeID;
		mymsg->fid = f->fid;
		mymsg->arg_size = f->arg_size;	//no data ref, no mid, no next
		/**** send transit msg DEL *****/
		if(PRINTING)
			printf("(fork_wrapper_nb_res)%d transit mesg DELL: SRC: %d DST %d FID %d\n ",chpl_nodeID, mymsg->src, mymsg->dst, mymsg->fid);
		if(f->recoveryfl){
			if(PRINTING)
				printf("DEBUG --> (fork_wrapper_nb_res)%d  calculating buddies of recovered locale = %d \n", chpl_nodeID, f->recoveredLoc);
			rembuddies = calculateBuddies(f->recoveredLoc); //this doesn't work (it sends del to the wrong place byddy2 of adopter instead of buddy 2 of failed=			
			if(PRINTING){
				printf("(fork_wrapper_nb_res)%d  buddies of recovered %d are %d and %d \n", chpl_nodeID, f->recoveredLoc, rembuddies.first, rembuddies.second);
				printf("(fork_wrapper_nb_res)%d   ******fid = %d **** send IN_TRANSIT_DEL to buddy2 %d \n ",chpl_nodeID, f->fid, rembuddies.second);
			}
			//only sending to second buddy (first should be me)
			if(chpl_nodeID== rembuddies.first){
				printf("(fork_wrapper_nb_res)%d   *RECOVERYTASK*****fid = %d **** send IN_TRANSIT_DEL to buddy2 %d \n ",chpl_nodeID, f->fid, rembuddies.second);
				GASNET_Safe(gasnet_AMRequestMedium0((c_nodeid_t)rembuddies.second, IN_TRANSIT_DEL, mymsg, sizeof(struct chpl_comm_transitMsgAlt)));
			}
		}else{
			if(PRINTING)
				printf("(fork_wrapper_nb_res)%d   ******fid = %d **** send IN_TRANSIT_DEL to mybuddies %d %d \n ",chpl_nodeID, f->fid,myBuddies.first, myBuddies.second);
			GASNET_Safe(gasnet_AMRequestMedium0((c_nodeid_t)myBuddies.second, IN_TRANSIT_DEL, mymsg, sizeof(struct chpl_comm_transitMsgAlt)));
			GASNET_Safe(gasnet_AMRequestMedium0((c_nodeid_t)myBuddies.first, IN_TRANSIT_DEL, mymsg, sizeof(struct chpl_comm_transitMsgAlt)));
		}
		chpl_mem_free(mymsg, 0, 0);	 
	}else{ // I am dead - (SIGUSR1: task layer has shut down - is this a good idea?)
		int prev;
		failed_t* newFailed = (failed_t*)chpl_mem_alloc(sizeof(failed_t), CHPL_RT_MD_COMM_DEAD_NODE, 0, 0);
		assert(amIdead==1);
		if(PRINTING)
			printf("(fork_wrapper_nb_res)%d   ********** NOT  GOOD  \n ",chpl_nodeID);
		//set locale_is_dead for the RT and module functions (do I need this?)
		locale_is_dead =1;
		if(PRINTING){
			printf("(fork_wrapper_nb_res) %d   Setting locale_is_dead = %d  \n",chpl_nodeID, chpl_comm_getLocaleStatus());
			printf("(fork_wrapper_nb_res) %d   Creating failed_t  \n",chpl_nodeID);
		}
		
		/*NOTE TO SELF:
		 * should a dead locale - even if it has just discovered that it's dead- 
		 * be able to notify the secondary or so buddy locale to take care of a 
		 * recovery task? isn't that inventing data??
		 * 
		 * if it only notifies it's parent though..
		 * then the recovery task it took up to when the failure was discovered is lost
		 * also, if it could notify it's buddy for its failure AND the tasks 
		 * it has adopted, isn't that far-fetched? 
		 * 
		 * The approach we take here is:
		 * when a local failure is discovered while executing a local task (a task that was meant to execute here)
		 * then notify the primary buddy locale
		 * when a local failure is discovered while executing a recovery task of one of my guests
		 * then notify the secondary buddy (asserting I am the primary buddy) for the failure of the guest
		 * 
		 * this assumes that the failed locale (current node)is able to call fork_nb_wrapper 
		 * both from AM_fork_nb and AM_timeoutNB_alt
		 * and that it reaches the point where it realeses it is dead for EVERY request it receives after its death 
		 * */
		 
		if(f->recoveryfl){
			newFailed->dID= f->recoveredLoc;
			//newFailed->parentID = f->caller; //no idea who the parent is in this case - do I care?
			newFailed->alive=1;
			rembuddies = calculateBuddies(f->recoveredLoc); 
			if(chpl_nodeID== rembuddies.first);{ //what if I am the second buddy? then let it fail
				if(PRINTING)
					printf("(FW_NB_WE) %d -sending TIMEOUTNB with failed_t to %d 's 2nd buddy: %d \n",chpl_nodeID,f->recoveredLoc,rembuddies.second);
				GASNET_Safe(gasnet_AMRequestMedium0((c_nodeid_t)rembuddies.second, TIMEOUTNB, newFailed, sizeof(failed_t)));
			}
		}else{	
			newFailed->dID= chpl_nodeID; 			//my self - dead
			newFailed->parentID = f->caller;
			newFailed->alive=1;
			if(DPRINTING)
				printf("(fork_wrapper_nb_res) %d   --------------sending TIMEOUTNB with failed_to my 1st buddy: %d \n",chpl_nodeID, myBuddies.first);
			GASNET_Safe(gasnet_AMRequestMedium0((c_nodeid_t)myBuddies.first, TIMEOUTNB, newFailed, sizeof(failed_t)));
		}
		chpl_mem_free(newFailed, 0, 0);	
	}	 
	//chpl_mem_free(f, 0, 0);
}

static void AM_fork_nb_res(gasnet_token_t  token, void *buf, size_t nbytes) {
  fork_t *f;                            
  int i;
  f = (fork_t*)chpl_mem_allocMany(nbytes, sizeof(char), CHPL_RT_MD_COMM_FRK_RCV_INFO, 0, 0);                                        
  chpl_memcpy(f, buf, nbytes);
  if(PRINTING)
	printf("(AM_fork_nb_res) %d --my buddies are %d and %d \n ", chpl_nodeID,myBuddies.first, myBuddies.second);
  chpl_task_startMovedTask((chpl_fn_p)fork_nb_wrapper_res, (void*)f,
                           f->subloc, chpl_nullTaskID,
                           f->serial_state);
}


static void fork_nb_large_wrapper_res(fork_t* f) {
	int i;
	struct buddies rembuddies;
	if(!amIdead){ 		//all went well
		chpl_comm_transitMsgAlt_p mymsg, head;	
		void* arg = chpl_mem_allocMany(1, f->arg_size, CHPL_RT_MD_COMM_FRK_RCV_ARG, 0, 0);	
		void* f_arg;
		
		assert(amIdead==0);
		if(PRINTING)
			printf("(fork_nb_large_wrapper_res)%d   ********** ALL GOOD  \n ",chpl_nodeID);
		/** get argument */
		chpl_memcpy(&f_arg, f->arg, sizeof(void*));
		chpl_comm_get(arg, f->caller, f_arg, f->arg_size, -1 /*typeIndex: unused*/, 1, 0, "fork large");
		/** sent FREE to the caller */
		GASNET_Safe(gasnet_AMRequestMedium0(f->caller, FREE, &(f->ack), sizeof(f->ack)));	
		/***** execute the fork ********/
		if(PRINTING)
			printf("(fork_nb_large_wrapper_res)%d amIdead is %d executing fork \n ",chpl_nodeID, amIdead);
		chpl_ftable_call(f->fid, arg);
		/**** pack transit msg DEL *****/
		if(PRINTING)
			printf("(fork_nb_large_wrapper_res)%d   pack transit mesg DEL  \n ",chpl_nodeID);
		mymsg = (chpl_comm_transitMsgAlt_p)chpl_mem_alloc(sizeof(struct chpl_comm_transitMsgAlt),CHPL_RT_MD_COMM_SEND_TRANSIT_MSG, 0, 0);  		
		mymsg->src = f->caller;
		if(f->recoveryfl)
			mymsg->dst = f->recoveredLoc; 
		else
			mymsg->dst = (int)chpl_nodeID;
		mymsg->fid = f->fid;
		mymsg->arg_size = f->arg_size;
		
		/**** send transit msg DEL *****/
		if(PRINTING)
			printf("(fork_wrapper_nb_res)%d transit mesg DELL: SRC: %d DST %d FID %d\n ",chpl_nodeID, mymsg->src, mymsg->dst, mymsg->fid);
		if(f->recoveryfl){
			if(PRINTING)
				printf("DEBUG --> (fork_wrapper_nb_res)%d  calculating buddies of recovered locale = %d \n", chpl_nodeID, f->recoveredLoc);
			rembuddies = calculateBuddies(f->recoveredLoc); //this doesn't work (it sends del to the wrong place byddy2 of adopter instead of buddy 2 of failed=			
			if(PRINTING){
				printf("(fork_wrapper_nb_res)%d  buddies of recovered %d are %d and %d \n", chpl_nodeID, f->recoveredLoc, rembuddies.first, rembuddies.second);
				printf("(fork_wrapper_nb_res)%d   ******fid = %d **** send IN_TRANSIT_DEL to buddy2 %d \n ",chpl_nodeID, f->fid, rembuddies.second);
			}
			//only sending to second buddy (first should be me)
			if(chpl_nodeID== rembuddies.first)
				GASNET_Safe(gasnet_AMRequestMedium0((c_nodeid_t)rembuddies.second, IN_TRANSIT_DEL, mymsg, sizeof(struct chpl_comm_transitMsgAlt)));
		}else{
			if(PRINTING)
				printf("(fork_wrapper_nb_res)%d   ******fid = %d **** send IN_TRANSIT_DEL to mybuddies %d %d \n ",chpl_nodeID, f->fid,myBuddies.first, myBuddies.second);
			GASNET_Safe(gasnet_AMRequestMedium0((c_nodeid_t)myBuddies.first, IN_TRANSIT_DEL, mymsg, sizeof(struct chpl_comm_transitMsgAlt)));
			GASNET_Safe(gasnet_AMRequestMedium0((c_nodeid_t)myBuddies.second, IN_TRANSIT_DEL, mymsg, sizeof(struct chpl_comm_transitMsgAlt)));
		}
		chpl_mem_free(mymsg, 0, 0);	
		chpl_mem_free(f, 0, 0);
  		chpl_mem_free(arg, 0, 0);
	}else{ // I am dead
		failed_t* newFailed = (failed_t*)chpl_mem_alloc(sizeof(failed_t), CHPL_RT_MD_COMM_DEAD_NODE, 0, 0);
	
		assert(amIdead==1);
		/**pack failed_t*/
		newFailed->dID= chpl_nodeID;
		newFailed->parentID = f->caller;
		newFailed->alive=1;
		
		if(PRINTING)
			printf("(fork_wrapper_nb_large_res)%d   ********** NOT  GOOD  \n ",chpl_nodeID);
		locale_is_dead =1;
		if(PRINTING){
			printf("(fork_wrapper_nb_large_res) %d   Setting locale_is_dead = %d  \n",chpl_nodeID, chpl_comm_getLocaleStatus());
			printf("(fork_wrapper_nb_large_res) %d   Creating failed_t  \n",chpl_nodeID);
		}
		if(f->recoveryfl){
			newFailed->dID= f->recoveredLoc;
			//newFailed->parentID = f->caller; //no idea who the parent is in this case - do I care?
			newFailed->alive=1;
			rembuddies = calculateBuddies(f->recoveredLoc); 
			if(chpl_nodeID== rembuddies.first);{ //what if I am the second buddy? then let it fail
				if(PRINTING)
					printf("(fork_wrapper_nb_large_res) %d -sending TIMEOUTNB with failed_t to %d 's 2nd buddy: %d \n",chpl_nodeID,f->recoveredLoc,rembuddies.second);
				GASNET_Safe(gasnet_AMRequestMedium0((c_nodeid_t)rembuddies.second, TIMEOUTNB, newFailed, sizeof(failed_t)));
			}
		}else{	
			newFailed->dID= chpl_nodeID; 			//my self - dead
			newFailed->parentID = f->caller;
			newFailed->alive=1;
			if(PRINTING)
				printf("(fork_wrapper_nb_large_res) %d sending TIMEOUTNB with failed_to my 1st buddy: %d \n",chpl_nodeID, myBuddies.first);
			GASNET_Safe(gasnet_AMRequestMedium0((c_nodeid_t)myBuddies.first, TIMEOUTNB, newFailed, sizeof(failed_t)));
		}
		chpl_mem_free(newFailed, 0, 0);
	}	
}

static void AM_fork_nb_large_res(gasnet_token_t token, void* buf, size_t nbytes) {
  fork_t* f = (fork_t*)chpl_mem_allocMany(1, nbytes,
                                          CHPL_RT_MD_COMM_FRK_RCV_INFO,
                                          0, 0);
  chpl_memcpy(f, buf, nbytes);
  chpl_task_startMovedTask((chpl_fn_p)fork_nb_large_wrapper_res, (void*)f,
                           f->subloc, chpl_nullTaskID,
                           f->serial_state);
}

static void fork_nb_large_wrapper(fork_t* f) {
  void* arg = chpl_mem_allocMany(1, f->arg_size,
                                 CHPL_RT_MD_COMM_FRK_RCV_ARG, 0, 0);

  // See "A note on strict aliasing" in fork_large_wrapper
  void* f_arg;
  chpl_memcpy(&f_arg, f->arg, sizeof(void*));

  chpl_comm_get(arg, f->caller, f_arg,
                f->arg_size, -1 /*typeIndex: unused*/, 1, 0, "fork large");
  GASNET_Safe(gasnet_AMRequestMedium0(f->caller,
                                      FREE,
                                      &(f->ack),
                                      sizeof(f->ack)));
  chpl_ftable_call(f->fid, arg);
  chpl_mem_free(f, 0, 0);
  chpl_mem_free(arg, 0, 0);
}

static void AM_fork_nb_large(gasnet_token_t token, void* buf, size_t nbytes) {
  fork_t* f = (fork_t*)chpl_mem_allocMany(1, nbytes,
                                          CHPL_RT_MD_COMM_FRK_RCV_INFO,
                                          0, 0);
  chpl_memcpy(f, buf, nbytes);
  chpl_task_startMovedTask((chpl_fn_p)fork_nb_large_wrapper, (void*)f,
                           f->subloc, chpl_nullTaskID,
                           f->serial_state);
}



//hanlder for IN_TRANSIT signal (called on buddy locales)
static void AM_in_transit(gasnet_token_t token, void* buf, size_t nbytes) {
   if(!amIdead){	
	chpl_comm_transitMsgAlt_p transitInfo = (chpl_comm_transitMsgAlt_p) chpl_mem_allocMany(1, nbytes, CHPL_RT_MD_COMM_RECV_TRANSIT_MSG, 0, 0);      	                                 	
	chpl_memcpy(transitInfo, buf, nbytes);
	//pro-active recovery
	if(failed_table[transitInfo->dst].alive==1 &&  failed_table[transitInfo->dst].parentID == 999){ //need to do recovery 
		fork_t* recoveryFork;
		int f_size;
		printf("(AM_in_transit) %d  Starting Recovery for node = %d \n ", chpl_nodeID, transitInfo->dst);
		failed_table[transitInfo->dst].parentID = transitInfo->src;
		
		f_size = sizeof(fork_t) + (transitInfo->arg_size);
		recoveryFork = (fork_t*)chpl_mem_allocMany(f_size, sizeof(char), CHPL_RT_MD_COMM_FRK_SND_INFO, 0, 0);
		recoveryFork->caller =transitInfo->src;  				
		recoveryFork->subloc =0;
		recoveryFork->ack = recoveryFork; 					
		recoveryFork->serial_state = chpl_task_getSerial();		
		recoveryFork->fid = transitInfo->fid;
		recoveryFork-> arg_size = transitInfo->arg_size;
		recoveryFork->recoveryfl = 1; 		//set it as a recovery task
		recoveryFork->recoveredLoc = transitInfo->dst; 
		chpl_memcpy(&(recoveryFork->arg), transitInfo->arg, transitInfo->arg_size);
		recoveredAlready = transitInfo->dst;
		if(DPRINTING){
			printf("(AM_in_transit) %d  **** Launching Recovery Fork  caller: %d  fid: %d  arg_size: %d arg %d in recovery %d recoveredlocale %d\n",
				chpl_nodeID, recoveryFork->caller, recoveryFork->fid, recoveryFork->arg_size, *((int*)recoveryFork->arg), recoveryFork->recoveryfl, recoveryFork->recoveredLoc);
  		}
		chpl_task_startMovedTask((chpl_fn_p)fork_nb_wrapper_res, (void*)recoveryFork,
		recoveryFork->subloc, chpl_nullTaskID,
		recoveryFork->serial_state);
		printf("(AM_in_transit) %d  **** Recovery Fork DONE \n", chpl_nodeID);
    }else{ //add to list
	
		if(PRINTING)
			printf("(AM_in_transit) %d  addTransits() call\n ", chpl_nodeID);
		if(myGuests.first == transitInfo->dst){
			guest1list = addTransitMsg(guest1list,transitInfo);
			if(PRINTING)
				printf("(AM_in_transit) %d  added to my 1st list - sender %d \n ", chpl_nodeID, transitInfo->dst);
		}else if(myGuests.second == transitInfo->dst){
			guest2list = addTransitMsg(guest2list,transitInfo);
			if(PRINTING)
				printf("(AM_in_transit) %d  added to my 2nd list - sender %d \n ", chpl_nodeID, transitInfo->dst);
		}else{
			printf("(AM_in_transit) %d  ERROR: not hosting data from loc %d\n ", chpl_nodeID, transitInfo->dst);	 
		}
		if(PRINTING)
			printf("(AM_in_transit) %d  DONE\n ", chpl_nodeID);
	}
  }else{
	  printf(" AM_in_transit - I AM  DEAD %d\n\n", chpl_nodeID);
 }
}

static void AM_signal(gasnet_token_t token, gasnet_handlerarg_t a0, gasnet_handlerarg_t a1) {
  done_t* done = (done_t*) get_ptr_from_args(a0, a1);
  uint_least32_t prev;
  prev = atomic_fetch_add_explicit_uint_least32_t(&done->count, 1,
                                                  memory_order_seq_cst);
  if (prev + 1 == done->target)
    done->flag = 1;
}

static void AM_priv_bcast(gasnet_token_t token, void* buf, size_t nbytes) {
  priv_bcast_t* pbp = buf;
  chpl_memcpy(chpl_private_broadcast_table[pbp->id], pbp->data, pbp->size);

  // Signal that the handler has completed
  GASNET_Safe(gasnet_AMReplyShort2(token, SIGNAL,
                                   AckArg0(pbp->ack), AckArg1(pbp->ack)));
}

static void AM_priv_bcast_large(gasnet_token_t token, void* buf, size_t nbytes) {
  priv_bcast_large_t* pblp = buf;
  chpl_memcpy((char*)chpl_private_broadcast_table[pblp->id]+pblp->offset, pblp->data, pblp->size);

  // Signal that the handler has completed
  GASNET_Safe(gasnet_AMReplyShort2(token, SIGNAL,
                                   AckArg0(pblp->ack), AckArg1(pblp->ack)));
}

static void AM_free(gasnet_token_t token, void* buf, size_t nbytes) {
  fork_t* f;
  void* f_arg;
  
  // See "A note on strict aliasing" in fork_large_wrapper
  chpl_memcpy(&f, buf, sizeof(fork_t*));
  chpl_memcpy(&f_arg, f->arg, sizeof(void*));

  chpl_mem_free(f_arg, 0, 0);
  chpl_mem_free(f, 0, 0);
}

//UNUSED
static void AM_free_tm(gasnet_token_t token, void* buf, size_t nbytes) {
  /*chpl_comm_transitMsgAlt_p tm =(chpl_comm_transitMsgAlt_p)chpl_mem_alloc( sizeof(struct chpl_comm_transitMsgAlt), 
	                                        CHPL_RT_MD_COMM_RECV_TRANSIT_MSG, 0, 0);
  char* tm_arg;
  // See "A note on strict aliasing" in fork_large_wrapper
  memcpy(tm, buf, sizeof(struct chpl_comm_transitMsgAlt));
  memcpy(&tm_arg, &tm->data, sizeof(char*));
  chpl_mem_free(tm_arg, 0, 0);
  chpl_mem_free(tm, 0, 0);
  */
}

// this is currently unused; it's intended to be used to implement
// exit_any with cleanup on all nodes. 
static void AM_exit_any(gasnet_token_t token, void* buf, size_t nbytes) {
//  int **status = (int**)buf; // Some compilers complain about unused variable 'status'.
  chpl_internal_error("clean exit_any is not implemented.");
  // here we basically need to call chpl_exit_all, but we need to
  // ensure only one thread calls chpl_exit_all on this locale.
}

//
// This global and routine are used to broadcast the seginfo_table at the outset
// of the program's execution.  It is designed to only be used once.  This code
// was modeled after the _test_segbcast() routine in
// third-party/gasnet/GASNet-*/tests/test.h
//
static int bcast_seginfo_done = 0;
static void AM_bcast_seginfo(gasnet_token_t token, void *buf, size_t nbytes) {
  assert(nbytes == sizeof(gasnet_seginfo_t)*gasnet_nodes());
  chpl_memcpy(seginfo_table, buf, nbytes);
  gasnett_local_wmb();
  bcast_seginfo_done = 1;
}


static int failed_table_done = 0;
static void AM_bcast_fail_table(gasnet_token_t token, void *buf, size_t nbytes) {
	assert(nbytes == sizeof(failed_t)*gasnet_nodes());
	chpl_memcpy(failed_table, buf, nbytes);
	gasnett_local_wmb();
	failed_table_done = 1;	
}

//UNUSED
static void AM_pid(gasnet_token_t token, void *buf, size_t nbytes) { /*NOT USED*/
/*	nodePID_t* aNode = (nodePID_t*)chpl_mem_alloc(sizeof(update_t), CHPL_RT_MD_COMM_PID_NODE, 0, 0);
	memcpy(aNode, buf, nbytes);	
	locale_pid[aNode->nID].nID = aNode->nID;
	locale_pid[aNode->nID].pID = aNode->pID;
	printf("(COMM LAYER) %d AM_pid::  registering node %d  with pid = %d \n\n",chpl_nodeID, aNode->nID, aNode->pID);
	chpl_mem_free(aNode, 0, 0);
	failed_table_done = 1;	
*/}

static void AM_timeout(gasnet_token_t token, void *buf, size_t nbytes) {
  	
	failed_t* newFailed2 = (failed_t*)chpl_mem_alloc(sizeof(failed_t), CHPL_RT_MD_COMM_DEAD_NODE, 0, 0);
	chpl_memcpy(newFailed2, buf, nbytes);
	if(PRINTING)
		printf("(COMM_LAYER) %d In AM_timeout : setting timeout flag ******\n", chpl_nodeID);
	timeoutflag = 1;
	processedAMtimeoutNB=1;
	if(PRINTING)
		printf("(COMM_LAYER) %d In AM_timeout : ****** processedAMtimeoutNB == %d\n",chpl_nodeID, processedAMtimeoutNB);
	chpl_mem_free(newFailed2, 0, 0);
}

//res-buddy locales version
static void AM_timeout_nb(gasnet_token_t token, void *buf, size_t nbytes) {

if(!amIdead){	
	failed_t* failedNode = (failed_t*)chpl_mem_alloc(sizeof(failed_t), CHPL_RT_MD_COMM_DEAD_NODE, 0, 0);
	int idToRecover,f_size, rec, coworker;
	int found =0;
	chpl_comm_transitMsgAlt_p foundMsg = NULL;	
	chpl_comm_transitMsgAlt_p listHead;
	fork_t* recoveryFork;
	struct buddies recbuddies;
	recoveriesSum++;
	chpl_memcpy(failedNode, buf, nbytes);
	idToRecover = failedNode->dID;
	if(DPRINTING)
		printf("(AM_timeout_nb) %d reading failed_t idToRecover= %d (dst)\n", chpl_nodeID, idToRecover);
	//record failure
	rec = recordFailure(idToRecover, failedNode->parentID);
	//check if this has been already recovered!!!
	printf("(AM_timeout_nb) %d idToRecover= %d recoveredAlready=%d \n", chpl_nodeID, idToRecover, recoveredAlready);
	if(recoveredAlready!=idToRecover){	
	
	if(DPRINTING)
		printf("(AM_timeout_nb %d: Before lookupMsgsg WITH ID=%d\n", chpl_nodeID, idToRecover);
	//pick one guestlist
	if(myGuests.first ==idToRecover){		 	
		foundMsg = lookupMsg(guest1list, idToRecover);		
	}else if(myGuests.second ==idToRecover){
		foundMsg = lookupMsg(guest2list, idToRecover);
	}else{
		printf("(AM_timeout_nb %d: ERROR: not hosting data from loc %d\n", chpl_nodeID, idToRecover);
	}
	if(foundMsg!=NULL)
			found=1;
	//assert(foundMsg);
	if(PRINTING){
		printf("(AM_timeout_nb) %d after foundMsg= %d  fid = %d \n", chpl_nodeID, found, foundMsg->fid);
		printTransits(guest1list);
		printTransits(guest2list);
	}
	//recover task
	if(found){
		f_size = sizeof(fork_t) + (foundMsg->arg_size);
		recoveryFork = (fork_t*)chpl_mem_allocMany(f_size, sizeof(char), CHPL_RT_MD_COMM_FRK_SND_INFO, 0, 0);
		recoveryFork->caller =foundMsg->src;  				//chpl_nodeID; //(int)chpl_nodeID; //add myself as dst and caller?
		recoveryFork->subloc =0;
		recoveryFork->ack = recoveryFork; 					//will I use this?// local execution //probably not
		recoveryFork->serial_state = chpl_task_getSerial();		// true if not allowed to spawn new threads
		recoveryFork->fid = foundMsg->fid;
		recoveryFork-> arg_size = foundMsg->arg_size;
		//set it as a recovery 
		recoveryFork->recoveryfl = 1;
		recoveryFork->recoveredLoc = idToRecover; //failedNode->dID;
		chpl_memcpy(&(recoveryFork->arg), foundMsg->arg, foundMsg->arg_size);
		if(DPRINTING){
			printf (" DEBUGGG (AM_timeout_nb) %d id to recover %d recoveredLoc %d failedNode->dID %d \n",chpl_nodeID, idToRecover, recoveryFork->recoveredLoc, failedNode->dID);
			printf("(AM_timeout_nb) %d  **** Launching Recovery Fork  caller: %d  fid: %d  arg_size: %d arg %d in recovery %d recoveredlocale %d\n",
				chpl_nodeID, recoveryFork->caller, recoveryFork->fid, recoveryFork->arg_size, *((int*)recoveryFork->arg), recoveryFork->recoveryfl, recoveryFork->recoveredLoc);
  		}
		chpl_task_startMovedTask((chpl_fn_p)fork_nb_wrapper_res, (void*)recoveryFork,
		recoveryFork->subloc, chpl_nullTaskID,
		recoveryFork->serial_state);
		
		if(PRINTING){
			printf("(AM_timeout_nb%d  :: Before deleteMsgArg\n", chpl_nodeID);
			printTransits(guest1list);
			printTransits(guest2list);
		}
		if(myGuests.first ==idToRecover){
			guest1list = deleteMsgArg(guest1list, foundMsg, 1); //recovery flag is set
		}else if(myGuests.second ==idToRecover){
			guest2list = deleteMsgArg(guest2list, foundMsg, 1); //recovery flag is set
		}else{
			printf("(AM_timeout_nb %d: ERROR: not hosting data of loc %d\n", chpl_nodeID, idToRecover);
		}
		if(PRINTING){
			printf("(AM_timeout_nb %d  :: After deleteMsgArg\n", chpl_nodeID);
			printTransits(guest1list);
			printTransits(guest2list);
		}
	}else{ //___ MSG not found. No recovery.
		recbuddies = calculateBuddies(idToRecover);
		assert(chpl_nodeID == recbuddies.first || chpl_nodeID == recbuddies.second);
		if(chpl_nodeID == recbuddies.first)
			coworker = recbuddies.second;
		else
			coworker = recbuddies.first;
		
		/*NOTE TO SELF : 
		 * Recovery on the first buddy locale will execute either on AM_in_transit or on AM_timeout_nb
		 * When recovery happens on Am_in_transit the message is not added to the transit list of 
		 * the 1st buddy locale -> from the above snippet we get msg !found -> pass to the second buddy locale for recovery
		 * -- instead buddy locale should notify for the execution (somehow)
		 * So, we can either choose to do recovery on buddy locale 1 in 2 places 
		 * OR allow recovery to fallback to buddy locale 2*/
		
		if(chpl_nodeID == recbuddies.first){
			if(DPRINTING)
			printf("(AM_timeout_nb) %d not found. passing to 2nd buddy : %d ### NOT\n", chpl_nodeID, coworker);
			//GASNET_Safe(gasnet_AMRequestMedium0((c_nodeid_t)coworker, TIMEOUTNB, failedNode, sizeof(failed_t)));
		}else{
			if(DPRINTING)
				printf("(AM_timeout_nb) %d  I am the 2nd buddy - raise FATAL ERROR  \n", chpl_nodeID);
			//chpl_task_exit();// exit_common(1); - the compiler complains about this
			//fprintf(stderr, "ERROR : TOO MANY FAILURES \n Aborting...\n  " );    
      		//fflush(stderr);
      		chpl_error("ERROR : TOO MANY FAILURES \n Aborting...\n  ", 0, NULL);
			gasnet_exit(1);
		}
	}		
	chpl_mem_free(failedNode, 0, 0);

	}else{
		printf("(AM_timeout_nb) %d Already recovered task on node %d -- NOT DOING ANYTHING \n", chpl_nodeID, idToRecover);
	}
 }else{
	chpl_error("ERROR : TOO MANY FAILURES \n Aborting...\n  ", 0, NULL);
	gasnet_exit(1);	 
}
}


static void AM_notification(gasnet_token_t token, void *buf, size_t nbytes) {
  if(!amIdead){	
	failed_t* ft = (failed_t*)chpl_mem_allocMany(1, chpl_numNodes*sizeof(failed_t), CHPL_RT_MD_COMM_DEAD_NODE, 0, 0);
	int rec;
	chpl_memcpy(ft, buf, nbytes);
	printf("(AM_notification) %d Received ID %d\n",chpl_nodeID, ft->dID);
	rec = recordFailure(ft->dID, ft->parentID);
  }
}

//UNUSED
static void AM_timeout_other (gasnet_token_t token, void *buf, size_t nbytes){
	
	fork_t* recfork = (fork_t*)chpl_mem_allocMany(nbytes, sizeof(char),
                                          CHPL_RT_MD_COMM_FRK_RCV_INFO,
                                          0, 0);
	if(PRINTING)                                      
		printf("(COMM_LAYER) %d In AM_timeout_other -- started\n", chpl_nodeID);
	chpl_memcpy(recfork, buf, nbytes);
	if(PRINTING)
		printf("(COMM_LAYER) %d In AM_timeout_other -- calling chpl_ftable_call (recfork);\n", chpl_nodeID);
	//fork_nb_wrapper_res(recfork);
	chpl_ftable_call(recfork->fid, recfork->arg);
	if(PRINTING)
		printf("(COMM_LAYER) %d In AM_timeout_other -- DONE!!!\n", chpl_nodeID);
}

//UNUSED
static void AM_quit(gasnet_token_t token, void* buf, size_t nbytes) {
	/*quit_t* quitter =(quit_t*)chpl_mem_alloc(sizeof(quit_t), CHPL_RT_MD_COMM_QUIT_SIGNAL, 0, 0); 
	chpl_memcpy(quitter, buf, nbytes);
	if(PRINTING)   
		printf("(++++++++++++++) %d In AM_quit -- calling exit\n", chpl_nodeID);
	if(quitter->quit_bool){
		gasnet_exit(2);
	}
	chpl_mem_free(quitter, 0, 0);
	*/
}


static void AM_failed_nodes(gasnet_token_t token, void* buf, size_t nbytes) {
	failed_t* ft = (failed_t*)chpl_mem_allocMany(1, chpl_numNodes*sizeof(failed_t), CHPL_RT_MD_COMM_DEAD_NODE, 0, 0);
	int i;
	chpl_memcpy(ft, buf, nbytes);
	for (i=0; i<chpl_numNodes; i++) {
		if (ft[i].alive == 1){
			printf("(AM_failed_nodes) %d :: found %d dead \n",chpl_nodeID, i);
			failed_table[i].alive == 1;
		}
	}
	chpl_mem_free(ft, 0, 0);
}



// Put from arg->src (which is local to the AM handler) back to
// arg->dst (which is local to the caller of this AM).
// nbytes is < gasnet_AMMaxLongReply here (see chpl_comm_get).
static void AM_reply_put(gasnet_token_t token, void* buf, size_t nbytes) {
  xfer_info_t* x = buf;

  assert(nbytes == sizeof(xfer_info_t));

  GASNET_Safe(gasnet_AMReplyLong2(token, SIGNAL,
                                  x->src, x->size, x->tgt,
                                  AckArg0(x->ack), AckArg1(x->ack)));
}

// Copy from the payload in this active message to dst.
static
void AM_copy_payload(gasnet_token_t token, void* buf, size_t nbytes,
                     gasnet_handlerarg_t ack0, gasnet_handlerarg_t ack1,
                     gasnet_handlerarg_t dst0, gasnet_handlerarg_t dst1)
{
  void* dst = get_ptr_from_args(dst0, dst1);

  memcpy(dst, buf, nbytes);

  GASNET_Safe(gasnet_AMReplyShort2(token, SIGNAL, ack0, ack1));
}

static gasnet_handlerentry_t ftable[] = {
  {FORK,          		AM_fork},
  {FORK_LARGE,    		AM_fork_large},
  {FORK_NB,       		AM_fork_nb},
  {FORK_NB_LARGE, 		AM_fork_nb_large},
  {FORK_FAST,     		AM_fork_fast},
  {SIGNAL,        		AM_signal},
  {PRIV_BCAST,    		AM_priv_bcast},
  {PRIV_BCAST_LARGE, 	AM_priv_bcast_large},
  {FREE,          		AM_free},
  {EXIT_ANY,      		AM_exit_any},
  {BCAST_SEGINFO, 		AM_bcast_seginfo},
  {DO_REPLY_PUT,  		AM_reply_put},
  {DO_COPY_PAYLOAD, 	AM_copy_payload},
  {FAIL, 		     	AM_fail}, 					/*resilience*/
  {FAIL_UPDATE_REPLY, 	AM_fail_update_reply}, 		/*resilience*/
  {IN_TRANSIT,       	AM_in_transit}, 			/*resilience*/
  {IN_TRANSIT_LARGE,    AM_in_transit_large}, 			/*resilience*/
  {BCAST_FAIL_TABLE,	AM_bcast_fail_table}, 		/*resilience*/		
  {FAIL_UPDATE_REQUEST, AM_fail_update_request},	/*resilience*/
  {FORK_RES, 			AM_fork_res}, 				/*resilience*/
  {PID, 				AM_pid}, 					/*resilience*/
  {TIMEOUT, 			AM_timeout}, 				/*resilience*/
  {FORK_RES_LARGE,		AM_fork_large_res},			/*resilience*/
  {FORK_NB_RES,			AM_fork_nb_res},			/*resilience*/
  {IN_TRANSIT_DEL,		AM_in_transit_del},			/*resilience*/
 // {IN_TRANSIT_DEL_LARGE,AM_in_transit_del_large},	/*resilience*/
  {TIMEOUTNB,		    AM_timeout_nb},				/*resilience*/
  {FORK_NB_RES_LARGE,	AM_fork_nb_large_res},		/*resilience*/
  {QUIT,				AM_quit},					//UNUSED?
  {TIMEOUTOTHER,		AM_timeout_other},			//UNUSED?
  {GUESTFAILURE,		AM_guest_failure},			/*resilience*/
  {BUDDYFAILURE, 		AM_buddy_failure},			/*resilience*/
  {FAILEDNODES, 		AM_failed_nodes},
  {NOTIFICATION, 		AM_notification}
};

//
// Chapel interface starts here
//
chpl_comm_nb_handle_t chpl_comm_put_nb(void *addr, c_nodeid_t node, void* raddr,
                                       size_t elemSize, int32_t typeIndex,
                                       size_t len,
                                       int ln, c_string fn)
{
  size_t nbytes = elemSize*len;
  gasnet_handle_t ret;

  // Should be in the compiler macros file?
  chpl_vdebug_log_put_nb(addr, node, raddr, elemSize, typeIndex, len, ln, fn);

  ret = gasnet_put_nb_bulk(node, raddr, addr, nbytes);

  if (chpl_comm_diagnostics && !chpl_comm_no_debug_private) {
    chpl_sync_lock(&chpl_comm_diagnostics_sync);
    chpl_comm_commDiagnostics.put_nb++;
    chpl_sync_unlock(&chpl_comm_diagnostics_sync);
  }

  return (chpl_comm_nb_handle_t) ret;
}

chpl_comm_nb_handle_t chpl_comm_get_nb(void* addr, c_nodeid_t node, void* raddr,
                                       size_t elemSize, int32_t typeIndex,
                                       size_t len,
                                       int ln, c_string fn)
{
  size_t nbytes = elemSize*len;
  gasnet_handle_t ret;

  // Visual Debug Support
  chpl_vdebug_log_get_nb(addr, node, raddr, elemSize, typeIndex, len, ln, fn);

  ret = gasnet_get_nb_bulk(addr, node, raddr, nbytes);

  if (chpl_comm_diagnostics && !chpl_comm_no_debug_private) {
    chpl_sync_lock(&chpl_comm_diagnostics_sync);
    chpl_comm_commDiagnostics.get_nb++;
    chpl_sync_unlock(&chpl_comm_diagnostics_sync);
  }

  return (chpl_comm_nb_handle_t) ret;
}

int chpl_comm_test_nb_complete(chpl_comm_nb_handle_t h)
{
  return ((void*)h) == NULL;
}

void chpl_comm_wait_nb_some(chpl_comm_nb_handle_t* h, size_t nhandles)
{
  assert(NULL == GASNET_INVALID_HANDLE);  // serious confusion if not so
  gasnet_wait_syncnb_some((gasnet_handle_t*) h, nhandles);
}

int chpl_comm_try_nb_some(chpl_comm_nb_handle_t* h, size_t nhandles)
{
  assert(NULL == GASNET_INVALID_HANDLE);  // serious confusion if not so
  return gasnet_try_syncnb_some((gasnet_handle_t*) h, nhandles) == GASNET_OK;
}

int chpl_comm_is_in_segment(c_nodeid_t node, void* start, size_t len)
{
#ifdef GASNET_SEGMENT_EVERYTHING
  return 0;
#else
  uintptr_t segstart, segend;
  uintptr_t reqstart, reqend;

  segstart = (uintptr_t) seginfo_table[node].addr;
  segend = segstart + seginfo_table[node].size;
  reqstart = (uintptr_t) start;
  reqend = reqstart + len;

  if( segstart <= reqstart &&
      reqstart <= segend &&
      segstart <= reqend &&
      reqend <= segend) {
    return 1;
  }

  return 0;
#endif
}


int32_t chpl_comm_getMaxThreads(void) {
  return GASNETI_MAX_THREADS-1;
}

//
// On all locales, we'll do the primary polling in a thread of control
// managed by the tasking layer, so that it can coordinate the use of
// hardware resources for polling and user tasks.  This symmetry will
// also allow the tasking layer to minimize its locale-based behavioral
// differences and simplify our analysis of performance effects due to
// polling.  We'll refer to this thread of control as the "polling task"
// even though the tasking layer can implement it however it likes, as a
// task or thread or whatever.
//
static volatile int pollingRunning;
static volatile int pollingQuit;

static void polling(void* x) {
  pollingRunning = 1;
  while (!pollingQuit) {
	if(amIdead && !once){
		int failurenotification;
		failed_t* newFailedNode;
		printf("%d -- DEAD ***** ****** ***** \n", chpl_nodeID);
		once=1;
		/**alt_timeout_impl*/
		newFailedNode= (failed_t*)chpl_mem_alloc(sizeof(failed_t), CHPL_RT_MD_COMM_DEAD_NODE, 0, 0);
		newFailedNode->dID = chpl_nodeID;
		newFailedNode->parentID = 999;
		newFailedNode->alive= 1;
		//failurenotification = (int)chpl_nodeID;
		GASNET_Safe(gasnet_AMRequestMedium0(myBuddies.first, NOTIFICATION, newFailedNode, sizeof(failed_t)));
		/***/
	}
    (void) gasnet_AMPoll(); //status monitor here?
    chpl_task_yield();
  }
  pollingRunning = 0;
}

static void set_max_segsize_env_var(size_t size) {
  char segsizeval[22]; // big enough for an unsigned 64-bit quantity

  snprintf(segsizeval, sizeof(segsizeval), "%zd", size);
  if (setenv("GASNET_MAX_SEGSIZE", segsizeval, 1) != 0) {
    chpl_error("Cannot setenv(\"GASNET_MAX_SEGSIZE\")", 0, NULL);
  }
}

static void set_max_segsize() {
  FILE* file = NULL;
  size_t size;

  if ((size = chpl_comm_getenvMaxHeapSize()) != 0) {
    set_max_segsize_env_var(size);
    return;
  }

  // If GASNET_NEEDS_MAX_SEGSIZE is defined then we have to have
  // GASNET_MAX_SEGSIZE set.  Otherwise, we don't.
#ifdef GASNET_NEEDS_MAX_SEGSIZE
  if (getenv("GASNET_MAX_SEGSIZE")) {
    return;
  }

  // Use 90% of the available memory as the maximum segment size,
  // heuristically
  if ((size = chpl_bytesAvailOnThisLocale()) != 0) {
    set_max_segsize_env_var((size_t) (0.9 * size));
    return;
  }

  chpl_internal_error("Could not determine maximum segment size");
#endif
}

void chpl_comm_init(int *argc_p, char ***argv_p) {
//  int status; // Some compilers complain about unused variable 'status'.

  set_max_segsize();

  assert(sizeof(gasnet_handlerarg_t)==sizeof(uint32_t));
  gasnet_init(argc_p, argv_p);
  chpl_nodeID = gasnet_mynode();
  chpl_numNodes = gasnet_nodes();
  GASNET_Safe(gasnet_attach(ftable, 
                            sizeof(ftable)/sizeof(gasnet_handlerentry_t),
                            gasnet_getMaxLocalSegmentSize(),
                            0));
                            
 
  
#undef malloc
  seginfo_table = (gasnet_seginfo_t*)malloc(chpl_numNodes*sizeof(gasnet_seginfo_t));
  failed_table = (failed_t*)malloc(chpl_numNodes*sizeof(failed_t)); 	
  
 	
   //set signal handlers
  signal(SIGUSR1, SIGUSR1_handler);
  //
  // The following call has no real effect on the .addr and .size
  // fields for GASNET_SEGMENT_EVERYTHING, but is recommended to be
  // used anyway (see third-party/gasnet/GASNet-version/tests/test.h)
  // in order to ensure that the seginfo_table array is initialized
  // appropriately on all locales.
  //
  GASNET_Safe(gasnet_getSegmentInfo(seginfo_table, chpl_numNodes));
#ifdef GASNET_SEGMENT_EVERYTHING
  //
  // For SEGMENT_EVERYTHING, there is no GASNet-provided memory
  // segment, so instead we're going to create our own fake segment
  // in order to share the code that refers to it and avoid any
  // assumptions that global variables in the generated C code will
  // be stored at the same address in all instances of the executable
  // (something that is typically true, but turns out not to be on,
  // for example, OS X Lion).  This technique was modeled after the
  // _test_attach() routine from third-party/gasnet/GASNET-version/tests/test.h
  // but is significantly simplified for our purposes.
  //
  if (chpl_nodeID == 0) {
    int i;
    //
    // Only locale #0 really needs the seginfo_table to store anything since it owns all
    // of the global variable locations; everyone else will just peek at its copy.  So
    // locale 0 sets up its segment to an appropriate size:
    //
    int global_table_size = chpl_numGlobalsOnHeap * sizeof(wide_ptr_t) + GASNETT_PAGESIZE;
    void* global_table = malloc(global_table_size);
    seginfo_table[0].addr = ((void *)(((uint8_t*)global_table) + 
                                      (((((uintptr_t)global_table)%GASNETT_PAGESIZE) == 0)? 0 : 
                                       (GASNETT_PAGESIZE-(((uintptr_t)global_table)%GASNETT_PAGESIZE)))));
    seginfo_table[0].size = global_table_size;
    //
    // ...and then zeroes out everyone else's
    //
    for (i=1; i<chpl_numNodes; i++) {
      seginfo_table[i].addr = NULL;
      seginfo_table[i].size = 0;
    }
  }
  //
  // Then we're going to broadcast the seginfo_table to everyone so that each locale
  // has its own copy of it and knows where everyone else's segment lives (or, really,
  // where locale #0's lives since we're not using anyone else's at this point).
  //
  chpl_comm_barrier("getting ready to broadcast addresses");
  //
  // This is a naive O(numLocales) broadcast; we could do something
  // more scalable with more effort
  //
  if (chpl_nodeID == 0) {
    int i;
    for (i=0; i < chpl_numNodes; i++) {
      GASNET_Safe(gasnet_AMRequestMedium0(i, BCAST_SEGINFO, seginfo_table, 
                                          chpl_numNodes*sizeof(gasnet_seginfo_t)));
    }
  }
  GASNET_BLOCKUNTIL(bcast_seginfo_done);
  chpl_comm_barrier("making sure everyone's done with the broadcast");
#endif
#define malloc dont_use_malloc_use_chpl_mem_allocMany_instead

  gasnet_set_waitmode(GASNET_WAIT_BLOCK);
  
  // set status variable alive - on all nodes 
  amIdead = 0;
	
  //initialise lists - on all nodes
  guest1list = NULL;
  guest2list = NULL;
	
  //calculate buddy locales
  myBuddies = calculateBuddies(chpl_nodeID);
  myGuests = calculateGuests(chpl_nodeID);
  //if(DPRINTING)
	printf("-- %d BUDDIES: %d and %d GUESTS: %d and %d \n ", chpl_nodeID, myBuddies.first, myBuddies.second, myGuests.first, myGuests.second);
	
  if(chpl_nodeID == 0) {
	int i;
	//initialize failed nodes table
	failed_table[0].dID = chpl_nodeID;
	failed_table[0].parentID = 0;
	failed_table[0].alive = 0;
	for (i=1; i<chpl_numNodes; i++) {
		failed_table[i].dID = i;
		failed_table[i].parentID = 1000;
		failed_table[i].alive = 0;
	}
  }
  chpl_comm_barrier("getting ready to broadcast failed table");
  if (chpl_nodeID == 0) {
	int i;
	for (i=0; i < chpl_numNodes; i++) {
		GASNET_Safe(gasnet_AMRequestMedium0(i, BCAST_FAIL_TABLE, failed_table, chpl_numNodes*sizeof(failed_t)));
	}
  }
  GASNET_BLOCKUNTIL(failed_table_done);
  chpl_comm_barrier("making sure everyone's done with the broadcast");

  gasnet_set_waitmode(GASNET_WAIT_BLOCK);
}

void chpl_comm_post_mem_init(void) { }

int chpl_comm_numPollingTasks(void) {
  return 1;
}

//mark when the user's code starts executing
void chpl_comm_userCode_starts(){
	userCodeStart= 1;
	if(DPRINTING)
		printf("userCode set ===================================\n");
	if(chpl_nodeID==0)
		initialisation_done=1;
}

//
// No support for gdb for now
//
int chpl_comm_run_in_gdb(int argc, char* argv[], int gdbArgnum, int* status) {
  return 0;
}

void chpl_comm_post_task_init(void) {
  //
  // Start a polling task on each locale.
  //
  pollingRunning = 0;
  pollingQuit = 0;
  if (chpl_task_createCommTask(polling, NULL))
    chpl_internal_error("unable to start polling task for gasnet");
  while (!pollingRunning) {
    sched_yield();
  }

  // clear diags
  memset(&chpl_comm_commDiagnostics, 0, sizeof(chpl_commDiagnostics));

  // Initialize the caching layer, if it is active.
  chpl_cache_init();
}

void chpl_comm_rollcall(void) {
  chpl_sync_initAux(&chpl_comm_diagnostics_sync);
  chpl_msg(2, "executing on node %d of %d node(s): %s\n", chpl_nodeID, 
           chpl_numNodes, chpl_nodeName());
}

void chpl_comm_desired_shared_heap(void** start_p, size_t* size_p) {
#if defined(GASNET_SEGMENT_FAST) || defined(GASNET_SEGMENT_LARGE)
  *start_p = chpl_numGlobalsOnHeap * sizeof(wide_ptr_t) 
             + (char*)seginfo_table[chpl_nodeID].addr;
  *size_p  = seginfo_table[chpl_nodeID].size
             - chpl_numGlobalsOnHeap * sizeof(wide_ptr_t);
#else /* GASNET_SEGMENT_EVERYTHING */
  *start_p = NULL;
  *size_p  = 0;
#endif
}

void chpl_comm_broadcast_global_vars(int numGlobals) {
  int i;
  if (chpl_nodeID != 0) {
    for (i = 0; i < numGlobals; i++) {
      chpl_comm_get(chpl_globals_registry[i], 0,
                    &((wide_ptr_t*)seginfo_table[0].addr)[i],
                    sizeof(wide_ptr_t), -1 /*typeIndex: unused*/, 1, 0, "");
    }
  }
}

void chpl_comm_broadcast_private(int id, size_t size, int32_t tid) {
  int  node, offset;
  int  payloadSize = size + sizeof(priv_bcast_t);
  done_t* done;
  int numOffsets=1;

  // This can use the system allocator because it involves internode communication.
  done = (done_t*) chpl_mem_allocManyZero(chpl_numNodes, sizeof(*done),
                                          CHPL_RT_MD_COMM_FRK_DONE_FLAG,
                                          0, 0);
  if (payloadSize <= gasnet_AMMaxMedium()) {
    priv_bcast_t* pbp = chpl_mem_allocMany(1, payloadSize, CHPL_RT_MD_COMM_PRV_BCAST_DATA, 0, 0);
    chpl_memcpy(pbp->data, chpl_private_broadcast_table[id], size);
    pbp->id = id;
    pbp->size = size;
    for (node = 0; node < chpl_numNodes; node++) {
      if (node != chpl_nodeID) {
        pbp->ack = &done[node];
        init_done_obj(&done[node], 1);
        GASNET_Safe(gasnet_AMRequestMedium0(node, PRIV_BCAST, pbp, payloadSize));
      }
    }
    chpl_mem_free(pbp, 0, 0);
  } else {
    size_t maxpayloadsize = gasnet_AMMaxMedium();
    size_t maxsize = maxpayloadsize - sizeof(priv_bcast_large_t);
    priv_bcast_large_t* pblp = chpl_mem_allocMany(1, maxpayloadsize, CHPL_RT_MD_COMM_PRV_BCAST_DATA, 0, 0);
    pblp->id = id;
    numOffsets = (size+maxsize)/maxsize;
    for (node = 0; node < chpl_numNodes; node++) {
      if (node != chpl_nodeID)
        init_done_obj(&done[node], numOffsets);
    }
    for (offset = 0; offset < size; offset += maxsize) {
      size_t thissize = size - offset;
      if (thissize > maxsize)
        thissize = maxsize;
      pblp->offset = offset;
      pblp->size = thissize;
      chpl_memcpy(pblp->data, (char*)chpl_private_broadcast_table[id]+offset, thissize);
      for (node = 0; node < chpl_numNodes; node++) {
        if (node != chpl_nodeID) {
          pblp->ack = &done[node];
          GASNET_Safe(gasnet_AMRequestMedium0(node, PRIV_BCAST_LARGE, pblp, sizeof(priv_bcast_large_t)+thissize));
        }
      }
    }
    chpl_mem_free(pblp, 0, 0);
  }
  // wait for the handlers to complete
  for (node = 0; node < chpl_numNodes; node++) {
    if (node != chpl_nodeID)
      GASNET_BLOCKUNTIL(done[node].flag);
  }
  chpl_mem_free(done, 0, 0);
}

void chpl_comm_barrier(const char *msg) {
  int id = (int) msg[0];
  int retval;

#ifdef CHPL_COMM_DEBUG
  chpl_msg(2, "%d: enter barrier for '%s'\n", chpl_nodeID, msg);
#endif

  //
  // We don't want to just do a gasnet_barrier_wait() here, because
  // GASNet will put us to work polling, and we already have a polling
  // task that the tasking layer has presumably placed to best effect.
  // We don't want to compete with that.  Also, the implementation is
  // required to do chpl_task_yield() while waiting for the barrier to
  // satisfy; see chpl_comm.h.  This prevents us from monopolizing the
  // processor while waiting.
  //
  gasnet_barrier_notify(id, 0);
  while ((retval = gasnet_barrier_try(id, 0)) == GASNET_ERR_NOT_READY) {
    chpl_task_yield();
  }
  GASNET_Safe_Retval(gasnet_barrier_try(id, 0), retval);
}

void chpl_comm_pre_task_exit(int all) {
  if (all) {
    chpl_comm_barrier("stop polling");

    //
    // Tell the polling task to halt, then wait for it to do so.
    //
    pollingQuit = 1;
    while (pollingRunning) {
      sched_yield();
    }
  }
}

static void exit_common(int status) {
  static int loopback = 0;

  pollingQuit = 1;

  if (chpl_nodeID == 0) {
    if (loopback) {
      gasnet_exit(2);
    }
  }

  chpl_comm_barrier("exit_common_gasnet_exit"); 
  //exit(); // depending on PAT exit strategy, maybe switch to this
  gasnet_exit(status); // not a collective operation, but one locale will win and all locales will die.
}

static void exit_any_dirty(int status) {
  // kill the polling task, but other than that...
  // clean up nothing; just ask GASNet to exit
  // GASNet will then kill all other locales.
  static int loopback = 0;

  pollingQuit = 1;

  if (chpl_nodeID == 0) {
    if (loopback) {
      gasnet_exit(2);
    }
  }

  gasnet_exit(status);
}

#ifdef GASNET_NEEDS_EXIT_ANY_CLEAN
// this is currently unused; it's intended to be used to implement
// exit_any with cleanup on all nodes
static void exit_any_clean(int status) {
  int* status_p = &status;
  int node;

  // notify all other nodes that this node is entering a clean exit_any
  for (node = 0; node < chpl_numNodes; node++) {
    if (node != chpl_nodeID) {
      GASNET_Safe(gasnet_AMRequestMedium0(node, EXIT_ANY, &status_p, sizeof(status_p)));
    }
  }
    
  // (for code reuse) ask this node to perform a clean exit_any
  GASNET_Safe(gasnet_AMRequestMedium0(chpl_nodeID, EXIT_ANY, &status_p, sizeof(status_p)));
}
#endif

void chpl_comm_exit(int all, int status) {
	//if(DPRINTING)
  		printf("%d : remoteCountPut %d remoteCountGet %d\n", chpl_nodeID, remoteCountPut, remoteCountGet);	
	
  if (all) {
    exit_common(status);
  }
  else {
    // when exit_any_clean is finished, consider switching to that.
    exit_any_dirty(status); 
  }
}

void  chpl_comm_put(void* addr, c_nodeid_t node, void* raddr,
                    size_t elemSize, int32_t typeIndex, size_t len,
                    int ln, c_string fn) {
  const size_t size = elemSize*len;
  int remote_in_segment;
  remoteCountPut =+1;
  if(REMOTEDBG){
	printf("put\n");
  }
  if (chpl_nodeID == node) {
    memmove(raddr, addr, size);
  } else {
    // Visual Debug support
    chpl_vdebug_log_put(addr, node, raddr, elemSize, typeIndex, len, ln, fn);

    if (chpl_verbose_comm && !chpl_comm_no_debug_private)
      printf("%d: %s:%d: remote put to %d\n", chpl_nodeID, fn, ln, node);
    if (chpl_comm_diagnostics && !chpl_comm_no_debug_private) {
      chpl_sync_lock(&chpl_comm_diagnostics_sync);
      chpl_comm_commDiagnostics.put++;
      chpl_sync_unlock(&chpl_comm_diagnostics_sync);
    }

    // Handle remote address not in remote segment.
#ifdef GASNET_SEGMENT_EVERYTHING
    remote_in_segment = 1;
#else
    remote_in_segment = chpl_comm_is_in_segment(node, raddr, size);
#endif

    if( remote_in_segment ) {
      // If it's in the remote segment, great, do a normal gasnet_put.
      // GASNet will handle the local portion not being in the segment.
      gasnet_put(node, raddr, addr, size); // node, dest, src, size
    } else {
      // If it's not in the remote segment, we need to send an
      // active message so that the other node will copy the data
      // that we're sending.
      size_t max_chunk = gasnet_AMMaxMedium();
      size_t start;

      // use AMRequestMedium to send the PUT data to the remote node
      // and then its AM handler will memcpy.
      // We could have the remote node do a GET, but that would require
      // it to start a task since you can't do a GET in an AM handler
      // (and the reply doesn't help).
      for(start = 0; start < size; start += max_chunk) {
        size_t this_size;
        void* addr_chunk;
        void* raddr_chunk;
        done_t done;

        this_size = size - start;
        if( this_size > max_chunk ) {
          this_size = max_chunk;
        }

        addr_chunk = ((char*) addr) + start;
        raddr_chunk = ((char*) raddr) + start;

        init_done_obj(&done, 1);

        // Send an AM over to ask for a them to copy the data
        // passed in the active message (addr_chunk) to raddr_chunk.
        GASNET_Safe(gasnet_AMRequestMedium4(node, DO_COPY_PAYLOAD,
                                            addr_chunk, this_size,
                                            AckArg0(&done), AckArg1(&done),
                                            get_arg_from_ptr0(raddr_chunk),
                                            get_arg_from_ptr1(raddr_chunk)));

        // Wait for the PUT to complete.
        wait_done_obj(&done);
      }
    }
  }
}

////GASNET - pass trace info to gasnet_get
////GASNET - define GASNET_E_ PUTGET always REMOTE
////GASNET - look at GASNET tools at top of README.tools has atomic counters
void  chpl_comm_get(void* addr, c_nodeid_t node, void* raddr,
                    size_t elemSize, int32_t typeIndex, size_t len,
                    int ln, c_string fn) {
  const size_t size = elemSize*len;
  int remote_in_segment;
  remoteCountGet+=1;
  if(REMOTEDBG){
  	printf("get\n");
  }
  if (chpl_nodeID == node) {
    memmove(addr, raddr, size);
  } else {
    // Visual Debug support
    chpl_vdebug_log_get(addr, node, raddr, elemSize, typeIndex, len, ln, fn);
    
    if (chpl_verbose_comm && !chpl_comm_no_debug_private)
      printf("%d: %s:%d: remote get from %d\n", chpl_nodeID, fn, ln, node);
    if (chpl_comm_diagnostics && !chpl_comm_no_debug_private) {
      chpl_sync_lock(&chpl_comm_diagnostics_sync);
      chpl_comm_commDiagnostics.get++;
      chpl_sync_unlock(&chpl_comm_diagnostics_sync);
    }

    // Handle remote address not in remote segment.

    // The GASNet Spec says:
    //   The source memory address for all gets and the target memory address
    //   for all puts must fall within the memory area registered for remote
    //   access by the remote node (see gasnet_attach()), or the results are
    //   undefined

    // In other words, it is OK if the local side of a GET or PUT
    // is not in the registered memory region.

#ifdef GASNET_SEGMENT_EVERYTHING
    remote_in_segment = 1;
#else
    remote_in_segment = chpl_comm_is_in_segment(node, raddr, size);
#endif

    if( remote_in_segment ) {
      // If it's in the remote segment, great, do a normal gasnet_get.
      // GASNet will handle the local portion not being in the segment.
      gasnet_get(addr, node, raddr, size); // dest, node, src, size
    } else {
      // If it's not in the remote segment, we need to send an
      // active message so that the other node will PUT back to us.
      // In order for that to work, the local side has to be in
      // the registered memory segment.
      int local_in_segment;
      void* local_buf = NULL;
      size_t buf_sz = 0;
      size_t max_chunk = gasnet_AMMaxLongReply();
      size_t start;

#ifdef GASNET_SEGMENT_EVERYTHING
      local_in_segment = 1;
#else
      local_in_segment = chpl_comm_is_in_segment(chpl_nodeID, addr, size);
#endif

      // If the local address isn't in a registered segment,
      // do the GET into a temporary buffer instead, and then
      // copy the result back.
      if( ! local_in_segment ) {
        size_t buf_sz = size;
        if( buf_sz > max_chunk ) {
          buf_sz = max_chunk;
        }

        local_buf = chpl_mem_alloc(buf_sz, CHPL_RT_MD_COMM_XMIT_RCV_BUF, 0, 0);
#ifdef GASNET_SEGMENT_EVERYTHING
        // local_buf is definately in our segment
#else
        assert(chpl_comm_is_in_segment(chpl_nodeID, local_buf, buf_sz));
#endif
      }

      // do a PUT on the remote locale back to here.
      // But do it in chunks of size gasnet_AMMaxLongReply()
      // since we use gasnet_AMReplyLong to do the PUT.
      for(start = 0; start < size; start += max_chunk) {
        size_t this_size;
        void* addr_chunk;
        xfer_info_t info;
        done_t done;

        this_size = size - start;
        if( this_size > max_chunk ) {
          this_size = max_chunk;
        }

        addr_chunk = ((char*) addr) + start;

        init_done_obj(&done, 1);

        info.tgt = local_buf?local_buf:addr_chunk;
        info.src = ((char*) raddr) + start;
        info.size = this_size;

        // Send an AM over to ask for a PUT back to us
        GASNET_Safe(gasnet_AMRequestMedium0(node, DO_REPLY_PUT,
                                            &info, sizeof(info)));

        // Wait for the PUT to complete.
        wait_done_obj(&done);

        // Now copy from local_buf back to addr if necessary.
        if( local_buf ) {
          memcpy(addr_chunk, local_buf, this_size);
        }
      }

      // If we were using a temporary local buffer free it
      if( local_buf ) {
        chpl_mem_free(local_buf, 0, 0);
      }
    }
  }
}

//
// This is an adaptor from Chapel code to GASNet's gasnet_gets_bulk. It does:
// * convert count[0] and all of 'srcstr' and 'dststr' from counts of element
//   to counts of bytes,
//
void  chpl_comm_get_strd(void* dstaddr, size_t* dststrides, c_nodeid_t srcnode_id, 
                         void* srcaddr, size_t* srcstrides, size_t* count,
                         int32_t stridelevels, size_t elemSize, int32_t typeIndex, 
                         int ln, c_string fn) {
  int i;
  const size_t strlvls = (size_t)stridelevels;
  const gasnet_node_t srcnode = (gasnet_node_t)srcnode_id;

  size_t dststr[strlvls];
  size_t srcstr[strlvls];
  size_t cnt[strlvls+1];

  // Only count[0] and strides are measured in number of bytes.
  cnt[0] = count[0] * elemSize;

  if (strlvls>0) {
    srcstr[0] = srcstrides[0] * elemSize;
    dststr[0] = dststrides[0] * elemSize;
    for (i=1; i<strlvls; i++) { 
      srcstr[i] = srcstrides[i] * elemSize;
      dststr[i] = dststrides[i] * elemSize;
      cnt[i] = count[i];
    }
    cnt[strlvls] = count[strlvls];
  }

  if (chpl_verbose_comm && !chpl_comm_no_debug_private) {
    printf("%d: %s:%d: remote get from %d. strlvls:%ld. elemSize:%ld  sizeof(size_t):%ld  sizeof(gasnet_node_t):%ld\n", chpl_nodeID, fn, ln, srcnode,(long)strlvls,(long)elemSize,(long)sizeof(size_t),(long)sizeof(gasnet_node_t));

    printf("dststrides in bytes:\n");                 
    for (i=0;i<strlvls;i++) printf(" %ld ",(long)dststr[i]);
    printf("\n");                     
    printf("srcstrides in bytes:\n");                 
    for (i=0;i<strlvls;i++) printf(" %ld ",(long)srcstr[i]);
    printf("\n");                     
    printf("count (count[0] in bytes):\n");                   
    for (i=0;i<=strlvls;i++) printf(" %ld ",(long)cnt[i]);
    printf("\n");                     
  }

  // Visual Debug Support
  chpl_vdebug_log_get_strd(dstaddr, dststrides, srcnode_id, srcaddr, srcstrides, count,
                           stridelevels, elemSize, typeIndex, ln, fn);

  // the case (chpl_nodeID == srcnode) is internally managed inside gasnet
  if (chpl_verbose_comm && !chpl_comm_no_debug_private)
    printf("%d: %s:%d: remote get from %d\n", chpl_nodeID, fn, ln, srcnode);
  if (chpl_comm_diagnostics && !chpl_comm_no_debug_private) {
    chpl_sync_lock(&chpl_comm_diagnostics_sync);
    chpl_comm_commDiagnostics.get++;
    chpl_sync_unlock(&chpl_comm_diagnostics_sync);
  }

  // TODO -- handle strided get for non-registered memory
  gasnet_gets_bulk(dstaddr, dststr, srcnode, srcaddr, srcstr, cnt, strlvls); 
}

// See the comment for cmpl_comm_gets().
void  chpl_comm_put_strd(void* dstaddr, size_t* dststrides, c_nodeid_t dstnode_id, 
                         void* srcaddr, size_t* srcstrides, size_t* count,
                         int32_t stridelevels, size_t elemSize, int32_t typeIndex, 
                         int ln, c_string fn) {
  int i;
  const size_t strlvls = (size_t)stridelevels;
  const gasnet_node_t dstnode = (gasnet_node_t)dstnode_id;

  size_t dststr[strlvls];
  size_t srcstr[strlvls];
  size_t cnt[strlvls+1];

  // Only count[0] and strides are measured in number of bytes.
  cnt[0] = count[0] * elemSize;
  if (strlvls>0) {
    srcstr[0] = srcstrides[0] * elemSize;
    dststr[0] = dststrides[0] * elemSize;
    for (i=1; i<strlvls; i++) { 
      srcstr[i] = srcstrides[i] * elemSize;
      dststr[i] = dststrides[i] * elemSize;
      cnt[i] = count[i];
    }
    cnt[strlvls] = count[strlvls];
  }
  if (chpl_verbose_comm && !chpl_comm_no_debug_private) {
    printf("%d: %s:%d: remote get from %d. strlvls:%ld. elemSize:%ld  sizeof(size_t):%ld  sizeof(gasnet_node_t):%ld\n", chpl_nodeID, fn, ln, dstnode,(long)strlvls,(long)elemSize,(long)sizeof(size_t),(long)sizeof(gasnet_node_t));

    printf("dststrides in bytes:\n");                 
    for (i=0;i<strlvls;i++) printf(" %ld ",(long)dststr[i]);
    printf("\n");                     
    printf("srcstrides in bytes:\n");                 
    for (i=0;i<strlvls;i++) printf(" %ld ",(long)srcstr[i]);
    printf("\n");                     
    printf("count (count[0] in bytes):\n");                   
    for (i=0;i<=strlvls;i++) printf(" %ld ",(long)cnt[i]);
    printf("\n");                     
  }

  // Visual Debug Support
  chpl_vdebug_log_put_strd(dstaddr, dststrides, dstnode_id, srcaddr, srcstrides,
                           count, stridelevels, elemSize, typeIndex, ln, fn);

  // the case (chpl_nodeID == dstnode) is internally managed inside gasnet
  if (chpl_verbose_comm && !chpl_comm_no_debug_private)
    printf("%d: %s:%d: remote get from %d\n", chpl_nodeID, fn, ln, dstnode);
  if (chpl_comm_diagnostics && !chpl_comm_no_debug_private) {
    chpl_sync_lock(&chpl_comm_diagnostics_sync);
    chpl_comm_commDiagnostics.put++;
    chpl_sync_unlock(&chpl_comm_diagnostics_sync);
  }
  // TODO -- handle strided put for non-registered memory
  gasnet_puts_bulk(dstnode, dstaddr, dststr, srcaddr, srcstr, cnt, strlvls); 
}

void  chpl_comm_fork_res(c_nodeid_t node, c_sublocid_t subloc,chpl_fn_int_t fid, void *arg, int32_t arg_size) {
				 
  fork_t* info;
  int     info_size;
  done_t  done;
  int     passArg = sizeof(fork_t) + arg_size <= gasnet_AMMaxMedium();
  update_t* updateT;
  int failflag;
  uint_least32_t prev;
  time_t start, stop;
  clock_t cpu_clock;
  double diff;
	

  if (chpl_nodeID == node) { 											//local execution
	if(PRINTING)
		printf("( chpl_comm_fork_res) %d -> %d :: EXECUTES LOCALLY\n",  chpl_nodeID, (int) node);
	chpl_ftable_call(fid, arg);	
  }else{																//remote execution
	int i;	
	//Visual debug support
	chpl_vdebug_log_fork(node, subloc, fid, arg, arg_size);									
	if(PRINTING)
		printf("( chpl_comm_fork_res) %d -> %d:: EXECUTES REMOTELY\n", chpl_nodeID, (int) node);	
    if (chpl_verbose_comm && !chpl_comm_no_debug_private)
    //	printf("%d: %s:%d: remote put to %d\n", chpl_nodeID, fn, ln, node);
    if (chpl_comm_diagnostics && !chpl_comm_no_debug_private) {
      chpl_sync_lock(&chpl_comm_diagnostics_sync);
      chpl_comm_commDiagnostics.fork++;
      chpl_sync_unlock(&chpl_comm_diagnostics_sync);
    }
    /** create fork_t object */
    if (passArg) {
      info_size = sizeof(fork_t) + arg_size;
    }else {
      info_size = sizeof(fork_t) + sizeof(void*);
    }
    info = (fork_t*)chpl_mem_allocMany(1, info_size,
                                        CHPL_RT_MD_COMM_FRK_SND_INFO, 0, 0);                          
    info->caller = chpl_nodeID;
    info->subloc = subloc;
    info->ack = &done;
    info->serial_state = chpl_task_getSerial();
    info->fid = fid;
    info->arg_size = arg_size;

    /** check child is alive (from lists) */
	if(chpl_nodeID==0){ //current node is 0, search locally
		if(PRINTING)
			printf("( chpl_comm_fork_with_res) %d -> %d:: check child alive = local check \n", chpl_nodeID, (int) node);
		assert(failed_table[node].dID == node);
		if(failed_table[node].alive == 0)
			child_alive = 1;
		else
			child_alive = 0;
	}else if(node ==0){  //node 0 , always alive!	
		if(PRINTING)
			printf("( chpl_comm_fork_with_res) %d -> %d:: check child alive = dst is locale 0 -- unfailed \n", chpl_nodeID, (int) node);
		child_alive =1;
	}else{ //node is alive - remote check
		if(PRINTING)
			printf("( chpl_comm_fork_res) %d -> %d:: check child alive = remote check\n", chpl_nodeID, (int) node);
		// request update from 0										
		updateT = (update_t*)chpl_mem_alloc(sizeof(update_t), CHPL_RT_MD_COMM_UPDATE_NODE, 0, 0);
		updateT->caller = chpl_nodeID;
		updateT->requestedId = (int)node;
		
		//if (sizeof(update_t)<= gasnet_AMMaxShort())
		//printf(" %d:: TODO Use a short request for FAIL_UPDATE_REQUEST\n",chpl_nodeID);		
		//GASNET_Safe(gasnet_AMRequestShort0((c_nodeid_t)0, FAIL_UPDATE_REQUEST, updateT));
		GASNET_Safe(gasnet_AMRequestMedium0((c_nodeid_t)0, FAIL_UPDATE_REQUEST, updateT, sizeof(update_t)));
		
		// wait for reply from locale 0
		while (!fail_update_done) { 
			(void) gasnet_AMPoll(); //detect updates done through an AM
			chpl_task_yield();
		}
		chpl_mem_free(updateT, 0, 0);	 
		//fail_update_done = 0; 	//reset variable	
	}//remote check ends here
	/** if child is alive */
	if(child_alive==1){
		if(PRINTING)
			printf("(chpl_comm_fork_res) %d -> %d:: CHILD ALIVE\n", chpl_nodeID, (int) node);		
		/** launch fork*/
		init_done_obj(&done, 1);//INIT_DONE_OBJ(done, 1);
			
		if (passArg) {
			if(PRINTING)
				printf("(chpl_comm_fork_res) %d -> %d:: regular fork \n", chpl_nodeID, (int) node);		
			if (arg_size)
				chpl_memcpy(&(info->arg), arg, arg_size);	//dispatch the message with arg
			GASNET_Safe(gasnet_AMRequestMedium0(node, FORK_RES, info, info_size));
		}else {
			if(PRINTING)
				printf("(chpl_comm_fork_res) %d -> %d:: large fork \n", chpl_nodeID, (int) node);		
			chpl_memcpy(&(info->arg), &arg, sizeof(void*)); //dispatch the message without arg
			GASNET_Safe(gasnet_AMRequestMedium0(node, FORK_RES_LARGE, info, info_size));
		}
		if(PRINTING)
			printf("(chpl_comm_fork_res) %d -> %d:: fork sent  - waiting on done flag \n", chpl_nodeID, (int) node);		
		/**wait on done.flag or timeout */
		failflag=0;
		while (!done.flag && !timeoutflag){ 
			(void) gasnet_AMPoll(); 									//detect updates from an AM
			chpl_task_yield();
		}
		/** PHASE 2.1 failure detection TIMEOUT from child */
		if(!done.flag && timeoutflag==1){ 		
			failflag=1;
			timeoutflag=0;
		}
		if (failflag==1){
			failflag =0;	
			/**record  the failure*/ 
			if(chpl_nodeID!=0){ //notify locale 0 for the failure 
				failed_t* childF = (failed_t*)chpl_mem_alloc(sizeof(failed_t), CHPL_RT_MD_COMM_DEAD_NODE, 0, 0);
				childF->dID = (int)node;
				childF->parentID = info->caller;
				childF->alive = 1;
				//if(shortMsg)
				//	printf("(chpl_comm_fork_res) %d -> %d::  Use a short request for FAIL \n",chpl_nodeID , (int)node);
				GASNET_Safe(gasnet_AMRequestMedium0((c_nodeid_t)0, FAIL, childF, sizeof(failed_t))); 
				
				//GASNET_Safe(gasnet_AMRequestMedium0((c_nodeid_t)0, MSGSENT, mymsg, sizeof(struct chpl_comm_transitMsg)));
				chpl_mem_free(childF, 0, 0);
			}else{ //record failed node locally
					int rec = recordFailure(node,info->caller);
					//deleteFromTransitMsgList2(mymsg);
			}
			//execute locally on the parent
			if(PRINTING)
				printf("(chpl_comm_fork_res) %d -> %d::  NO FORK, executing locally, TIMEOUT from child %d \n", chpl_nodeID, (int) node, (int)node);
			chpl_ftable_call(fid, arg);	
				
			//downCount the task --this occurs locally on the parent       
			prev = atomic_fetch_add_explicit_uint_least32_t(&done.count, 1,memory_order_seq_cst);
			if (prev +1 == done.target)    
				done.flag = 1;
			
			if(PRINTING)
				printf("(chpl_comm_fork_res) %d -> %d::   RECOVERY 1 ########## finished  \n",chpl_nodeID, (int) node);
		/**PHASE 2.2 FORK successful */
		}else { //fork succeded - done.flag=1
			if(PRINTING)
				printf("( chpl_comm_fork_res) %d -> %d::  CHILD ALIVE \n", chpl_nodeID, (int) node);		
		}	
	}else{ //** else if child is not alive	
		if(PRINTING)
			printf("(chpl_comm_fork_res) %d -> %d::  CHILD DEAD RECOVERY 2 #####\n NO FORK, executing locally after death of child ",  chpl_nodeID, (int) node);	
		/** RECOVERY **/ 
		/** locale 0 already knows about the dead child -- no need to notify again **/
		chpl_ftable_call(fid, arg); //execute locally
		//downCount the task --this occurs locally on the parent
		prev = atomic_fetch_add_explicit_uint_least32_t(&done.count, 1,
                                                  memory_order_seq_cst);
		if (prev + 1 == done.target)    
			done.flag = 1;	
		if(PRINTING)
			printf("(chpl_comm_fork_res) %d -> %d::  RECOVERY 2 ########## finished  \n",chpl_nodeID, (int) node);
	}//child not alive	ENDS_HERE
	chpl_mem_free(info, 0, 0);
 }  
} //fchpl_comm_fork_res

void  chpl_comm_fork(c_nodeid_t node, c_sublocid_t subloc,
                     chpl_fn_int_t fid, void *arg, size_t arg_size) {
  fork_t* info;
  size_t  info_size;
  done_t  done;
  int     passArg = sizeof(fork_t) + arg_size <= gasnet_AMMaxMedium();
  
  
  /**decide if we need to call chpl_comm_fork_res*/
  if (userCodeStart){ 
	if(PRINTING)
		printf("(chpl_comm_fork) %d -> %d :: calling chpl_comm_fork_res \n", chpl_nodeID, (int) node);
	chpl_comm_fork_res(node, subloc, fid, arg, arg_size); 		//call the version with extras(after initialisation)
  }else{

  	if (chpl_nodeID == node) {
    	chpl_ftable_call(fid, arg);
  	} else {
    	// Visual Debug Support
    	chpl_vdebug_log_fork(node, subloc, fid, arg, arg_size);

    	if (chpl_verbose_comm && !chpl_comm_no_debug_private)
     	 	printf("%d: remote task created on %d\n", chpl_nodeID, node);
    	if (chpl_comm_diagnostics && !chpl_comm_no_debug_private) {
      		chpl_sync_lock(&chpl_comm_diagnostics_sync);
      		chpl_comm_commDiagnostics.fork++;
      		chpl_sync_unlock(&chpl_comm_diagnostics_sync);
    	}

   	 	if (passArg) {
      		info_size = sizeof(fork_t) + arg_size;
    	} else {
      		info_size = sizeof(fork_t) + sizeof(void*);
    	}
    	// MPF - I believe we could remove this allocation if we
    	// passed the info structure's elements as arguments in
    	// AMRequest. We'd have to pack them as 32-bit arguments though.
    	// Alternatively, we could make it a stack-local variable. That
    	// would be OK since AMRequestMedium:
    	//   * doesn't need its payload to be in the registered memory segment
    	//   * allows us to re-use the source memory once it returns
    	// and since nothing in info actually ends up in the task we
    	// start (arg does but can be copied as a pointer)
    	info = (fork_t*)chpl_mem_allocMany(1, info_size,
                                       CHPL_RT_MD_COMM_FRK_SND_INFO, 0, 0);
    	info->caller = chpl_nodeID;
    	info->subloc = subloc;
    	info->ack = &done;
    	info->serial_state = chpl_task_getSerial();
    	info->fid = fid;
    	info->arg_size = arg_size;

    	init_done_obj(&done, 1);
    	
    	if (passArg) {
      		if (arg_size)
        		chpl_memcpy(&(info->arg), arg, arg_size);
      		GASNET_Safe(gasnet_AMRequestMedium0(node, FORK, info, info_size));
    	} else {
      		chpl_memcpy(&(info->arg), &arg, sizeof(void*));
      		GASNET_Safe(gasnet_AMRequestMedium0(node, FORK_LARGE, info, info_size));
    	}
    	if(PRINTING)
			printf("(chpl_comm_fork)  %d -> %d  FORK sent \n",chpl_nodeID, (int) node);																//call the regular version (during initialisation)

    	wait_done_obj(&done);
    	chpl_mem_free(info, 0, 0);
  	}
  }
}

//aux: print memory contents
void printMemory(void* mem, int bytes){
	char*p = (char*) mem;
	int i;
	for(i=0;i<bytes;i++){
		printf("%x ", p[i] & 0xff);
	}
}

// fork_nb res
void  chpl_comm_fork_nb_res(c_nodeid_t node, c_sublocid_t subloc,chpl_fn_int_t fid, void *arg, int32_t arg_size) {
	fork_t *info;
	int     info_size, i, testval;
	int 	tm_size, a_size;
	int     passArg = (chpl_nodeID == node || sizeof(fork_t) + arg_size <= gasnet_AMMaxMedium());
	void* 	argCopy = NULL;    
	chpl_comm_transitMsgAlt_p mymsg;    
	done_t 	done;       
	int 	jj = 0; 
	void* newArgCopy;      
	struct buddies childBuddies; 
	chpl_comm_transitMsgAlt_p glist;
	/** create fork_t object*/
	if(PRINTING)
		printf("(FORK_NB_RES) %d  to %d   create fork_t object  \n",chpl_nodeID, node);
	if (passArg) {
		info_size = sizeof(fork_t) + arg_size;
	} else {
		info_size = sizeof(fork_t) + sizeof(void*);
	}
	info = (fork_t*)chpl_mem_allocMany(info_size, sizeof(char), CHPL_RT_MD_COMM_FRK_SND_INFO, 0, 0);
																
	info->caller = chpl_nodeID;
	info->subloc = subloc;
	info->ack = &done; 		
	info->serial_state = chpl_task_getSerial();
	info->fid = fid;
	info->arg_size = arg_size;
	info->recoveryfl =0;
	info->recoveredLoc =0;
  
	if (passArg) {
		if(PRINTING)
			printf("(FORK_NB_RES):: %d -> %d    - regular  arg \n",chpl_nodeID, node); 	
		if (arg_size)
			chpl_memcpy(&(info->arg), arg, arg_size);
	}else{
		// If the arg bundle is too large to fit in fork_t (i.e. passArg == false), 
		// Copy the args into auxilliary memory and pass a pointer to this instead.
		if(PRINTING)
			printf("(FORK_NB_RES):: %d -> %d - large arg \n",chpl_nodeID, node); 	
		argCopy = chpl_mem_allocMany(1, arg_size, CHPL_RT_MD_COMM_FRK_SND_ARG, 0, 0);
													
		chpl_memcpy(argCopy, arg, arg_size);
		*(void**)(&(info->arg)) = argCopy;
	}	
	
	/** local execution */
	if(PRINTING)
		printf("(FORK_NB_RES):: %d -> %d   fid = %d \n",chpl_nodeID, node, info->fid); 		
	if (chpl_nodeID == node){			
		if (info->serial_state){ 		//call fork_nb_wrapper directly [on this node]
			if(PRINTING)
				printf("(FORK_NB_RES):: %d -> %d  -- LOCAL EXECUTION:  fork_nb_wrapper_res(info); \n",chpl_nodeID, node);
			fork_nb_wrapper_res(info);
		}else{							//execute locally
			if(PRINTING)
				printf("(FORK_NB_RES):: %d -> %d  -- LOCAL EXECUTION:  chpl_task_startMovedTask \n",chpl_nodeID, node);	
			chpl_task_startMovedTask((chpl_fn_p)fork_nb_wrapper_res, (void*)info, subloc, chpl_nullTaskID, info->serial_state);
		}
		
		/** remote execution*/
	}else{						
		if(PRINTING)
			printf("(FORK_NB_RES):: %d -> %d  -- REMOTE EXECUTION \n",chpl_nodeID, node);
		if (chpl_verbose_comm && !chpl_comm_no_debug_private)
			
		if (chpl_comm_diagnostics && !chpl_comm_no_debug_private) {
			chpl_sync_lock(&chpl_comm_diagnostics_sync);
			chpl_comm_commDiagnostics.fork_nb++;
			chpl_sync_unlock(&chpl_comm_diagnostics_sync);
		}	
		/** PHASE 1 (pack transit msg)*/	
		if(PRINTING)
			printf("(FORK_NB_RES)::  %d packing transit_msg \n", chpl_nodeID);	
		
		
		if(passArg){
			tm_size = sizeof(struct chpl_comm_transitMsgAlt) + arg_size;
			mymsg = (chpl_comm_transitMsgAlt_p)chpl_mem_allocMany(tm_size, sizeof(char), CHPL_RT_MD_COMM_SEND_TRANSIT_MSG, 0, 0); 
		}else{
			tm_size = sizeof(struct chpl_comm_transitMsgAlt) + sizeof(void*);
			mymsg = (chpl_comm_transitMsgAlt_p)chpl_mem_allocMany(tm_size, sizeof(char), CHPL_RT_MD_COMM_SEND_TRANSIT_MSG_LARGE, 0, 0); 
		}
			
		mymsg->fid = fid;
		mymsg->src = (int)chpl_nodeID;
		mymsg->dst = node;
		mymsg->ack = mymsg;
		mymsg->arg_size = arg_size;	
		mymsg->next = NULL;
		
		
		/** send/store transit msg*/	
		
		childBuddies = calculateBuddies(node);
		if(PRINTING)
			printf("(FORK_NB_RES):: %d calculating child node's %d buddies : %d and %d\n ", chpl_nodeID,(int)node,childBuddies.first, childBuddies.second);
		
		if(childBuddies.first == chpl_nodeID){ //if I am 1st buddylocale
			if(PRINTING)
				printf("(FORK_NB_RES):: %d -  I am 1st buddylocale\n ", chpl_nodeID);
			chpl_memcpy(&(mymsg->arg),arg,arg_size);
			if(node== myGuests.first){ //my 1st guestlist
				guest1list = addTransitMsg(guest1list,mymsg);
				if(PRINTING)
					printf("(FORK_NB_RES):: %d -  added on my 1st list locally\n ", chpl_nodeID);
			}else if(node== myGuests.second){ //my 2nd guestlist
				guest2list = addTransitMsg(guest2list,mymsg);
				if(PRINTING)
					printf("(FORK_NB_RES):: %d -  added on my 2nd list locally\n ", chpl_nodeID);
			}else{
				printf("(FORK_NB_RES) %d  error1: don't know where to store the message -sent from %d\n ", chpl_nodeID, mymsg->dst);
			}
		}else{ //1st buddy is a remote locale
			if(passArg){
				chpl_memcpy(&(mymsg->arg),arg,arg_size);
				GASNET_Safe(gasnet_AMRequestMedium0((c_nodeid_t)childBuddies.first, IN_TRANSIT, mymsg, tm_size));
				if(PRINTING)
					printf("(FORK_NB_RES):: %d -> %d  sent IN_TRANSIT to buddy 1:  %d \n ", chpl_nodeID,(int)node, childBuddies.first);

			}else{
				// If the arg bundle is too large to fit in fork_t (i.e. passArg == false), 
    			// Copy the args into auxilliary memory and pass a pointer to this instead.
    			argCopy = chpl_mem_allocMany(1, arg_size,
                                 CHPL_RT_MD_COMM_SEND_TRANSIT_MSG_ARG, 0, 0);
    			chpl_memcpy(argCopy, arg, arg_size);
    			*(void**)(&(mymsg->arg)) = argCopy;
				GASNET_Safe(gasnet_AMRequestMedium0((c_nodeid_t)childBuddies.first, IN_TRANSIT_LARGE, mymsg, tm_size));
				if(PRINTING)
					printf("(FORK_NB_RES):: %d -> %d  sent IN_TRANSIT_LARGE to buddy 1:  %d \n ", chpl_nodeID,(int)node, childBuddies.first);
			}
		}
		
		if(childBuddies.second == chpl_nodeID){ //if I am 2nd buddylocale
			chpl_memcpy(&(mymsg->arg),arg,arg_size);
			if(PRINTING)
				printf("(FORK_NB_RES):: %d -  I am 2nd buddylocale\n ", chpl_nodeID);
			if(node== myGuests.first){ //my 1st guestlist
				guest1list = addTransitMsg(guest1list,mymsg);
				if(PRINTING)
					printf("(FORK_NB_RES):: %d -  added on my 1st list locally\n ", chpl_nodeID);
			}else if(node== myGuests.second){ //my 2nd guestlist
			
				guest2list = addTransitMsg(guest2list,mymsg);
				if(PRINTING)
					printf("(FORK_NB_RES):: %d -  added on my 2nd list locally\n ", chpl_nodeID);
			}else{
				printf("(FORK_NB_RES) %d  error2: don't know where to store the message -sent from %d\n ", chpl_nodeID, mymsg->dst);
			}
		}else{ //2nd buddy is remote
			if(passArg){
				chpl_memcpy(&(mymsg->arg),arg,arg_size);
				GASNET_Safe(gasnet_AMRequestMedium0((c_nodeid_t)childBuddies.second, IN_TRANSIT, mymsg, tm_size));
				if(PRINTING)
					printf("(FORK_NB_RES):: %d -  sent IN_TRANSIT to buddy 2: %d \n ", chpl_nodeID, childBuddies.second);
			}else{
				// If the arg bundle is too large to fit in fork_t (i.e. passArg == false), 
    			// Copy the args into auxilliary memory and pass a pointer to this instead.
    			argCopy = chpl_mem_allocMany(1, arg_size,
                                 CHPL_RT_MD_COMM_SEND_TRANSIT_MSG_ARG, 0, 0);
    			chpl_memcpy(argCopy, arg, arg_size);
    			*(void**)(&(mymsg->arg)) = argCopy;
				GASNET_Safe(gasnet_AMRequestMedium0((c_nodeid_t)childBuddies.second, IN_TRANSIT_LARGE, mymsg, tm_size));
				if(PRINTING)
					printf("(FORK_NB_RES):: %d -> %d  sent IN_TRANSIT_LARGE to buddy 1:  %d \n ", chpl_nodeID,(int)node, childBuddies.first);
			}
		}

		
		/** PHASE 2 (launch fork) no wait(fork_nb) */
		if(PRINTING)
			printf("(FORK_NB_RES):: %d sending FORK_NB_RES \n", chpl_nodeID);
		if (passArg){     
			GASNET_Safe(gasnet_AMRequestMedium0(node, FORK_NB_RES, info, info_size));
			chpl_mem_free(info, 0, 0);
			if(PRINTING)
				printf("(FORK_NB_RES)::  %d  fork sent  \n", chpl_nodeID);
		}else{
			GASNET_Safe(gasnet_AMRequestMedium0(node, FORK_NB_RES_LARGE, info, info_size)); //add FORK_NB_RES_large signal and handlers
			if(PRINTING)
				printf("(FORK_NB_RES)::  %d FORK_LARGE sent\n", chpl_nodeID);
		}	
		remoteForks++; //do I need this counter? A: MAYBE
	}
}

void  chpl_comm_fork_nb(c_nodeid_t node, c_sublocid_t subloc,
                        chpl_fn_int_t fid, void *arg, size_t arg_size) {
  fork_t *info;
  size_t  info_size;
  int     passArg = (chpl_nodeID == node
                     || sizeof(fork_t) + arg_size <= gasnet_AMMaxMedium());
  void* argCopy = NULL;
    
  if (userCodeStart){
	 if(PRINTING)
		printf("(COMM LAYER) %d chpl_comm_fork_nb %d -> %d :: calling chpl_comm_fork_nb_res  \n",chpl_nodeID, chpl_nodeID, (int) node);
     chpl_comm_fork_nb_res(node, subloc, fid, arg, arg_size); 		//call the version with extras(after initialisation)
  }else{
 
	if (passArg) {
    	info_size = sizeof(fork_t) + arg_size;
  	} else {
   	 	info_size = sizeof(fork_t) + sizeof(void*);
  	}
 	info = (fork_t*)chpl_mem_allocMany(info_size, sizeof(char), CHPL_RT_MD_COMM_FRK_SND_INFO, 0, 0);
  	info->caller = chpl_nodeID;
  	info->subloc = subloc;
  	info->ack = info; // pass address to free after get in large case
  	info->serial_state = chpl_task_getSerial();
  	info->fid = fid;
  	info->arg_size = arg_size;
  	info->recoveryfl = 0;
  	
  	if (passArg) {
    	if (arg_size)
      		chpl_memcpy(&(info->arg), arg, arg_size);
  	} else {
    // If the arg bundle is too large to fit in fork_t (i.e. passArg == false), 
    // Copy the args into auxilliary memory and pass a pointer to this instead.
    	argCopy = chpl_mem_allocMany(1, arg_size,
                                 CHPL_RT_MD_COMM_FRK_SND_ARG, 0, 0);
    	chpl_memcpy(argCopy, arg, arg_size);
    	*(void**)(&(info->arg)) = argCopy;
  	}

  	if (chpl_nodeID == node) {
   	 // Visual Debug?  Should we generate a task here???
    	if (info->serial_state)
      		fork_nb_wrapper(info);
    	else
      		chpl_task_startMovedTask((chpl_fn_p)fork_nb_wrapper, (void*)info,
                               subloc, chpl_nullTaskID,
                               info->serial_state);
  	} else {
    	// Visual Debug Support
   	 	chpl_vdebug_log_fork_nb(node, subloc, fid, arg, arg_size);

    	if (chpl_verbose_comm && !chpl_comm_no_debug_private)
      		printf("%d: remote non-blocking task created on %d\n", chpl_nodeID, node);
    	if (chpl_comm_diagnostics && !chpl_comm_no_debug_private) {
      		chpl_sync_lock(&chpl_comm_diagnostics_sync);
      		chpl_comm_commDiagnostics.fork_nb++;
      		chpl_sync_unlock(&chpl_comm_diagnostics_sync);
    	}
    	if (passArg) {
      		GASNET_Safe(gasnet_AMRequestMedium0(node, FORK_NB, info, info_size));
      		chpl_mem_free(info, 0, 0);
    	} else {
      		GASNET_Safe(gasnet_AMRequestMedium0(node, FORK_NB_LARGE, info, info_size));
    	}
  	}
  }
}

// GASNET - should only be called for "small" functions
void  chpl_comm_fork_fast(c_nodeid_t node, c_sublocid_t subloc,
                          chpl_fn_int_t fid, void *arg, size_t arg_size) {
  char infod[gasnet_AMMaxMedium()];
  fork_t* info;
  size_t  info_size = sizeof(fork_t) + arg_size;
  done_t  done;
  int     passArg = info_size <= gasnet_AMMaxMedium();

  if(PRINTING)
	printf("(COMM LAYER) %d chpl_comm_fork_fast %d -> %d   \n",chpl_nodeID, chpl_nodeID, (int) node);
  if(userCodeStart){
	    printf("(COMM LAYER) %d calling chpl_comm_fork_fast_res %d -> %d   \n",chpl_nodeID, chpl_nodeID, (int) node);
  		chpl_comm_fork_fast_res(node, subloc, fid, arg, arg_size);
  }else{
	  
 	 if (chpl_nodeID == node) {
    	chpl_ftable_call(fid, arg);
  	} else {
    	// Visual Debug Support
    	chpl_vdebug_log_fast_fork(node, subloc, fid, arg, arg_size);

    	if (passArg) {
      	if (chpl_verbose_comm && !chpl_comm_no_debug_private)
        	printf("%d: remote (no-fork) task created on %d\n",
              	 chpl_nodeID, node);
      	if (chpl_comm_diagnostics && !chpl_comm_no_debug_private) {
        	chpl_sync_lock(&chpl_comm_diagnostics_sync);
       	 	chpl_comm_commDiagnostics.fork_fast++;
        	chpl_sync_unlock(&chpl_comm_diagnostics_sync);
      	}
      	info = (fork_t *) &infod;

      	info->caller = chpl_nodeID;
      	info->subloc = subloc;
      	info->ack = &done;
      	info->serial_state = chpl_task_getSerial();
     	info->fid = fid;
      	info->arg_size = arg_size;
      	info->recoveryfl=0;
      	if(PRINTING)
	    	printf("(COMM LAYER) %d FORK FAST %d -> %d :: calling chpl_comm_fork_fast  where fid= %d  \n",chpl_nodeID, chpl_nodeID, (int) node, (int)info->fid);
     
      	init_done_obj(&done, 1);

      	if (arg_size)
        	chpl_memcpy(&(info->arg), arg, arg_size);
      	GASNET_Safe(gasnet_AMRequestMedium0(node, FORK_FAST, info, info_size));
      	// NOTE: We still have to wait for the handler to complete

      	wait_done_obj(&done);

    	} else {
      	// Call the normal chpl_comm_fork()
      		chpl_comm_fork(node, subloc, fid, arg, arg_size);
    	}
  	}
  }
}

// GASNET - should only be called for "small" functions
void  chpl_comm_fork_fast_res(c_nodeid_t node, c_sublocid_t subloc,
                          chpl_fn_int_t fid, void *arg, size_t arg_size) {
  char infod[gasnet_AMMaxMedium()];
  fork_t* info;
  size_t  info_size = sizeof(fork_t) + arg_size;
  done_t  done;
  int     passArg = info_size <= gasnet_AMMaxMedium();
  int 	  failflag;
  uint_least32_t prev;
  if(PRINTING)
	printf("(COMM LAYER) %d chpl_comm_fork_fast %d -> %d   \n",chpl_nodeID, chpl_nodeID, (int) node);
 
  if (chpl_nodeID == node) {
    chpl_ftable_call(fid, arg);
  } else {
    // Visual Debug Support
    chpl_vdebug_log_fast_fork(node, subloc, fid, arg, arg_size);

    if (passArg) {
      if (chpl_verbose_comm && !chpl_comm_no_debug_private)
        printf("%d: remote (no-fork) task created on %d\n",
               chpl_nodeID, node);
      if (chpl_comm_diagnostics && !chpl_comm_no_debug_private) {
        chpl_sync_lock(&chpl_comm_diagnostics_sync);
        chpl_comm_commDiagnostics.fork_fast++;
        chpl_sync_unlock(&chpl_comm_diagnostics_sync);
      }
      info = (fork_t *) &infod;

      info->caller = chpl_nodeID;
      info->subloc = subloc;
      info->ack = &done;
      info->serial_state = chpl_task_getSerial();
      info->fid = fid;
      info->arg_size = arg_size;
      info->recoveryfl=0;
      if(PRINTING)
	    printf("(COMM LAYER) %d FORK FAST %d -> %d :: calling chpl_comm_fork_fast  where fid= %d  \n",chpl_nodeID, chpl_nodeID, (int) node, (int)info->fid);
     
      init_done_obj(&done, 1);

      if (arg_size)
        chpl_memcpy(&(info->arg), arg, arg_size);
      GASNET_Safe(gasnet_AMRequestMedium0(node, FORK_FAST_RES, info, info_size));
      // NOTE: We still have to wait for the handler to complete
      //wait_done_obj(&done);
      if(PRINTING)
			printf("(chpl_comm_fork_res) %d -> %d:: fast fork sent  - waiting on done flag \n", chpl_nodeID, (int) node);		
	  /**wait on done.flag or timeout */
	  failflag=0;
	  while (!done.flag && !timeoutflag){ 
		(void) gasnet_AMPoll(); 									//detect updates from an AM
		chpl_task_yield();
	  }
	  
	  /** failure detection TIMEOUT from child */
	  if(!done.flag && timeoutflag==1){ 		
		failflag=1;
		timeoutflag=0;
	  }
	  if (failflag==1){
		failflag =0;	
		/**record  the failure*/ 
		if(chpl_nodeID!=0){ //notify locale 0 for the failure 
			failed_t* childF = (failed_t*)chpl_mem_alloc(sizeof(failed_t), CHPL_RT_MD_COMM_DEAD_NODE, 0, 0);
			childF->dID = (int)node;
			childF->parentID = info->caller;
			childF->alive = 1;
			//if (sizeof(failed_t) <= gasnet_AMMaxShort())
			//	printf(" TODO(chpl_comm_fork_res) %d -> %d::  Use a short request for FAIL \n",chpl_nodeID , (int)node);
			GASNET_Safe(gasnet_AMRequestMedium0((c_nodeid_t)0, FAIL, childF, sizeof(failed_t))); 
				
			//GASNET_Safe(gasnet_AMRequestMedium0((c_nodeid_t)0, MSGSENT, mymsg, sizeof(struct chpl_comm_transitMsg)));
			chpl_mem_free(childF, 0, 0);
		}else{ //record failed node locally
			int rec = recordFailure(node,info->caller);
			//deleteFromTransitMsgList2(mymsg);
		}
		//execute locally on the parent
		if(PRINTING)
			printf("(chpl_comm_fork_fast_res) %d -> %d:: executing locally, TIMEOUT from child %d \n", chpl_nodeID, (int) node, (int)node);
		chpl_ftable_call(fid, arg);	
				
		//downCount the task --this occurs locally on the parent       
		prev = atomic_fetch_add_explicit_uint_least32_t(&done.count, 1,memory_order_seq_cst);
		if (prev +1 == done.target)    
			done.flag = 1;
			
		if(PRINTING)
				printf("(chpl_comm_fork_fast_res) %d -> %d::   RECOVERY 1 ########## finished  \n",chpl_nodeID, (int) node);
		/**PHASE 2.2 FORK successful */
	  }
	  
    } else {
      // Call the normal chpl_comm_fork()
      chpl_comm_fork(node, subloc, fid, arg, arg_size);
    }
  }
}

void chpl_comm_make_progress(void){
  gasnet_AMPoll();
}

void chpl_startVerboseComm() {
  chpl_verbose_comm = 1;
  chpl_comm_no_debug_private = 1;
  chpl_comm_broadcast_private(0 /* &chpl_verbose_comm */, sizeof(int),
                              -1 /*typeIndex: unused*/);
  chpl_comm_no_debug_private = 0;
}

void chpl_stopVerboseComm() {
  chpl_verbose_comm = 0;
  chpl_comm_no_debug_private = 1;
  chpl_comm_broadcast_private(0 /* &chpl_verbose_comm */, sizeof(int),
                              -1 /*typeIndex: unused*/);
  chpl_comm_no_debug_private = 0;
}

void chpl_startVerboseCommHere() {
  chpl_verbose_comm = 1;
}

void chpl_stopVerboseCommHere() {
  chpl_verbose_comm = 0;
}

void chpl_startCommDiagnostics() {
  chpl_comm_diagnostics = 1;
  chpl_comm_no_debug_private = 1;
  chpl_comm_broadcast_private(1 /* &chpl_comm_diagnostics */, sizeof(int),
                              -1 /*typeIndex: unused*/);
  chpl_comm_no_debug_private = 0;
}

void chpl_stopCommDiagnostics() {
  chpl_comm_diagnostics = 0;
  chpl_comm_no_debug_private = 1;
  chpl_comm_broadcast_private(1 /* &chpl_comm_diagnostics */, sizeof(int),
                              -1 /*typeIndex: unused*/);
  chpl_comm_no_debug_private = 0;
}

void chpl_startCommDiagnosticsHere() {
  chpl_comm_diagnostics = 1;
}

void chpl_stopCommDiagnosticsHere() {
  chpl_comm_diagnostics = 0;
}

void chpl_resetCommDiagnosticsHere() {
  chpl_sync_lock(&chpl_comm_diagnostics_sync);
  memset(&chpl_comm_commDiagnostics, 0, sizeof(chpl_commDiagnostics));
  chpl_sync_unlock(&chpl_comm_diagnostics_sync);
}

void chpl_getCommDiagnosticsHere(chpl_commDiagnostics *cd) {
  chpl_sync_lock(&chpl_comm_diagnostics_sync);
  chpl_memcpy(cd, &chpl_comm_commDiagnostics, sizeof(chpl_commDiagnostics));
  chpl_sync_unlock(&chpl_comm_diagnostics_sync);
}

uint64_t chpl_numCommGets(void) {
  return chpl_comm_commDiagnostics.get;
}

uint64_t chpl_numCommNBGets(void) {
  return chpl_comm_commDiagnostics.get_nb;
}

uint64_t chpl_numCommPuts(void) {
  return chpl_comm_commDiagnostics.put;
}

uint64_t chpl_numCommNBPuts(void) {
  return chpl_comm_commDiagnostics.put_nb;
}

uint64_t chpl_numCommTestNB(void) {
  return chpl_comm_commDiagnostics.test_nb;
}

uint64_t chpl_numCommWaitNB(void) {
  return chpl_comm_commDiagnostics.wait_nb;
}

uint64_t chpl_numCommTryNB(void) {
  return chpl_comm_commDiagnostics.try_nb;
}

uint64_t chpl_numCommFastForks(void) {
  return chpl_comm_commDiagnostics.fork_fast;
}

uint64_t chpl_numCommForks(void) {
  return chpl_comm_commDiagnostics.fork;
}

uint64_t chpl_numCommNBForks(void) {
  return chpl_comm_commDiagnostics.fork_nb;
}

void chpl_comm_gasnet_help_register_global_var(int i, wide_ptr_t wide_addr) {
  if (chpl_nodeID == 0) {
    ((wide_ptr_t*)seginfo_table[0].addr)[i] = wide_addr;
  }
}
