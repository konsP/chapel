/*testConstructs */
use Time, Random;

proc main() {

	var total = new Timer();
	total.start();

/*	
	//on - blocking
	writeln("======  on - blocking =====");
	on Locales[1] do
		foo(1);
*/
	/* Run
	(COMM LAYER) 0 chpl_comm_fork_with_extras:: ### from 0 to 1 
	(AM_fork_with_extras) 1
 	(fork_wrapper_with_extras)1
	*/

/*	//on+begin - non-blocking
	writeln("======  on+begin - non-blocking =====");
	on Locales[1] do begin
		foo(2);
*/
	/* Run
	(COMM LAYER) 0 chpl_comm_fork_nb 0 -> 1 :: calling chpl_comm_fork_nb_with_extras ******************* 
	(*******) 0 FORK_NB_with_extras  ----------to 1  START
	(AM_fork_nb_with_extras) 1 ----------Starting fork_wrapper_nb_with_extras for fid = 93 
 	(fork_wrapper_nb_with_extras)1   ********** ALL GOOD
	*/


	//cobegin+on - non-blocking
	writeln("======  cobegin+on - non-blocking =====");
	cobegin{
		on Locales [1] do
			foo(1);
		on Locales[2] do
			foo(2);
	}

	/* Run
	(COMM LAYER) 0 chpl_comm_fork:: ### from 0 to 1 ### 
	(COMM LAYER) 0 chpl_comm_fork_with_extras:: ### from 0 to 1 #### my pid = 18875
	(AM_fork_with_extras) 1 In AM_fork_with_extras, my pid = 13537 my ppid = 13536 
	(AM_fork_with_extras) 1 ------------------------Doing real work...
 	(fork_wrapper_with_extras)1   ***********************-=-------*********amIalive 0 
	
	(COMM LAYER) 0 chpl_comm_fork:: ### from 0 to 2 ### 
	(COMM LAYER) 0 chpl_comm_fork_with_extras:: ### from 0 to 2 #### my pid = 18875
	(AM_fork_with_extras) 2 In AM_fork_with_extras, my pid = 14842 my ppid = 14841 
	(AM_fork_with_extras) 2 ------------------------Doing real work...
 	(fork_wrapper_with_extras)2   ***********************-=-------*********amIalive 0 
	*/


	//coforall on - non-blocking
/*	writeln("======  coforall on - non-blocking =====");
	coforall loc in Locales do{	
		on loc {
			foo(here.id);
		}
	}
*/
	/* Run
	(COMM LAYER) 0 chpl_comm_fork_nb 0 -> 0 :: calling chpl_comm_fork_nb_with_extras ******************* 
	(*******) 0 FORK_NB_with_extras  ----------to 0  START 
	(fork_wrapper_nb_with_extras)0   ********** ALL GOOD 

	(COMM LAYER) 0 chpl_comm_fork_nb 0 -> 1 :: calling chpl_comm_fork_nb_with_extras ******************* 
	(*******) 0 FORK_NB_with_extras  ----------to 1  START 
	(AM_fork_nb_with_extras) 1 ----------Starting fork_wrapper_nb_with_extras for fid = 93 
 	(fork_wrapper_nb_with_extras)1   ********** ALL GOOD 
	
	(COMM LAYER) 0 chpl_comm_fork_nb 0 -> 2 :: calling chpl_comm_fork_nb_with_extras ******************* 
	(*******) 0 FORK_NB_with_extras  ----------to 2  START 
	(AM_fork_nb_with_extras) 2 ----------Starting fork_wrapper_nb_with_extras for fid = 93 
 	(fork_wrapper_nb_with_extras)2   ********** ALL GOOD  
	*/

	
	
	total.stop();
	writeln("======  Time elapsed: ",  total.elapsed(), "\n");
}


proc foo(n){
	writeln("arg= ", n, "----------on locale ", here.id);
}
