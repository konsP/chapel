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

//
// The Block distribution is defined with six classes:
//
//   Block       : distribution class
//   BlockDom    : domain class
//   BlockArr    : array class
//   LocBlock    : local distribution class (per-locale instances)
//   LocBlockDom : local domain class (per-locale instances)
//   LocBlockArr : local array class (per-locale instances)
//
// When a distribution, domain, or array class instance is created, a
// correponding local class instance is created on each locale that is
// mapped to by the distribution.
//
//
// TO DO List
//
// 1. refactor pid fields from distribution, domain, and array classes
//

use DSIUtil;
use ChapelUtil;
use CommDiagnostics;
use Sys;
use Time;


/*typedef struct{		//failed node struct
	int 			dID;
	int 			parentID;
	int 			alive;
	int 			sender;
}failed_t;
*/
extern type failed_t = 4*real(64);
//static failed_t* failed_table =NULL; size: chpl_numNodes*sizeof(failed_t)



//
// These flags are used to output debug information and run extra
// checks when using Block.  Should these be promoted so that they can
// be used across all distributions?  This can be done by turning them
// into compiler flags or adding config parameters to the internal
// modules, perhaps called debugDists and checkDists.
//
config param debugBlockDist = false;
config param debugBlockDistBulkTransfer = false;

config param debugDistPrinting = false;
config param debugResSupport = false;

// This flag is used to enable bulk transfer when aliased arrays are
// involved.  Currently, aliased arrays are not eligible for the
// optimization due to a bug in bulk transfer for rank changed arrays
// in which the last (right-most) dimension is collapsed.  Disabling
// the optimization for all aliased arrays is very conservative, so
// we provide this flag to allow the user to override the decision,
// with the caveat that it will likely not work for the above case.
config const disableAliasedBulkTransfer = true;

config param sanityCheckDistribution = false;

//
// If the testFastFollowerOptimization flag is set to true, the
// follower will write output to indicate whether the fast follower is
// used or not.  This is used in regression testing to ensure that the
// 'fast follower' optimization is working.
//
config param testFastFollowerOptimization = true;

//
// This flag is used to disable lazy initialization of the RAD cache.
//
config param disableBlockLazyRAD = defaultDisableLazyRADOpt;

var isRecoveryTask: atomic(bool) ;// = false;
var printAux = false;

config param numberofbuddies=1;

//extern proc chpl_comm_getLocaleStatus() : int(32);
//
// Block Distribution Class
//
//   The fields dataParTasksPerLocale, dataParIgnoreRunningTasks, and
//   dataParMinGranularity can be changed, but changes are
//   not reflected in privatized copies of this distribution.  Perhaps
//   this is a feature, not a bug?!
//
// rank : generic rank that must match the rank of domains and arrays
//        declared over this distribution
//
// idxType: generic index type that must match the index type of
//          domains and arrays declared over this distribution
//
// boundingBox: a non-distributed domain defining a bounding box used
//              to partition the space of all indices across the array
//              of target locales; the indices inside the bounding box
//              are partitioned "evenly" across the locales and
//              indices outside the bounding box are mapped to the
//              same locale as the nearest index inside the bounding
//              box
//
// targetLocDom: a non-distributed domain over which the array of
//               target locales and the array of local distribution
//               classes are defined
//
// targetLocales: a non-distributed array containing the target
//                locales to which this distribution partitions indices
//                and data
//
// locDist: a non-distributed array of local distribution classes
//
// dataParTasksPerLocale: an integer that specifies the number of tasks to
//                        use on each locale when iterating in parallel over
//                        a Block-distributed domain or array
//
// dataParIgnoreRunningTasks: a boolean what dictates whether the number of
//                            task use on each locale should be limited
//                            by the available parallelism
//
// dataParMinGranularity: the minimum required number of elements per
//                        task created
//

// chpldoc TODO:
//   a good reference to
//     dataParTasksPerLocale, dataParIgnoreRunningTasks, dataParMinGranularity
//   remove the above comments to avoid duplication/maintenance?
//   talk about RAD - here or in DefaultRectangular?
//   supports RAD opt, Bulk Transfer optimization, localSubdomain
//   disableBlockLazyRAD
//   disableAliasedBulkTransfer
//
/*
This Block distribution partitions indices into blocks
according to a ``boundingBox`` domain
and maps each entire block onto a locale from a ``targetLocales`` array.

The indices inside the bounding box are partitioned "evenly" across
the target locales. An index outside the bounding box is mapped to the
same locale as the nearest index inside the bounding box.

Formally, an index ``idx`` is mapped to ``targetLocales[locIdx]``,
where ``locIdx`` is computed as follows.

In the 1-dimensional case, for a Block distribution with:


	=================   ====================
	``boundingBox``     ``{low..high}``
	``targetLocales``   ``[0..N-1] locale``
	=================   ====================

we have:

	===================    ==========================================
	if ``idx`` is ...      ``locIdx`` is ...
	===================    ==========================================
	``low<=idx<=high``     ``floor(  (idx-low)*N / (high-low+1)  )``
	``idx < low``          ``0``
	``idx > high``         ``N-1``
	===================    ==========================================

In the multidimensional case, ``idx`` and ``locIdx`` are tuples
of indices; ``boundingBox`` and ``targetLocales`` are multi-dimensional;
the above computation is applied in each dimension.


**Example**

The following code declares a domain ``D`` distributed over
a Block distribution with a bounding box equal to the domain ``Space``,
and declares an array ``A`` over that domain.
The `forall` loop sets each array element
to the ID of the locale to which it is mapped.

	.. code-block:: chapel

		use BlockDist;

		const Space = {1..8, 1..8};
		const D: domain(2) dmapped Block(boundingBox=Space) = Space;
		var A: [D] int;

		forall a in A do
			a = a.locale.id;

		writeln(A);

When run on 6 locales, the output is:

	::

		0 0 0 0 1 1 1 1
		0 0 0 0 1 1 1 1
		0 0 0 0 1 1 1 1
		2 2 2 2 3 3 3 3
		2 2 2 2 3 3 3 3
		2 2 2 2 3 3 3 3
		4 4 4 4 5 5 5 5
		4 4 4 4 5 5 5 5


**Constructor Arguments**

The ``Block`` class constructor is defined as follows:

	.. code-block:: chapel

		proc Block(
			boundingBox: domain,
			targetLocales: [] locale  = Locales,
			dataParTasksPerLocale     = // value of  dataParTasksPerLocale      config const,
			dataParIgnoreRunningTasks = // value of  dataParIgnoreRunningTasks  config const,
			dataParMinGranularity     = // value of  dataParMinGranularity      config const,
			param rank                = boundingBox.rank,
			type  idxType             = boundingBox.idxType)

The arguments ``boundingBox`` (a domain) and ``targetLocales`` (an array)
define the mapping of any index of ``idxType`` type to a locale
as described above.

The rank of ``targetLocales`` must match the rank of the distribution,
or be ``1``.  If the rank of ``targetLocales`` is ``1``, a greedy
heuristic is used to reshape the array of target locales so that it
matches the rank of the distribution and each dimension contains an
approximately equal number of indices.

The arguments ``dataParTasksPerLocale``, ``dataParIgnoreRunningTasks``,
and ``dataParMinGranularity`` set the knobs that are used to
control intra-locale data parallelism for Block-distributed domains
and arrays in the same way that the like-named config constants
control data parallelism for ranges and default-distributed domains
and arrays.

The ``rank`` and ``idxType`` arguments are inferred from the
``boundingBox`` argument unless explicitly set.
They must match the rank and index type of the domains
"dmapped" using that Block instance.


**Data-Parallel Iteration**

A `forall` loop over a Block-distributed domain or array
executes each iteration on the locale where that iteration's index
is mapped to.

Parallelism within each locale is guided by the values of
``dataParTasksPerLocale``, ``dataParIgnoreRunningTasks``, and
``dataParMinGranularity`` of the respective Block instance.
Updates to these values, if any, take effect only on the locale
where the updates are made.
*/
class Block : BaseDist {
	param rank: int;
	type idxType = int;
	var boundingBox: domain(rank, idxType);
	var targetLocDom: domain(rank);
	var targetLocales: [targetLocDom] locale;
	var locDist: [targetLocDom] LocBlock(rank, idxType);
	var dataParTasksPerLocale: int;
	var dataParIgnoreRunningTasks: bool;
	var dataParMinGranularity: int;
	var pid: int = -1; // privatized object id (this should be factored out)
	//var parityBits: [0..(numLocales-1)] int;
	
	
}

//
// Local Block Distribution Class
//
// rank : generic rank that matches Block.rank
// idxType: generic index type that matches Block.idxType
// myChunk: a non-distributed domain that defines this locale's indices
//
class LocBlock {
	param rank: int;
	type idxType;
	const myChunk: domain(rank, idxType);									//calculated in the constructor LocBlock.LocBlock:l.712
	var myResIndex: rank*int;												//rank*int;	//index to copy from remote locale
 //const myResChunk: domain(rank, idxType);
 // var buddyId: int; 													//locale.id for the buddy locale
	var myResChunk: domain(rank, idxType);  								//the chunk of the buddy locale
}


//
// Block Domain Class
//
// rank:      generic domain rank
// idxType:   generic domain index type
// stridable: generic domain stridable parameter
// dist:      reference to distribution class
// locDoms:   a non-distributed array of local domain classes
// whole:     a non-distributed domain that defines the domain's indices
//
class BlockDom: BaseRectangularDom {
	param rank: int;
	type idxType;
	param stridable: bool;
	const dist: Block(rank, idxType);
	var locDoms: [dist.targetLocDom] LocBlockDom(rank, idxType, stridable);
	var whole: domain(rank=rank, idxType=idxType, stridable=stridable);
	var pid: int = -1; // privatized object id (this should be factored out)
}

//
// Local Block Domain Class
//
// rank: generic domain rank
// idxType: generic domain index type
// stridable: generic domain stridable parameter
// myBlock: a non-distributed domain that defines the local indices
//
class LocBlockDom {
	param rank: int;
	type idxType;
	param stridable: bool;
	var myBlock: domain(rank, idxType, stridable);
	var myResIndex: rank*int;							//index to copy from remote locale
	var myResBlock: domain(rank, idxType, stridable); //myBlock.type;  //myBlock of the buddy locale
}

//
// Block Array Class
//
// eltType: generic array element type
// rank: generic array rank
// idxType: generic array index type
// stridable: generic array stridable parameter
// dom: reference to domain class
// locArr: a non-distributed array of local array classes
// myLocArr: optimized reference to here's local array class (or nil)
//
class BlockArr: BaseArr {
	type eltType;
	param rank: int;
	type idxType;
	param stridable: bool;
	var doRADOpt: bool = false;// defaultDoRADOpt;
	var dom: BlockDom(rank, idxType, stridable);
	var locArr: [dom.dist.targetLocDom] LocBlockArr(eltType, rank, idxType, stridable);
	var myLocArr: LocBlockArr(eltType, rank, idxType, stridable);
	var pid: int = -1; // privatized object id (this should be factored out)
	const SENTINEL = max(rank*idxType);
	var testbits:[0..(numLocales-1)] int;
}

//
// Local Block Array Class
//
// eltType: generic array element type
// rank: generic array rank
// idxType: generic array index type
// stridable: generic array stridable parameter
// locDom: reference to local domain class
// myElems: a non-distributed array of local elements
//
class LocBlockArr {
	type eltType;
	param rank: int;
	type idxType;
	param stridable: bool;
	const locDom: LocBlockDom(rank, idxType, stridable);
	var locRAD: LocRADCache(eltType, rank, idxType); 			// non-nil if doRADOpt=true
	var myElems: [locDom.myBlock] eltType;
	var myResElems: [locDom.myResBlock] eltType;				//array of the copied elems from the remote locale
	var locRADLock: atomicflag; 								// This will only be accessed locally
																// force the use of processor atomics
	var myParityBit:int =0;
	var adoptedLocales: int=0;
	// These function will always be called on this.locale, and so we do
	// not have an on statement around the while loop below (to avoid
	// the repeated on's from calling testAndSet()).
	inline proc lockLocRAD() {
		while locRADLock.testAndSet() do chpl_task_yield();
	}

	inline proc unlockLocRAD() {
		locRADLock.clear();
	}
}
proc _ensureTuple(arg) return if isTuple(arg) then arg else (arg,);

//
// Block constructor for clients of the Block distribution
//
proc Block.Block(boundingBox: domain,
								targetLocales: [] locale = Locales,
								dataParTasksPerLocale=getDataParTasksPerLocale(),
								dataParIgnoreRunningTasks=getDataParIgnoreRunningTasks(),
								dataParMinGranularity=getDataParMinGranularity(),
								param rank = boundingBox.rank,
								type idxType = boundingBox.idxType) {

	if debugDistPrinting then
		writeln("module:loc ", here.id, " proc Block.Block\n");
	if rank != boundingBox.rank then
		compilerError("specified Block rank != rank of specified bounding box");
	if idxType != boundingBox.idxType then
		compilerError("specified Block index type != index type of specified bounding box");

	this.boundingBox = boundingBox;

	setupTargetLocalesArray(targetLocDom, this.targetLocales, targetLocales);

	const boundingBoxDims = boundingBox.dims();
	const targetLocDomDims = targetLocDom.dims();
	if debugDistPrinting then
 		writeln("** Block.block ", here.id , " -- fire coforall");
	coforall locid in targetLocDom do
		on this.targetLocales(locid) do
			locDist(locid) =  new LocBlock(rank, idxType, locid, boundingBoxDims,
																		 targetLocDomDims);
	if debugDistPrinting then
		writeln("** Block.block ", here.id , " -- coforall done");

	// NOTE: When these knobs stop using the global defaults, we will need
	// to add checks to make sure dataParTasksPerLocale<0 and
	// dataParMinGranularity<0
	this.dataParTasksPerLocale = if dataParTasksPerLocale==0
															 then here.maxTaskPar
															 else dataParTasksPerLocale;
	this.dataParIgnoreRunningTasks = dataParIgnoreRunningTasks;
	this.dataParMinGranularity = dataParMinGranularity;
	if (printAux) then
	writeln("module:in Block constructor");
		/*
		 * compute the index of the buddy locale in the targetLocDom  based on the locale.id
		 * (that's diff to the 1D range 1..numLocales)
		 * eg a MonoLocaleView = {0..#numLocales} with a 2-dimensional Space domain
		 * run on 4 locales, would look like this:
		 * ..............
		 * .			.			.
	 * .	L0	.	L1	.
	 * ..............
	 * .			.			.
	 * .	L2	.	L3	.
	 * ..............
	 *
	 *and in the tagetLocDom these have (tuples) for indices
	 *
	 * ..............
	 * .			.			.
	 * .(0,0)	.(0,1).
	 * ..............
	 * .			.			.
	 * .(1,0) .(1,1).
	 * ..............
	 *
	 *
	 * for the above case the following prints:
	 * Locale 0 at [(0, 0)]  copies from Locale 3 at [(1, 1)]
	 * Locale 1 at [(0, 1)]  copies from Locale 0 at [(0, 0)]
	 * Locale 2 at [(1, 0)]  copies from Locale 1 at [(0, 1)]
	 * Locale 3 at [(1, 1)]  copies from Locale 2 at [(1, 0)]
	 *
	 * zip iter over targetLocales domain and array
	 * calculate the buddy(guest) locale
	 * iter over targetLocales domain and array
	 * if buddy is this one
	 * copy the idx in teh targetLocDom
	 * (and make it look like a tuple if it's not already)
	 *
	 * vass wrote the following:
	 */

	/* //const buddyA = _computeBuddy2(here.id, numberofbuddies, 1 , numLocales);
		//const buddyB = _computeBuddy2(here.id, numberofbuddies, 2 , numLocales);
		//writeln("Locale ",here.id, " ----------buddy 1=",buddyA);
		//writeln("Locale ",here.id, " ----------buddy 2=",buddyB);
		//const buddyC = _computeBuddy2(here.id, numberofbuddies, 3 , numLocales);
		//writeln("Locale ",here.id, " ----------buddy 2=",buddyC);
	*/
	
	//error: tuple size must be static
	//extern type failed_table  = targetLocDom*failed_t;
	
	if (printAux) then
		writeln("Calculating buddy_of_guest");
	for (guest_idx, guest_loc) in zip(targetLocDom, targetLocales) {
		if (printAux) then
		writeln("guest_idx ",guest_idx, " guest_loc ", guest_loc, " numberofbuddies ",numberofbuddies," numLocales ",numLocales);

		const buddy_of_guest  = _computeBuddy(guest_loc); //_computeBuddy2(guest_idx, numberofbuddies, 1 , numLocales);//
		if (printAux) then
			writeln("|== ",guest_loc.id, " => ",  buddy_of_guest);
		for (b_idx, b_loc) in zip(targetLocDom, targetLocales) {
			if b_loc == buddy_of_guest {
				locDist[guest_idx].myResIndex = _ensureTuple(b_idx);
				if (printAux) then
					writeln("module:Locale ", guest_loc.id, " at [", guest_idx, "]  copies from Locale ", b_loc.id, " at [", b_idx, "]");
				break;
			}
		}
	}
	//writeln(here.id, " Block constructor : initializing parityBits array");
	//for pb in targetLocDom do
	//	this.parityBits[pb] =0;

	if debugBlockDist {
		if debugDistPrinting then
			writeln("module:Creating new Block distribution:");
		dsiDisplayRepresentation();
	}
}

proc Block.dsiAssign(other: this.type) {
	coforall locid in targetLocDom do
		on targetLocales(locid) do
			delete locDist(locid);
	boundingBox = other.boundingBox;
	targetLocDom = other.targetLocDom;
	targetLocales = other.targetLocales;
	dataParTasksPerLocale = other.dataParTasksPerLocale;
	dataParIgnoreRunningTasks = other.dataParIgnoreRunningTasks;
	dataParMinGranularity = other.dataParMinGranularity;
	const boundingBoxDims = boundingBox.dims();
	const targetLocDomDims = targetLocDom.dims();

 if debugDistPrinting then
		writeln("module:loc ", here.id, " proc Block.dsiAssign\n");
 //if debugDistPrinting then
	writeln("module:** Block.dsiAssign ", here.id , " -- fire coforall");
	coforall locid in targetLocDom do
		on targetLocales(locid) do
			locDist(locid) = new LocBlock(rank, idxType, locid, boundingBoxDims,
																		targetLocDomDims);
}

//
// Block distributions are equivalent if they share the same bounding
// box and target locale set.
//
proc Block.dsiEqualDMaps(that: Block(?)) {
	if(printAux) then
		writeln(here.id, " Block.dsiEqualDMaps ");
	return (this.boundingBox == that.boundingBox &&
					this.targetLocales.equals(that.targetLocales));
}

//
// Block distributions are not equivalent to other domain maps.
//
proc Block.dsiEqualDMaps(that) param {
	if debugDistPrinting then
		writeln("module:loc ", here.id, " proc Block.dsiEqualDMaps\n");
	return false;
}

proc Block.dsiClone() {
	if debugDistPrinting then
		writeln( "loc ",here.id, " proc Block.dsiClone\n");
	return new Block(boundingBox, targetLocales,
									 dataParTasksPerLocale, dataParIgnoreRunningTasks,
									 dataParMinGranularity);
}

proc Block.dsiDestroyDistClass() {
	if debugDistPrinting then
		writeln("loc ", here.id, " proc Block.dsiDestroyDistClass\n");
	coforall ld in locDist do {
		on ld do
			delete ld;
	}
}

proc Block.dsiDisplayRepresentation() {
	writeln("boundingBox = ", boundingBox);
	writeln("targetLocDom = ", targetLocDom);
	writeln("targetLocales = ", for tl in targetLocales do tl.id);
	writeln("dataParTasksPerLocale = ", dataParTasksPerLocale);
	writeln("dataParIgnoreRunningTasks = ", dataParIgnoreRunningTasks);
	writeln("dataParMinGranularity = ", dataParMinGranularity);
	for tli in targetLocDom do
		writeln("module:locDist[", tli, "].myChunk = ", locDist[tli].myChunk);
}

proc Block.dsiNewRectangularDom(param rank: int, type idxType,
															param stridable: bool) {
	if debugDistPrinting then
		writeln("module:loc ", here.id, " proc Block.dsiNewRectangularDom\n");
	if idxType != this.idxType then
		compilerError("Block domain index type does not match distribution's");
	if rank != this.rank then
		compilerError("Block domain rank does not match distribution's");

	var dom = new BlockDom(rank=rank, idxType=idxType, dist=this, stridable=stridable);
	dom.setup();
	//dom.initialize();
	if (printAux) then
	writeln("module:done invoking BlockDom constructor");
	if debugBlockDist {
		writeln("module:Creating new Block domain:");
		dom.dsiDisplayRepresentation();
	}
	return dom;
}

/*
proc BlockDom.initialize() {
	forall guest_idx in this.dist.targetLocDom {
		const buddy_idx = this.dist.locDist[guest_idx].myResIndex;
		const guest_lbd = this.locDoms[guest_idx];
		guest_lbd.myResIndex = buddy_idx;
		const buddy_lbd = this.locDoms[buddy_idx];
		guest_lbd.myResBlock = buddy_lbd.myBlock;
		writeln("on Locale ", this.dist.targetLocales[guest_idx].id, ", buddy block is ", guest_lbd.myResBlock);
	}
}
*/
//
// output distribution
//
proc Block.writeThis(x:Writer) {
	x.writeln("Block");
	x.writeln("-------");
	x.writeln("distributes: ", boundingBox);
	x.writeln("across locales: ", targetLocales);
	x.writeln("indexed via: ", targetLocDom);
	x.writeln("resulting in: ");
	for locid in targetLocDom do
		x.writeln("  [", locid, "] locale ", locDist(locid).locale.id, " owns chunk: ", locDist(locid).myChunk);
}

proc Block.dsiIndexToLocale(ind: idxType) where rank == 1 {
	if debugDistPrinting then
		writeln("module:loc ",here.id, " proc Block.dsiIndexToLocale ind =", ind, "targetLocales(targetLocsIdx(ind)= ", targetLocales(targetLocsIdx(ind)), "\n");
	return targetLocales(targetLocsIdx(ind));
}

proc Block.dsiIndexToLocale(ind: rank*idxType) where rank > 1 {
	if debugDistPrinting then
		writeln("module:loc ", here.id, " proc Block.dsiIndexToLocale 2\n");
	return targetLocales(targetLocsIdx(ind));
}

//
// compute what chunk of inds is owned by a given locale -- assumes
// it's being called on the locale in question
//
proc Block.getChunk(inds, locid) {
	// use domain slicing to get the intersection between what the
	// locale owns and the domain's index set
	//
	// TODO: Should this be able to be written as myChunk[inds] ???
	//
	// TODO: Does using David's detupling trick work here?
	//
	const chunk = locDist(locid).myChunk((...inds.getIndices()));
	if debugDistPrinting then
		writeln(here.id, " proc Block.getChunk= ", chunk, "\n");

	if sanityCheckDistribution then
		if chunk.numIndices > 0 {
			if targetLocsIdx(chunk.low) != locid then
				writeln("module:[", here.id, "] ", chunk.low, " is in my chunk but maps to ",
								targetLocsIdx(chunk.low));
			if targetLocsIdx(chunk.high) != locid then
				writeln("module:[", here.id, "] ", chunk.high, " is in my chunk but maps to ",
								targetLocsIdx(chunk.high));
		}
	return chunk;
}

proc Block.getResChunk(inds, locid){
const chunk = locDist(locid).myResChunk((...inds.getIndices()));
	if debugDistPrinting then
		writeln(here.id, " proc Block.getResChunk= ", chunk, "\n");

	if sanityCheckDistribution then
		if chunk.numIndices > 0 {
			if targetLocsIdx(chunk.low) != locid then
				writeln("module:[", here.id, "] ", chunk.low, " is in my chunk but maps to ",
								targetLocsIdx(chunk.low));
			if targetLocsIdx(chunk.high) != locid then
				writeln("module:[", here.id, "] ", chunk.high, " is in my chunk but maps to ",
								targetLocsIdx(chunk.high));
		}
	return chunk;
}

//
// get the index into the targetLocales array for a given distributed index
//
proc Block.targetLocsIdx(ind: idxType) where rank == 1 {
	if debugDistPrinting then
		writeln("module:loc ",here.id, " proc Block.targetLocsIdx ind =", ind, " \n");
	return targetLocsIdx((ind,));
}

proc Block.targetLocsIdx(ind: rank*idxType) {
	var result: rank*int;
	if debugDistPrinting then
		writeln("module:loc ",here.id, " proc Block.targetLocsIdx (ind: rank*idxType)=", ind);

	for param i in 1..rank do
		result(i) = max(0, min((targetLocDom.dim(i).length-1):int,
													 (((ind(i) - boundingBox.dim(i).low) *
														 targetLocDom.dim(i).length:idxType) /
														boundingBox.dim(i).length):int));
	return if rank == 1 then result(1) else result;
}

proc Block.dsiCreateReindexDist(newSpace, oldSpace) {
	proc anyStridable(space, param i=1) param
		return if i == space.size then space(i).stridable
					 else space(i).stridable || anyStridable(space, i+1);
	if debugDistPrinting then
		writeln("module:loc ",here.id, " proc Block.dsiCreateReindexDist - newSpace= ", newSpace, "oldSpace= ", oldSpace, "\n");

	// Should this error be in ChapelArray or not an error at all?
	if newSpace(1).idxType != oldSpace(1).idxType then
		compilerError("index type of reindex domain must match that of original domain");
	if anyStridable(newSpace) || anyStridable(oldSpace) then
		compilerWarning("reindexing stridable Block arrays is not yet fully supported");

	/* To shift the bounding box, we must perform the following operation for
	 *  each dimension:
	 *
	 *   bbox(r).low - (oldSpace(r).low - newSpace(r).low)
	 *   bbox(r).high - (oldSpace(r).low - newSpace(r).low)
	 *
	 * The following is guaranteed on entry:
	 *
	 *   oldSpace(r).low-newSpace(r).low = oldSpace(r).high-newSpace(r).high
	 *
	 * We need to be able to do this without going out of range of the index
	 *  type.  The approach we take is to check if there is a way to perform
	 *  the calculation without having any of the intermediate results go out
	 *  of range.
	 *
	 *    newBbLow = bbLow - (oldLow - newLow)
	 *    newBbLow = bbLow - oldLow + newLow
	 *
	 * Can be performed as:
	 *
	 *    t = oldLow-newLow;
	 *    newBbLow = bbLow-t;
	 * or
	 *    t = bbLow-oldLow;
	 *    newBbLow = t+newLow;
	 * or
	 *    t = bbLow+newLow;
	 *    newBbLow = t-oldLow;
	 *
	 */
	proc adjustBound(bbound, oldBound, newBound) {
		var t: bbound.type;
		if safeSub(oldBound, newBound) {
			t = oldBound-newBound;
			if safeSub(bbound, t) {
				return (bbound-t, true);
			}
		}
		if safeSub(bbound, oldBound) {
			t = bbound-oldBound;
			if safeAdd(t, newBound) {
				return (t+newBound, true);
			}
		}
		if safeAdd(bbound, newBound) {
			t = bbound+newBound;
			if safeSub(t, oldBound) {
				return(t-oldBound, true);
			}
		}
		return (bbound, false);
	}

	var myNewBbox = boundingBox.dims();
	for param r in 1..rank {
		var oldLow = oldSpace(r).low;
		var newLow = newSpace(r).low;
		var oldHigh = oldSpace(r).high;
		var newHigh = newSpace(r).high;
		var valid: bool;
		if oldLow != newLow {
			(myNewBbox(r)._low,valid) = adjustBound(myNewBbox(r).low,oldLow,newLow);
			if !valid then // try with high
				(myNewBbox(r)._low,valid) = adjustBound(myNewBbox(r).low,oldHigh,newHigh);
			if !valid then
				halt("invalid reindex for Block: distribution bounding box (low) out of range in dimension ", r);

			(myNewBbox(r)._high,valid) = adjustBound(myNewBbox(r).high,oldHigh,newHigh);
			if !valid then
				(myNewBbox(r)._high,valid) = adjustBound(myNewBbox(r).high,oldLow,newLow);
			if !valid then // try with low
				halt("invalid reindex for Block: distribution bounding box (high) out of range in dimension ", r);
		}
	}
	var d = {(...myNewBbox)};
	var newDist = new Block(d, targetLocales,
													dataParTasksPerLocale, dataParIgnoreRunningTasks,
													dataParMinGranularity);
	return newDist;
}

proc LocBlock.LocBlock(param rank: int,
											type idxType,
											locid, // the locale index from the target domain
											boundingBox: rank*range(idxType),
											targetLocBox: rank*range) {

	if debugDistPrinting then
	if (printAux) then
		writeln(here.id, " proc LocBlock.LocBlock parameters: rank=",  rank, " locid=", locid, " boundingbox=", boundingBox, " targetLocBox=", targetLocBox, "\n");
	//calculate myChunk
	if rank == 1 {
		const lo = boundingBox(1).low;
		const hi = boundingBox(1).high;
		const numelems = hi - lo + 1;
		const numlocs = targetLocBox(1).length;
		if (printAux) then
		writeln(here.id, " rank=1 params: lo=", lo, " hi=", hi, " numelems=", numelems, " numlocs=", numlocs);
		const (blo, bhi) = _computeBlock(numelems, numlocs, locid,
																		 max(idxType), min(idxType), lo);
		myChunk = {blo..bhi};
		//pretend I am calculating buddy id here instead of..... BlockDom.setup??
	 const mybuddyid = if (locid+1< numlocs) then locid+1 else 0;
	 const (blo2, bhi2) = _computeBlock(numelems, numlocs, mybuddyid,
																		 max(idxType), min(idxType), lo);
	 myResChunk = {blo2..bhi2};
	 if(printAux) then
	writeln("CASE A ifrank==1 ", here.id," myChunk ", myChunk, " myResChunk ", myResChunk, "\n");

		//myResChunk = {(myResIndex*blo)..(myResIndex*bhi)};
		//error: Bounds of '..' must be integers of compatible types, when specified.

		//calculate myResChunk: domain(rank, idxType) ???
		/*const lo2 = boundingBox(1).low;
		const hi2 = boundingBox(1).high;
		const numelems2 = hi2 - lo2 + 1;
		const numlocs2 = targetLocBox(1).length;
		const (blo2, bhi2) = _computeBlock(numelems2, numlocs2, myResIndex,
																		 max(idxType), min(idxType), lo2);
		myResChunk = {blo2..bhi2};
		*/
	} else {
		var inds: rank*range(idxType);
		for param i in 1..rank {
			const lo = boundingBox(i).low;
			const hi = boundingBox(i).high;
			const numelems = hi - lo + 1;
			const numlocs = targetLocBox(i).length;
			const (blo, bhi) = _computeBlock(numelems, numlocs, locid(i),
																			 max(idxType), min(idxType), lo);
			inds(i) = blo..bhi;
		} 
		myChunk = {(...inds)};
		myResChunk = {(...inds)};
		if(printAux) then
		writeln("CASE B (else) ", here.id," myChunk ", myChunk, " myResChunk ", myResChunk, "\n");
		//calculate myResChunk: domain(rank, idxType) ???
		/*var indsres: rank*range(idxType);
		for param i in 1..rank {
			const lo2 = boundingBox(i).low;
			const hi2 = boundingBox(i).high;
			const numelems2 = hi2 - lo2 + 1;
			const numlocs2 = targetLocBox(i).length;
			const (blo2, bhi2) = _computeBlock(numelems2, numlocs2, locid(myResIndex),
																			 max(idxType), min(idxType), lo2);
			indsres(i) = blo2..bhi2;
		}
		myResChunk = {(...indsres)};
		*/
	}


}


proc BlockDom.dsiMyDist() return dist;

proc BlockDom.dsiDisplayRepresentation() {
	if debugDistPrinting then
		writeln("module:loc ",here.id, " proc BlockDom.dsiDisplayRepresentation \n");
		if(printAux) then	if (printAux) then
			writeln("module:whole = ", whole);
		if(printAux) then
		for tli in dist.targetLocDom do
			writeln("module:locDoms[", tli, "].myBlock = ", locDoms[tli].myBlock, "locDoms[", tli, "].myResBlock = ", locDoms[tli].myResBlock);
}

proc BlockDom.dsiDims() return whole.dims();

proc BlockDom.dsiDim(d: int) return whole.dim(d);

// stopgap to avoid accessing locDoms field (and returning an array)
proc BlockDom.getLocDom(localeIdx) return locDoms(localeIdx);


//
// Given a tuple of scalars of type t or range(t) match the shape but
// using types rangeType and scalarType e.g. the call:
// _matchArgsShape(range(int(32)), int(32), (1:int(64), 1:int(64)..5, 1:int(64)..5))
// returns the type: (int(32), range(int(32)), range(int(32)))
//
proc _matchArgsShape(type rangeType, type scalarType, args) type {
	if debugDistPrinting then
		writeln("module:loc ",here.id, " _matchArgsShape \n");
	proc helper(param i: int) type {
		if i == args.size {
			if isCollapsedDimension(args(i)) then
				return (scalarType,);
			else
				return (rangeType,);
		} else {
			if isCollapsedDimension(args(i)) then
				return (scalarType, (... helper(i+1)));
			else
				return (rangeType, (... helper(i+1)));
		}
	}
	return helper(1);
}


proc Block.dsiCreateRankChangeDist(param newRank: int, args) {
	var collapsedDimLocs: rank*idxType;

	if debugDistPrinting then
		writeln("module:loc ", here.id, " proc Block.dsiCreateRankChangeDist\n");

	for param i in 1..rank {
		if isCollapsedDimension(args(i)) {
			collapsedDimLocs(i) = args(i);
		} else {
			collapsedDimLocs(i) = 0;
		}
	}
	const collapsedLocInd = targetLocsIdx(collapsedDimLocs);
	var collapsedBbox: _matchArgsShape(range(idxType=idxType), idxType, args);
	var collapsedLocs: _matchArgsShape(range(idxType=int), int, args);

	for param i in 1..rank {
		if isCollapsedDimension(args(i)) {
			// set indicies that are out of bounds to the bounding box low or high.
			collapsedBbox(i) = if args(i) < boundingBox.dim(i).low then boundingBox.dim(i).low else if args(i) > boundingBox.dim(i).high then boundingBox.dim(i).high else args(i);
			collapsedLocs(i) = collapsedLocInd(i);
		} else {
			collapsedBbox(i) = boundingBox.dim(i);
			collapsedLocs(i) = targetLocDom.dim(i);
		}
	}

	const newBbox = boundingBox[(...collapsedBbox)];
	const newTargetLocales = targetLocales((...collapsedLocs));
	return new Block(newBbox, newTargetLocales,
									 dataParTasksPerLocale, dataParIgnoreRunningTasks,
									 dataParMinGranularity);
}

iter BlockDom.these() {
	 //if debugDistPrinting then
 writeln(here.id, " iter BlockDom.these () ");
 writeln(here.id, " iter BlockDom.these a  **************************************** \n");
	for i in whole do{
		writeln(i);
		yield i;
	}
}

iter BlockDom.these(param tag: iterKind) where tag == iterKind.leader {
	const maxTasks = dist.dataParTasksPerLocale;
	const ignoreRunning = dist.dataParIgnoreRunningTasks;
	const minSize = dist.dataParMinGranularity;
	const wholeLow = whole.low;

	// If this is the only task running on this locale, we don't want to
	// count it when we try to determine how many tasks to use.  Here we
	// check if we are the only one running, and if so, use
	// ignoreRunning=true for this locale only.  Obviously there's a bit
	// of a race condition if some other task starts after we check, but
	// in that case there is no correct answer anyways.
	//
	// Note that this code assumes that any locale will only be in the
	// targetLocales array once.  If this is not the case, then the
	// tasks on this locale will *all* ignoreRunning, which may have
	// performance implications.
	const hereId = here.id;
	const hereIgnoreRunning = if here.runningTasks() == 1 then true
														else ignoreRunning;

	if debugDistPrinting then
		writeln("module:loc ",here.id, " iter BlockDom.these 2 leader\n");
   //writeln(here.id, " iter BlockDom.these  leader **************************************** \n");
	coforall locDom in locDoms do on locDom {
		const myIgnoreRunning = if here.id == hereId then hereIgnoreRunning
			else ignoreRunning;
		// Use the internal function for untranslate to avoid having to do
		// extra work to negate the offset
		type strType = chpl__signedType(idxType);
		const tmpBlock = locDom.myBlock.chpl__unTranslate(wholeLow);
		//writeln(here.id, "BlockDom.these - tmpBlock ", tmpBlock );

		var locOffset: rank*idxType;
		for param i in 1..tmpBlock.rank do
			locOffset(i) = tmpBlock.dim(i).first/tmpBlock.dim(i).stride:strType;
		// Forward to defaultRectangular
		for followThis in tmpBlock._value.these(iterKind.leader, maxTasks,
																						myIgnoreRunning, minSize,
																						locOffset) do{
		//writeln("iter-BlockDom.these-2-leader: followThis= ",followThis);
			yield followThis;
		}
	}
}


//BlockDom iterator for myResBlock on each locDom - leader
iter BlockDom.theseR(param tag: iterKind) where tag == iterKind.leader {
	const maxTasks = dist.dataParTasksPerLocale;
	const ignoreRunning = dist.dataParIgnoreRunningTasks;
	const minSize = dist.dataParMinGranularity;
	const wholeLow = whole.low;

	// If this is the only task running on this locale, we don't want to
	// count it when we try to determine how many tasks to use.  Here we
	// check if we are the only one running, and if so, use
	// ignoreRunning=true for this locale only.  Obviously there's a bit
	// of a race condition if some other task starts after we check, but
	// in that case there is no correct answer anyways.
	//
	// Note that this code assumes that any locale will only be in the
	// targetLocales array once.  If this is not the case, then the
	// tasks on this locale will *all* ignoreRunning, which may have
	// performance implications.
	const hereId = here.id;
	const hereIgnoreRunning = if here.runningTasks() == 1 then true
														else ignoreRunning;

	if debugDistPrinting then
		writeln("module:loc ",here.id, " iter BlockDom.these 2 leader\n");
   //writeln(here.id, " iter BlockDom.theseRRR  leader **************************************** \n");
	coforall locDom in locDoms do on locDom {
		const myIgnoreRunning = if here.id == hereId then hereIgnoreRunning
			else ignoreRunning;
		// Use the internal function for untranslate to avoid having to do
		// extra work to negate the offset
		type strType = chpl__signedType(idxType);
		const tmpBlockel = locDom.myBlock.chpl__unTranslate(wholeLow);
		const tmpBlock = locDom.myResBlock.chpl__unTranslate(wholeLow);
		if(printAux) then
			writeln("BlockDom.theseR on ", here.id," tmpBlock(non-res) ", tmpBlockel, " tmpBlock (res)=", tmpBlock);
		var locOffset: rank*idxType;
		for param i in 1..tmpBlock.rank do{
			locOffset(i) = tmpBlock.dim(i).first/tmpBlock.dim(i).stride:strType;
			 if(printAux) then
		writeln("BlockDom.theseR on ", here.id, " locOffset(i)=",locOffset(i) );
		}
		// Forward to defaultRectangular
		var c=0;
		if(printAux) then
		writeln(here.id, "^^^^^^^^^^ ", tmpBlock._value.these(iterKind.leader, maxTasks, myIgnoreRunning, minSize, locOffset));

		for followThis in tmpBlock._value.these(iterKind.leader, maxTasks, myIgnoreRunning, minSize, locOffset) do{
		c+=1;
		if printAux then
			writeln("@@  ", here.id, " iter-BlockDom.theseR: followThis= ",followThis, " ---c=", c);
			yield followThis;
		}
	}
}

//
// TODO: Abstract the addition of low into a function?
// Note relationship between this operation and the
// order/position functions -- any chance for creating similar
// support? (esp. given how frequent this seems likely to be?)
//
// TODO: Is there some clever way to invoke the leader/follower
// iterator on the local blocks in here such that the per-core
// parallelism is expressed at that level?  Seems like a nice
// natural composition and might help with my fears about how
// stencil communication will be done on a per-locale basis.
//
iter BlockDom.these(param tag: iterKind, followThis) where tag == iterKind.follower {
	writeln("____ THIS IS BlockDom.these EXECUTING _________");
	writeln(here.id, " iter BlockDom.these follower **************************************** \n");
	proc anyStridable(rangeTuple, param i: int = 1) param
			return if i == rangeTuple.size then rangeTuple(i).stridable
						 else rangeTuple(i).stridable || anyStridable(rangeTuple, i+1);

	 //if debugDistPrinting then
		//writeln("loc ", here.id, " iter BlockDom.these 3 \n");

	if chpl__testParFlag then
		chpl__testPar("Block domain follower invoked on ", followThis);

	var t: rank*range(idxType, stridable=stridable||anyStridable(followThis));
	type strType = chpl__signedType(idxType);
	for param i in 1..rank {
		var stride = whole.dim(i).stride: strType;
		// not checking here whether the new low and high fit into idxType
		var low = (stride * followThis(i).low:strType):idxType;
		var high = (stride * followThis(i).high:strType):idxType;
		t(i) = (low..high by stride:strType) + whole.dim(i).low by followThis(i).stride:strType;
		writeln(" %% BlockDom.these on ", here.id, " i =", i, "t(i)=", t(i));
	}
	for i in {(...t)} {
		//if debugDistPrinting then
			writeln("module:iter BlockDom.these 3 ", i);
		yield i;
	}
}


//BlockDom iterator for myResBlock on each locDom - follower

iter BlockDom.theseR(param tag: iterKind, followThis) where tag == iterKind.follower {
	writeln("____ THIS IS BlockDom.theseR EXECUTING _________");
	writeln(here.id, " iter BlockDom.theseRRR follower **************************************** \n");

	proc anyStridable(rangeTuple, param i: int = 1) param
			return if i == rangeTuple.size then rangeTuple(i).stridable
						 else rangeTuple(i).stridable || anyStridable(rangeTuple, i+1);



	if chpl__testParFlag then
		chpl__testPar("Block domain follower R  invoked on ", followThis);

	var t: rank*range(idxType, stridable=stridable||anyStridable(followThis));
	type strType = chpl__signedType(idxType);
	for param i in 1..rank {
		var stride = whole.dim(i).stride: strType;
		// not checking here whether the new low and high fit into idxType
		var low = (stride * followThis(i).low:strType):idxType;
		var high = (stride * followThis(i).high:strType):idxType;
		t(i) = (low..high by stride:strType) + whole.dim(i).low by followThis(i).stride:strType;
		writeln(" %% BlockDom.theseR F on ", here.id, " i =",i, "t(i)=", t(i));
	}
	for i in {(...t)} {
		writeln("module:iter BlockDom.theseRRR ", i);
		yield i;
	}
}

//
// output domain
//
proc BlockDom.dsiSerialWrite(x:Writer) {
	if debugDistPrinting then
	writeln( here.id, " proc BlockDom.dsiSerialWrite \n");
	x.write(whole);
}

//
// how to allocate a new array over this domain
//
proc BlockDom.dsiBuildArray(type eltType) {
	var arr = new BlockArr(eltType=eltType, rank=rank, idxType=idxType, stridable=stridable, dom=this);
	 //if debugDistPrinting then
	 if (printAux) then
	writeln("module:loc ",here.id, " BlockDom.dsiBuildArray");
	arr.setup();
	arr.dsiDisplayRepresentation();
	return arr;
}

proc BlockDom.dsiNumIndices return whole.numIndices;
proc BlockDom.dsiLow return whole.low;
proc BlockDom.dsiHigh return whole.high;
proc BlockDom.dsiStride return whole.stride;

//
// INTERFACE NOTES: Could we make dsiSetIndices() for a rectangular
// domain take a domain rather than something else?
//
proc BlockDom.dsiSetIndices(x: domain) {
	 if debugDistPrinting then
		writeln("module:loc ", here.id, " BlockDom.dsiSetIndices");
	writeln("module:BlockDom.dsiSetIndices");
	if x.rank != rank then
		compilerError("rank mismatch in domain assignment");
	if x._value.idxType != idxType then
		compilerError("index type mismatch in domain assignment");
	whole = x;
	setup();
	if debugBlockDist {
		writeln("Setting indices of Block domain:");
		dsiDisplayRepresentation();
	}
}

proc BlockDom.dsiSetIndices(x) {
	 if debugDistPrinting then
		writeln( "module:loc ",here.id, " BlockDom.dsiSetIndices 2");
	if x.size != rank then
		compilerError("rank mismatch in domain assignment");
	if x(1).idxType != idxType then
		compilerError("index type mismatch in domain assignment");
	//
	// TODO: This seems weird:
	//
	whole.setIndices(x);
	setup();
	if debugBlockDist {
		writeln("module:Setting indices of Block domain:");
		dsiDisplayRepresentation();
	}
}

proc BlockDom.dsiGetIndices() {
	 if debugDistPrinting then
		writeln( "module:loc ", here.id, " BlockDom.dsiGetIndices");
	return whole.getIndices();
}

// dsiLocalSlice
proc BlockDom.dsiLocalSlice(param stridable: bool, ranges) {
	 if debugDistPrinting then
		writeln( "module:loc ",here.id, " BlockDom.dsiLocalSlice");
	return whole((...ranges));
}

proc BlockDom.setup() {
	 if debugDistPrinting then
		writeln( "module:loc ",here.id, " BlockDom.setup");
	if locDoms(dist.targetLocDom.low) == nil {
		var sz:int(64) = dist.targetLocDom.size;
		coforall localeIdx in dist.targetLocDom do {
			on dist.targetLocales(localeIdx) do{
				//var buddyIdx:int ;
				 //if((localeIdx+1) > sz ) then 	buddyIdx=0; else buddyIdx= localeIdx+1;
				 var me :int = localeIdx;
				const buddyIdx = _computeBuddyId2(me, numberofbuddies, 1, numLocales);
				locDoms(localeIdx) = new LocBlockDom(rank, idxType, stridable,dist.getChunk(whole, localeIdx), dist.locDist[localeIdx].myResIndex, dist.getResChunk(whole, localeIdx));

		 }
		}
	} else {
		coforall localeIdx in dist.targetLocDom do {
			on dist.targetLocales(localeIdx) do{
				locDoms(localeIdx).myBlock = dist.getChunk(whole, localeIdx);
				locDoms(localeIdx).myResBlock = dist.getResChunk(whole, localeIdx);
	}
		}
	}


	/* BlockDom
	 * 	|L0|		-> LocBlockDom
	 * 	|L1|		-> LocBlockDom
	 *    |L2|		-> LocBlockDom
	 *
	 * LocBlockDom is the local part of BlockDom on each locale
	 * each locale can query myBlock to get the local indices
	 * (block - because of the BlockDist)
	 * we can iterate over the locales and query the block of the
	 * buddy locale(and copy it in myResBlock on this locale)
	 *
	 * iterate over the dist's targetLocDom
	 * myResIndex is my buddy's indices
	 * locDoms[idx] returns a locale
	 * guest_lbd : this locale's LocBloclDom
	 * buddy_lbd: the buddy locale's locBlockDom
	 * guest_lbd.myResBlock = buddy_lbd.myBlock
	 *
	 *   vass wrote the following:
	 */
	for guest_idx in this.dist.targetLocDom {
		const buddy_idx = this.dist.locDist[guest_idx].myResIndex;
		const guest_lbd = this.locDoms[guest_idx];
		guest_lbd.myResIndex = buddy_idx;
		const buddy_lbd = this.locDoms[buddy_idx];
		
		guest_lbd.myResBlock = buddy_lbd.myBlock;
		//if (printAux) then
			writeln("BlockDom.setup() on ", this.dist.targetLocales[guest_idx].id, ":  guest_lbd block = ", guest_lbd.myBlock, " guest_lbd RES block = ", guest_lbd.myResBlock);
	}

}
	/*This is called twice - for whatever reason,
	 * the first time the blocks are empty
	 * while the second time they get the index sets of the remote locale
	 */

/* vass wrote the following:
 * when should this be invoked?????
 * todo: replace 'for' with 'forall' or 'coforall' - here and in other cases
 *
 *  BlockArr
 *  |L0|		-> LocBlockArr
 *  |L1|		-> LocBlockArr
 *  |L2|		-> LocBlockArr
 *
 *  this is the remote "block" of the array - here we copy values
 *  we can do this when teh array is declared
 *  (will give as an unitialised copy)						OR
 *  we can do it when the array is populated
 * 	a) direct assignment array-to-array ( eg. A = B) - happens with bulkTransfer in ChapelArray.chpj
 * 	b) assignment of distinct elems (eg. A[5] = 2 )  - indexing (hopefully)
 *  BUT
 *  we also have value updates during execution.
 *  so we either do this on demand (every time the update happens)
 *  or using dirty bits and updating periodically (meh)
 *
 *  So were should we call this function ? take into account all the gets (lots of those)
 *  What function does assignment? Is it in Chapel Array?
 */


 //ChapelIterator.chpl: error: cannot iterate over values of type LocBlockArr(int(64),1,int(64),false)

proc BlockArr.updateBuddies() {
	const dom = this.dom;
	//if(printAux) then
		writeln(here.id, " BlockArr.updateBuddies()");
	for guest_idx in this.locArr.domain { // same as dist.targetLocDom
		const buddy_idx = dom.locDoms[guest_idx].myResIndex;
		
		this.locArr[guest_idx].myResElems = this.locArr[buddy_idx].myElems;
		writeln(" buddy_idx=",guest_idx, " buddy_idx=", buddy_idx, " myResElems=", this.locArr[guest_idx].myResElems, " myBuddy's elems=", this.locArr[buddy_idx].myElems);
	}
}

proc BlockDom.dsiMember(i) {
	if debugDistPrinting then
		writeln( "module:loc ",here.id, " BlockDom.dsiMember\n");
	return whole.member(i);
}

proc BlockDom.dsiIndexOrder(i) {
	 if debugDistPrinting then
		writeln("module:loc ", here.id, " BlockDom.dsiIndexOrder \n");
	return whole.indexOrder(i);
}

//
// build a new rectangular domain using the given range
//
proc BlockDom.dsiBuildRectangularDom(param rank: int, type idxType,
																	 param stridable: bool,
																	 ranges: rank*range(idxType,
																											BoundedRangeType.bounded,
																											stridable)) {
	if debugDistPrinting then
		writeln( "module:loc ",here.id, " BlockDom.dsiBuildRectangularDom \n");
	writeln("module:** BlockDom.dsiBuildRectangularDom rectangular domain with the given range ");
	if idxType != dist.idxType then
		compilerError("Block domain index type does not match distribution's");
	if rank != dist.rank then
		compilerError("Block domain rank does not match distribution's");

	var dom = new BlockDom(rank=rank, idxType=idxType,
												 dist=dist, stridable=stridable);
	dom.dsiSetIndices(ranges);
	return dom;
}

//
// Added as a performance stopgap to avoid returning a domain
//
proc LocBlockDom.member(i) return myBlock.member(i);  //myResBlock.member(i) ?? where is .member? Just here?

proc BlockArr.dsiDisplayRepresentation() {
	 if debugDistPrinting then
		writeln( "module:loc ",here.id, " BlockArr.dsiDisplayRepresentation \n");
	for tli in dom.dist.targetLocDom {
		if (printAux) then
			writeln("module:locArr[", tli, "].myElems = [", for e in locArr[tli].myElems do e, "] ",
						"\n locArr[", tli, "].myResElems = [", for e in locArr[tli].myResElems do e, "]");
		if doRADOpt then
		if (printAux) then
			writeln("module:locArr[", tli, "].locRAD = ", locArr[tli].locRAD.RAD);
	}
}

proc BlockArr.dsiGetBaseDom() return dom;

//
// NOTE: Each locale's myElems array be initialized prior to setting up
// the RAD cache.
//
proc BlockArr.setupRADOpt() {
	if debugDistPrinting then
		writeln( "module:loc ",here.id, " BlockArr.setupRADOpt \n");
	for localeIdx in dom.dist.targetLocDom {
		on dom.dist.targetLocales(localeIdx) {
			const myLocArr = locArr(localeIdx);
			if myLocArr.locRAD != nil {
				delete myLocArr.locRAD;
				myLocArr.locRAD = nil;
			}
			if disableBlockLazyRAD {
				myLocArr.locRAD = new LocRADCache(eltType, rank, idxType, dom.dist.targetLocDom);
				for l in dom.dist.targetLocDom {
					if l != localeIdx {
						myLocArr.locRAD.RAD(l) = locArr(l).myElems._value.dsiGetRAD();
					}
				}
			}
		}
	}
}

proc BlockArr.setup() {
	if debugDistPrinting then
		writeln( "BlockArr.setup -loc ",here.id);
	var thisid = this.locale.id;
	if debugDistPrinting then
 	 	writeln( "BlockArr.setup:** thisid ",thisid );
	coforall localeIdx in dom.dist.targetLocDom {
		on dom.dist.targetLocales(localeIdx) {
			const locDom = dom.getLocDom(localeIdx);
			if debugDistPrinting then
				writeln( "BlockArr.setup:** localeIdx ",localeIdx," newLocBlockArr");
			locArr(localeIdx) = new LocBlockArr(eltType, rank, idxType, stridable, locDom);
			//myElems, myResElems not initialized here!
			if thisid == here.id then
				myLocArr = locArr(localeIdx);
		}
	}


	if doRADOpt && disableBlockLazyRAD then {
		if debugDistPrinting then
			writeln("BlockArr.setup: ", here.id, "BlockArr.setup() - calling setupRADOpt ");
		setupRADOpt();
	}
}

inline proc _remoteAccessData.getDataIndex(param stridable, ind: rank*idxType) {
	// modified from DefaultRectangularArr.getDataIndex
	writeln(here.id, " _remoteAccessData.getDataIndex");
	if stridable {
		var sum = origin;
		for param i in 1..rank do
			sum += (ind(i) - off(i)) * blk(i) / abs(str(i)):idxType;
		return sum;
	} else {
		var sum = if earlyShiftData then 0:idxType else origin;
		for param i in 1..rank do
			sum += ind(i) * blk(i);
		if !earlyShiftData then sum -= factoredOffs;
		return sum;
	}
}


inline proc BlockArr.dsiLocalAccess(i: rank*idxType) ref {
	//if debugDistPrinting then
		writeln(here.id, " BlockArr.dsiLocalAccess   --- \n");
	return myLocArr.this(i);
}





var continuedRecovery =(100, 100);

// reads and returns the existing value
//during assignment (or update) or write
//the value returned is NOT up to date
// -> cannot use this value to store on the buddy's myResElems
proc BlockArr.dsiAccess(i: rank*idxType) ref {
  testbits[1]=100;
   if debugDistPrinting then
		writeln(here.id, ": BlockArr.dsiAcccess (rank)i=",i);
  
		
   
	//                      //
	// case A : local       //
	//                      //
  if myLocArr != nil && myLocArr.locDom.member(i) then{
	  
		var myBuddyB, myGuest:int;
		myBuddyB = _computeBuddyId2(dom.dist.targetLocsIdx(i), numberofbuddies, 1, numLocales);
		myGuest = _computeGuestId(dom.dist.targetLocsIdx(i), numberofbuddies, 1, numLocales);
		var guestStatus =0;
		on Locales(myGuest) do {
			 guestStatus = here.checkLocaleStatus();
			 if(printAux) then 
			 writeln(" on Locale ", here.id, " guestStatus is = ",guestStatus );
		}
		if (guestStatus ==1)then { 

			if(locArr(here.id).adoptedLocales != myGuest){ //if I have adopted it already do not update/otehrwise update from myElems
				if(printAux) then 
					writeln(here.id, " DISCOVERED failure on myGuest=", myGuest, " copying elems and adopting ", myGuest, "\n myRes=", locArr(here.id).myResElems, " guest's elems=",locArr(myGuest).myElems);
				locArr(here.id).myResElems = locArr(myGuest).myElems;
			}
			locArr(here.id).adoptedLocales= myGuest;
			if(printAux) then 
				writeln(here.id, " dsiaccess LOCAL adopted =", locArr(here.id).adoptedLocales);
		}

		/// tell myB I have an update
		locArr(myBuddyB).myParityBit =1;  
/*			/// update myRelems from guest
			if(myLocArr.myParityBit==1 && locArr(here.id).adoptedLocales==0	){ //if(locArr(myGuest).myParityBit==1){ 
				//if(printAux) then
					//writeln(here.id, " dsiAccess A (local) parityBit on my pos= ", here.id, " = ", locArr(here.id).myParityBit, "\n NEED TO UPDATE MYRESELEMS" );
					//writeln(".dsiAccess myResElems = ", myLocArr.myResElems, "\n my guest's =", myGuest, "  Elems=", locArr(myGuest).myElems );
				myLocArr.myResElems= locArr(myGuest).myElems;
					writeln(".dsiAccess ", here.id, " After update myResElems=", myLocArr.myResElems);
				///unset parity
				myLocArr.myParityBit =0;
				
			}else {
				//if(printAux) then
					writeln(".dsiAccess ",here.id, " dsiAccess A (local) parityBit on my pos= ", here.id, " = ", myLocArr.myParityBit, "\n NO NEED TO UPDATE MYRESELEMS" );
			}	
*/
		local{
          return myLocArr.this(i);
		}
  }
  
  
  //writeln(here.id, " -L locArr(dom.dist.targetLocsIdx(myGuest)).myResElems=", locArr(dom.dist.targetLocsIdx(myGuest)).myResElems);
	// }
  //                    //
  // case B:radopt      //
  //                    //
  if doRADOpt {
    if myLocArr {
  	if boundsChecking then
          if !dom.dsiMember(i) then
		halt("array index out of bounds: ", i);
		var rlocIdx = dom.dist.targetLocsIdx(i);
		if !disableBlockLazyRAD {
	          if myLocArr.locRAD == nil {
		    myLocArr.lockLocRAD();
		    if myLocArr.locRAD == nil {
			var tempLocRAD = new LocRADCache(eltType, rank, idxType, dom.dist.targetLocDom);
			tempLocRAD.RAD.blk = SENTINEL;
			myLocArr.locRAD = tempLocRAD;
		    }
		    myLocArr.unlockLocRAD();
	          }
		  // NOTE: This is a known, benign race.  Multiple tasks may be
		  // initializing the RAD cache entries at once, but our belief is
		  // that this is infrequent enough that the potential extra gets
	  	  // are worth *not* having to synchronize.  If this turns out to be
		  // an incorrect assumption, we can add an atomic variable and use
		  // a fetchAdd to decide which task does the update.
		  if myLocArr.locRAD.RAD(rlocIdx).blk == SENTINEL {
		    myLocArr.locRAD.RAD(rlocIdx) = locArr(rlocIdx).myElems._value.dsiGetRAD();
		  }
		}
		pragma "no copy" pragma "no auto destroy" var myLocRAD = myLocArr.locRAD;
		pragma "no copy" pragma "no auto destroy" var radata = myLocRAD.RAD;
		if radata(rlocIdx).shiftedData != nil {
		  var dataIdx = radata(rlocIdx).getDataIndex(myLocArr.stridable, i);
		  if(printAux) then
		 	writeln(here.id,": dsiAccess returnsB ", radata(rlocIdx).shiftedData(dataIdx));
			return radata(rlocIdx).shiftedData(dataIdx);
		}
  }
}
  //                      //
  // case c: remote       //
  //                      //
  //if debugDistPrinting then
  //if(printAux) then  
		//writeln(here.id,": dsiAccess returnsC ", locArr(dom.dist.targetLocsIdx(i))(i));
		var me = dom.dist.targetLocsIdx(i);
		//if(printAux) then  
			writeln( " ME = ", me, " i=", i);
		 var state = 0;
		 on Locales(me) do {
			 state = here.checkLocaleStatus();
			 if(state==1) then 
				if(printAux) then 
					writeln(" on Locale ", here.id, " STATUS is = ",here.checkLocaleStatus() );
		}
		var myBuddyB2 = _computeBuddyId2(me, numberofbuddies, 1, numLocales);
		
		if (state ==1)then { //need to redirect to buddy
			locArr(myBuddyB2).myParityBit=0; //&&&***
			if(printAux) then
				writeln(me, " :dsiAccess - redirecting to res elems of buddy ", myBuddyB2, " locArr(myGuest2)=",locArr(myBuddyB2)," PREV VAL =", locArr(myBuddyB2).myResElems);
			//locArr(myBuddyB2).adoptedLocales= 0;
			
			return locArr(myBuddyB2).myResElems(i);
		}else{ //regular value update on live locale
			/// tell my buddy for my update
			locArr(myBuddyB2).myParityBit=1;
			if(printAux) then 
				writeln(me, " :dsiAccess - returning new val to myElems on ", dom.dist.targetLocsIdx(i), " PREV VAL=", locArr(dom.dist.targetLocsIdx(i))(i));
			return locArr(dom.dist.targetLocsIdx(i))(i);
	   }			 
}

proc BlockArr.dsiAccess(i: idxType...rank) ref{
	//if debugDistPrinting then
		writeln(here.id, ": BlockArr.dsiAcccess (rank)-2 i=",i, " returns ", dsiAccess(i) );
	return dsiAccess(i);
}

iter BlockArr.these() ref {
	//if debugDistPrinting then
	writeln(here.id, " BlockArr.these ########################################### ");
	for i in dom do
		yield dsiAccess(i);
}

//
// TODO: Rewrite this to reuse more of the global domain iterator
// logic?  (e.g., can we forward the forall to the global domain
// somehow?
	var pendingRecovery =0;// as global var?
	var localWorkDone =0;
	var itercount=0;
	var prevRecoveryDom = 100;
	
	//
	var myR:int;
//	var adopted$: sync int = 0;//single bool; // barrier release
	//

iter BlockArr.these(param tag: iterKind) where tag == iterKind.leader {
	if(printAux){
		 writeln(here.id, " BlockArr.these LEADER #################### \n **** BlockArr.these LEADER ***Locales=",Locales," *** dom.dist.targetLocales size=",dom.dist.targetLocales.size, "\n -- MY PARITY BIT --", locArr(here.id).myParityBit );
		 writeln(here.id, " Leader : blockdom. whole = ", dom.whole, " #indices=", dom.whole.numIndices); 
   }
   /** the current locale (=0 ) is alive) */
  if(here.checkLocaleStatus()==0){ 
     	var localIndices = dom.locDoms(here.id).myBlock.numIndices;
     	
     	/** for loop over myElems - all locales */
     	
		for followThis in dom.these(tag) do{ //YIELDS THE WHOLE DOMAIN (0..0) - (3..3) from BLockDom.these
			var recovered: int; //recovered is a local var to each locale
			var recoveringLocale: int =1000;
			var counter =0 ;
			var mb = dom.locDoms(here.id).myBlock;
			//var locbloc = dom.locDoms(here.id).myBlock;
			//var locblocHigh = locbloc(1).high;
			//if(printAux) then
			writeln(here.id, " [[[[[[ myElems=", locArr[here.id].myElems, "  - myResElems=", locArr[here.id].myResElems ,"]]]]]");   //locArr[guest_idx].myResElems
			/** counting the iterations over all locales/all elems */
			itercount=itercount+1;
			if (printAux) then writeln ("L: ", here.id, "  itercount=", itercount, " followThis=", followThis);
			var myG = _computeGuestId(here.id, numberofbuddies, 1, numLocales);
			var myB = _computeBuddyId2(here.id, numberofbuddies, 1, numLocales);
			
			/** UPDATE PHASE */
			if (printAux) then 
			writeln( "L: ---UPDATE?--- ", here.id, " :: checking for updates on my myG=", myG, " adoptedLocales=",locArr(here.id).adoptedLocales , " --LOCAL PARITY BIT = ", locArr(here.id).myParityBit, " -- buddystatus =", here.checkBuddyLocaleStatus());
			if(locArr(here.id).myParityBit==1 && here.checkBuddyLocaleStatus()!=0 ){  //need to do recovery---
				if(locArr(here.id).adoptedLocales==myG) { //prev continued recovery
					//no update
					writeln("L: NOT UPDATING ",here.id, " on iter followThis =", followThis,"  NO UPDATE for myG=", myG, " myResElems=", locArr(here.id).myResElems);
					locArr(here.id).myParityBit=0;
					//adopted$ = followThis(1).low;
				}else{
					writeln("L: UPDATING ", here.id," on iter followThis =", followThis, "myResElems=", locArr(here.id).myResElems," from myG.myElems=", locArr(myG).myElems);
					locArr(here.id).myResElems = locArr(myG).myElems;
					locArr(here.id).myParityBit=0;	
				}
			}else{
				writeln("L: ", here.id, " did not UPDATE");
			}
			
			/** IS THIS NEEDED? */
         var myLocalTaskCounter :int =0;
         var localResBlockIndices: int =0; 
         var myTotalTasksHere: int = localIndices;
         if(here.checkBuddyLocaleStatus()!=0) {
				localResBlockIndices = dom.locDoms(here.id).myResBlock.numIndices;
				myTotalTasksHere+=  localResBlockIndices;
			}
         if (printAux) then writeln("================ TOTAL TASKS HERE ", here.id, " = ", myTotalTasksHere);
         
         
         /** the current locale  is alive) */
			if(here.checkLocaleStatus()==0){
				if (printAux) then 
				writeln("L: ", here.id, " yielding ", followThis, " of dom.these(tag)=", dom.these(tag));
            myLocalTaskCounter+=1;
            /** yield myElems value */
				yield followThis;
				
				if (printAux) then 
				writeln("L: ", here.id, "mb.high=", mb.high, " followThis=", followThis);
				/** DETECTION */
				if(mb.high == (followThis(1).high +1) && here.checkBuddyLocaleStatus()!=0) { 
					pendingRecovery = 1 ;
					//if it is not set, but what if locale 0 is 0
					if (recoveringLocale ==1000) then recoveringLocale = here.id; 
					counter = 0;
		
				}
	    
				/** check if local work is done */
				if(printAux) then
				writeln("L: ",here.id, " before LOCALWORKDONE itercount=", itercount, "(here.id+1)*localIndices=", (here.id+1)*localIndices, " here.checkLocaleStatus()=", here.checkLocaleStatus());
				if(itercount>=(here.id+1)*localIndices && here.checkLocaleStatus()==0){
					localWorkDone =1;
					//if (printAux) then writeln(here.id, "LOCALWORKDONE " , localWorkDone," itercount=", itercount );
				}
				
				/** RECOVERY PHASE*/
				if(printAux) then
				writeln("L: ",here.id, " BEFORE RECOVERY - here.checkBuddyLocaleStatus()=",here.checkBuddyLocaleStatus(), 
																		" recovered= ", recovered, 
																		" localWorkDone=", localWorkDone,
																		" itercount=", itercount, " recoveringLocale=", recoveringLocale);
				

				//RECOVERY
				//																									
				if(here.checkBuddyLocaleStatus()!=0 && recovered ==0 && localWorkDone ==1 && pendingRecovery ==1 && recoveringLocale == here.id){
					writeln(here.id, ": here 1");
					recovered=1; 		
					locArr(here.id).adoptedLocales= myG; 
					//recoveringLocale = here.id;
					writeln("L:",here.id, " RECOVERY---------on iter followThis =", followThis, " budyStatus=", here.checkBuddyLocaleStatus(), " recovered=", recovered, " localWorkDone =", localWorkDone, " recoveringLocale=", recoveringLocale, " myStatus=", here.checkLocaleStatus()," COUNTER=", counter ," localResBlockIndices=",localResBlockIndices);
        			for followThis2 in dom.theseR(tag) do{ //dom.theseR = myResBlock numindices= 4 -> 4 iterations over 2 elems (2x2)
						if(here.checkLocaleStatus()==0 && recoveringLocale == here.id && counter <= localResBlockIndices){//&& counter<= dom.locDoms(here.id).myResBlock.numIndices){ // && followThis2(1).first !=prevRecoveryDom ){
							counter+=1;
							if(printAux) then
								writeln("L: ", here.id, " followThis =", followThis, " followThis2=", followThis2, " COUNTER=", counter );   
							/** yielding value of myResElems */
							yield followThis2;
							prevRecoveryDom = followThis2(1).first;
						}
					}
					writeln(here.id, " finished recovery +++++++++++++++++++");		
					myLocalTaskCounter+= localResBlockIndices; 
				}	
				writeln(here.id, ":here 2");
				if(myLocalTaskCounter == myTotalTasksHere) then writeln(here.id," ======== done with my total tasks = ", myTotalTasksHere);            
			}//	if(here.checkLocaleStatus()==0){
		}// initial loop
	}else if(here.checkLocaleStatus()==1) then writeln("L: ",here.id, "I am dead - doing nothing ##########");
 }



//test
iter BlockArr.theseTest(param tag: iterKind) where tag == iterKind.leader {

	writeln(here.id, ": LEADER THESE TEST ####################################### ");

	for followThis2 in dom.theseR(tag) do{
		writeln("L (T):", here.id, ": yielding followThis2=", followThis2);
		yield followThis2;
	}
			writeln(here.id, ": LEADER THESE TEST DONE ############################# ");
}

proc BlockArr.dsiStaticFastFollowCheck(type leadType) param{
	if debugDistPrinting then
		writeln( "module:loc ",here.id, " BlockArr.dsiStaticFastFollowCheck 1");
	return leadType == this.type || leadType == this.dom.type;
}

proc BlockArr.dsiDynamicFastFollowCheck(lead: []){
	if debugDistPrinting then
		writeln( "module:loc ",here.id, " BlockArr.dsiStaticFastFollowCheck 2");
	return lead.domain._value == this.dom;
}

proc BlockArr.dsiDynamicFastFollowCheck(lead: domain){
	if debugDistPrinting then
		writeln( "module:loc ",here.id, " BlockArr.dsiStaticFastFollowCheck 3");
	return lead._value == this.dom;
}

extern proc SIGUSR1_handler(s: int);
extern var SIGUSR1 :int;
iter BlockArr.these(param tag: iterKind, followThis, param fast: bool = false) ref where tag == iterKind.follower {
	//(A)
	if (printAux) then
		writeln("F: ", here.id, " status check =", here.checkLocaleStatus());
   //writeln(here.id, " BlockArr.these FOLLOWER ########################################### ");
	if(here.checkLocaleStatus()==1) then writeln("F: ", here.id, " I am dead \n Shutting down...");
	else{
		if(here.checkBuddyLocaleStatus()!=0) then
			pendingRecovery =1;

	//do the regular stuff
	proc anyStridable(rangeTuple, param i: int = 1) param
			return if i == rangeTuple.size then rangeTuple(i).stridable else rangeTuple(i).stridable || anyStridable(rangeTuple, i+1);

	if chpl__testParFlag {
		if fast {//then
			chpl__testPar("Block array fast follower invoked on ", followThis);
		}else{
			chpl__testPar("Block array non-fast follower invoked on ", followThis);
		}
	}

	var myFollowThis: rank*range(idxType=idxType, stridable=stridable || anyStridable(followThis));
	var lowIdx: rank*idxType;

	for param i in 1..rank {
		var stride = dom.whole.dim(i).stride;
		// NOTE: Not bothering to check to see if these can fit into idxType
		var low = followThis(i).low * abs(stride):idxType;
		var high = followThis(i).high * abs(stride):idxType;
		myFollowThis(i) = (low..high by stride) + dom.whole.dim(i).low by followThis(i).stride;
		lowIdx(i) = myFollowThis(i).low;
		if(printAux) then
		  writeln("F: ", here.id, "\n FOLLOWER - followThis(i)=",followThis(i),"\n low = followThis(i).low * abs(stride)=", followThis(i).low * abs(stride), "\n high = followThis(i).high * abs(stride)=", followThis(i).high * abs(stride),"\n myFollowThis(i)=", myFollowThis(i),"\n i=",i, "\n lowIdx(i)=myFollowThis(i).low =", lowIdx(i));
	}
	if fast {

		// TODO: The following is a buggy hack that will only work when we're distributing across the entire Locales array.  I still think the
		// locArr/locDoms arrays should be associative over locale values.
		//
		var arrSection = locArr(dom.dist.targetLocsIdx(lowIdx));
		//var arrResSection = locArr(here.id).myResElems; 
		if(printAux) {
			writeln(here.id, ": --arrSection.numElems= ", arrSection.myElems.size, ": --arrResSection.numElems.size= ", arrSection.myResElems.size);
			writeln(here.id, ": --arrResSection.numElems= ", arrSection.myElems.size,"\n pendingRecovery=",pendingRecovery, "\n localWorkDone=",localWorkDone, "\n\n arrSection= ", arrSection, "\n\n arrResSection=", arrSection.myElems, "\n\n locArr(here.id).myResElems=", locArr(here.id).myResElems, "\n\n dom.locDoms(here.id).myResBlock=",  dom.locDoms(here.id).myResBlock, "\nlocArr(here.id).myParityBit",locArr(here.id).myParityBit  );
	         	//"\n recoveringLocale=",recoveringLocale,
	      writeln("**** ", here.id, " BLOCKARR.THESE FOLLOWER fast arrSection= ", arrSection, "\n arrSection.myElems= ", arrSection.myElems, " arrResSection=", arrSection.myResElems);
	        }
		var rr: bool;
		var dd = dom.locDoms(here.id).myBlock;
		var dd2 = dom.locDoms(here.id).myResBlock;
		/////////
		//for param j in 1..rank{
		//	var strider = dom.whole.dim(j).stride;
		//	writeln(here.id, "  --- strider = ",strider );
		//}
		
		// NOTE: Not bothering to check to see if these can fit into idxType
		//var lowr = followThis(i).low * abs(stride):idxType;
		//var highr = followThis(i).high * abs(stride):idxType;
		//myFollowThis(i) = (low..high by stride) + dom.whole.dim(i).low by followThis(i).stride;
		//lowIdx(i) = myFollowThis(i).low;
		/////////
		var mft= myFollowThis(1).low;
		var myGuest = _computeGuestId(here.id, numberofbuddies, 1, numLocales);
		if(printAux) then
		  writeln( here.id, "lowIdx=", lowIdx," my guest= ", myGuest ," MYRESELEMS = ", locArr(dom.dist.targetLocsIdx(lowIdx)).myResElems," myparitybit = ",locArr(here.id).myParityBit);
		
		//RECOVERY TASK
		if(dd2.member(mft)==true && pendingRecovery==1){
		  writeln("F: ", here.id, "-------RECOVERY------- myfollowtthis1.low=", mft," myfollowthis=", myFollowThis );
		  //if (printAux) then writeln(here.id, " mft=", mft, " dd2=", dd2, " here.checkLocaleStatus()=", here.checkLocaleStatus());
		  if(here.checkLocaleStatus()==0){	
		    if arrSection.locale.id != here.id then
			arrSection = myLocArr;
			if(printAux) then
				writeln( "F: ", here.id, " arrResSection=",arrSection.myResElems, " myResBlock.numIndices=", dom.locDoms(here.id).myResBlock.numIndices);
		   for re in arrSection.myResElems((...myFollowThis)) do{
				if(printAux) then 
					writeln("F: ", here.id, " iterating over myResblock=",dd2 , " with arrSection.myResElems(myFollowThis)=", arrSection.myResElems(myFollowThis(1).low), " and re=", re);
				yield re;
		   }
		    pendingRecovery=0;   //locArr(here.id).myParityBit=1;
		 }
		// if(printAux) then  
		 writeln("&&&&& F: ", here.id, " arrResSection=",arrSection.myResElems );
		//REGULAR TASK		
		}else if(dd.member(mft)==true){// && pendingRecovery==0) {
			if (printAux) {
				writeln("**** ", here.id, " BLOCKARR.THESE FOLLOWER (fast) arrSection= ", arrSection.myElems, " arrResSection=", arrSection.myResElems);
				writeln(here.id, " mft=", mft, " dd=", dd);
			}
                	writeln(here.id, "--------REGULAR---------myFollowThis=",myFollowThis);
                        
			if arrSection.locale.id != here.id then
				arrSection = myLocArr;
			
			//var arrResSection = locArr(here.id).myResElems;
			//local {
			for e in arrSection.myElems((...myFollowThis)) do{
				//if(printAux) then
					writeln("F: ", here.id, " iterating over myElems \n");
				yield e;
			}
			locArr(here.id).myParityBit=1; //set for regular tasks only
		}
		locArr(here.id).myParityBit=1; // set always??
	} else {
		// we don't necessarily own all the elements we're following
		// does this mean I can loop over myResElems? try this f fast -> if false
		proc accessHelper(i) ref {
			if myLocArr then local {
				if myLocArr.locDom.member(i) then
					return myLocArr.this(i);
				}
			return dsiAccess(i);
		}
		const myFollowThisDom = {(...myFollowThis)};
		for i in myFollowThisDom {
			yield accessHelper(i);
		}
	}
	} //here not dead end
}

//test
iter BlockArr.theseTest(param tag: iterKind, followThis2, param fast: bool = false) ref where tag == iterKind.follower {

	 var myFollowThis: rank*range(idxType=idxType, stridable=stridable || anyStridable(followThis2));
	 var lowIdx: rank*idxType;
		writeln(here.id, ": FOLLOWER THESE TEST ####################################### ");

		for param i in 1..rank {
		var stride = dom.whole.dim(i).stride;
		// NOTE: Not bothering to check to see if these can fit into idxType
		var low = followThis2(i).low * abs(stride):idxType;
		var high = followThis2(i).high * abs(stride):idxType;
		myFollowThis(i) = (low..high by stride) + dom.whole.dim(i).low by followThis2(i).stride;
		lowIdx(i) = myFollowThis(i).low;
		}
	var arrResSection = locArr(here.id).myResElems;
	for re in arrResSection((...myFollowThis)) do{
			writeln("F (T): ", here.id, " yielding re=", re);
			yield re;
	}
	writeln(here.id, ": FOLLOWER THESE TEST DONE ################################## ");


}

//
// output array
//

//calls dsiAccess
proc BlockArr.dsiSerialWrite(f: Writer) {
	type strType = chpl__signedType(idxType);
	var binary = f.binary();

	if dom.dsiNumIndices == 0 then return;
	var i : rank*idxType;
	if debugDistPrinting then
		writeln( "module:loc ",here.id, " BlockArr.dsiSerialWrite\n");
	for dim in 1..rank do
		i(dim) = dom.dsiDim(dim).low;
	label next while true {
		f.write(dsiAccess(i));
		if i(rank) <= (dom.dsiDim(rank).high - dom.dsiDim(rank).stride:strType) {
			if ! binary then f.write(" ");
			i(rank) += dom.dsiDim(rank).stride:strType;
		} else {
			for dim in 1..rank-1 by -1 {
				if i(dim) <= (dom.dsiDim(dim).high - dom.dsiDim(dim).stride:strType) {
					i(dim) += dom.dsiDim(dim).stride:strType;
					for dim2 in dim+1..rank {
						f.writeln();
						i(dim2) = dom.dsiDim(dim2).low;
					}
					continue next;
				}
			}
			break;
		}
	}
}

proc BlockArr.dsiSlice(d: BlockDom) {
	var alias = new BlockArr(eltType=eltType, rank=rank, idxType=idxType, stridable=d.stridable, dom=d);
	var thisid = this.locale.id;
	if debugDistPrinting then
		writeln( "module:loc ",here.id, " BlockArr.dsiSliced \n");
	coforall i in d.dist.targetLocDom {
		on d.dist.targetLocales(i) {
			alias.locArr[i] = new LocBlockArr(eltType=eltType, rank=rank, idxType=idxType, stridable=d.stridable, locDom=d.locDoms[i], myElems=>locArr[i].myElems[d.locDoms[i].myBlock]);
			if thisid == here.id then
				alias.myLocArr = alias.locArr[i];
		}
	}
	if doRADOpt then alias.setupRADOpt();
	return alias;
}

proc BlockArr.dsiLocalSlice(ranges) {
	var low: rank*idxType;
	if debugDistPrinting then
		writeln( "module:loc ",here.id, " BlockArr.dsiLocalSlice \n");
	for param i in 1..rank {
		low(i) = ranges(i).low;
	}
	var A => locArr(dom.dist.targetLocsIdx(low)).myElems((...ranges));
	return A;
}

proc _extendTuple(type t, idx: _tuple, args) {
	var tup: args.size*t;
	var j: int = 1;
	if debugDistPrinting then
		writeln( "module:loc ",here.id, " _extendTuple \n");
	for param i in 1..args.size {
		if isCollapsedDimension(args(i)) then
			tup(i) = args(i);
		else {
			tup(i) = idx(j);
			j += 1;
		}
	}
	return tup;
}

proc _extendTuple(type t, idx, args) {
	var tup: args.size*t;
	var idxTup = (idx,);
	var j: int = 1;
	 if debugDistPrinting then
		writeln("module:loc ", here.id, " _extendTuple 2 \n");

	for param i in 1..args.size {
		if isCollapsedDimension(args(i)) then
			tup(i) = args(i);
		else {
			tup(i) = idxTup(j);
			j += 1;
		}
	}
	return tup;
}


proc BlockArr.dsiRankChange(d, param newRank: int, param stridable: bool, args) {
	var alias = new BlockArr(eltType=eltType, rank=newRank, idxType=idxType, stridable=stridable, dom=d);
	var thisid = this.locale.id;
	 if debugDistPrinting then
		writeln("module:loc ", here.id, " proc BlockArr.dsiRankChange\n");
	coforall ind in d.dist.targetLocDom {
		on d.dist.targetLocales(ind) {
			const locDom = d.getLocDom(ind);
			// locSlice is a tuple of ranges and scalars. It will match the basic
			// shape of the args argument.
			var locSlice: _matchArgsShape(range(idxType=idxType, stridable=stridable), idxType, args);
			// collapsedDims stores the value any collapsed dimension is down to.
			// For any non-collapsed dimension, that position is ignored.
			// This tuple is then passed to the targetLocsIdx function to build up a
			// partial index into this.targetLocDom with correct values set for all
			// collapsed dimensions. The rest of the dimensions get their values from
			// ind - an index into the new rank changed targetLocDom.
			var collapsedDims: rank*idxType;
			var locArrInd: rank*int;

			var j = 1;
			for param i in 1..args.size {
				if isCollapsedDimension(args(i)) {
					locSlice(i) = args(i);
					collapsedDims(i) = args(i);
				} else {
					locSlice(i) = locDom.myBlock.dim(j)(args(i));
					j += 1;
				}
			}
			locArrInd = dom.dist.targetLocsIdx(collapsedDims);
			j = 1;
			// Now that the locArrInd values are known for the collapsed dimensions
			// Pull the rest of the dimensions values from ind
			for param i in 1..args.size {
				if !isCollapsedDimension(args(i)) {
					if newRank > 1 then
						locArrInd(i) = ind(j);
					else
						locArrInd(i) = ind;
					j += 1;
				}
			}

			alias.locArr[ind] =
				new LocBlockArr(eltType=eltType, rank=newRank, idxType=d.idxType,
												stridable=d.stridable, locDom=locDom,
												myElems=>locArr[(...locArrInd)].myElems[(...locSlice)]);

			if thisid == here.id then
				alias.myLocArr = alias.locArr[ind];
		}
	}
	if doRADOpt then alias.setupRADOpt();
	return alias;
}

proc BlockArr.dsiReindex(d: BlockDom) {
	var alias = new BlockArr(eltType=eltType, rank=d.rank, idxType=d.idxType,
													 stridable=d.stridable, dom=d);
	const sameDom = d==dom;

	var thisid = this.locale.id;
	 if debugDistPrinting then
		writeln( "module:loc ",here.id, " proc BlockArr.dsiReindex\n");

	coforall i in d.dist.targetLocDom {
		on d.dist.targetLocales(i) {
			const locDom = d.getLocDom(i);
			var locAlias: [locDom.myBlock] => locArr[i].myElems;
			alias.locArr[i] = new LocBlockArr(eltType=eltType,
																				rank=rank, idxType=d.idxType,
																				stridable=d.stridable,
																				locDom=locDom,
																				myElems=>locAlias);
			if thisid == here.id then
				alias.myLocArr = alias.locArr[i];
			if doRADOpt {
				if sameDom {
					// If we the reindex domain is the same as that of this array,
					//  the RAD cache will be the same you can just copy the values
					//  directly into the alias's RAD cache
					if locArr[i].locRAD {
						alias.locArr[i].locRAD = new LocRADCache(eltType, rank, idxType,
																										 dom.dist.targetLocDom);
						alias.locArr[i].locRAD.RAD = locArr[i].locRAD.RAD;
					}
				}
			}
		}
	}

	if doRADOpt then
		if !sameDom then alias.setupRADOpt();

	return alias;
}

proc BlockArr.dsiReallocate(d: domain) {
	//
	// For the default rectangular array, this function changes the data
	// vector in the array class so that it is setup once the default
	// rectangular domain is changed.  For this distributed array class,
	// we don't need to do anything, because changing the domain will
	// change the domain in the local array class which will change the
	// data in the local array class.  This will only work if the domain
	// we are reallocating to has the same distribution, but domain
	// assignment is defined so that only the indices are transferred.
	// The distribution remains unchanged.
	//

	 if debugDistPrinting then
		writeln("module:loc ", here.id, " proc BlockArr.dsiReallocate\n");
}

proc BlockArr.dsiPostReallocate() {
	// Call this *after* the domain has been reallocated
	 if debugDistPrinting then
		writeln( "module:loc ",here.id, " proc BlockArr.dsiPostReallocate\n");
	if doRADOpt then setupRADOpt();
}

proc BlockArr.setRADOpt(val=true) {
	doRADOpt = val;
	 if debugDistPrinting then
		writeln( "module:loc ",here.id, " proc BlockArr.setRADOpt\n");
	if doRADOpt then setupRADOpt();
}

//
// the accessor for the local array -- assumes the index is local
//
proc LocBlockArr.this(i) ref {
	if (printAux) then
	writeln("module:", here.id, ": LocBlockArr.this i=",i," myElems(i)=", myElems(i));//," myResElems(i)=", myResElems(i));
	//writeln("LocBlockArr.this --- locArr(dom.dist.targetLocsIdx(i))(i)=", locArr(dom.dist.targetLocsIdx(i))(i), " with i = ", i);
	return myElems(i);

	//should also return my res elems here
}


  


//
// Privatization
//
proc Block.Block(other: Block, privateData,
								param rank = other.rank,
								type idxType = other.idxType) {
	boundingBox = {(...privateData(1))};
	targetLocDom = {(...privateData(2))};
	dataParTasksPerLocale = privateData(3);
	dataParIgnoreRunningTasks = privateData(4);
	dataParMinGranularity = privateData(5);

	 if debugDistPrinting then
		writeln( "module:loc ",here.id, " proc Block.Block (privatization)\n");
	for i in targetLocDom {
		targetLocales(i) = other.targetLocales(i);
		locDist(i) = other.locDist(i);
	}
}

proc Block.dsiSupportsPrivatization() param return true;

proc Block.dsiGetPrivatizeData() {
	 if debugDistPrinting then
		writeln( "module:loc ",here.id, " proc Block.dsiGetPrivatizedData (privatization)\n");
	return (boundingBox.dims(), targetLocDom.dims(),
					dataParTasksPerLocale, dataParIgnoreRunningTasks, dataParMinGranularity);
}

proc Block.dsiPrivatize(privatizeData) {
	 if debugDistPrinting then
		writeln( "loc ",here.id, " proc Block.dsiPrivatize (privatization)\n");
	return new Block(this, privatizeData);
}

proc Block.dsiGetReprivatizeData() return boundingBox.dims();

proc Block.dsiReprivatize(other, reprivatizeData) {
	boundingBox = {(...reprivatizeData)};
	targetLocDom = other.targetLocDom;
	targetLocales = other.targetLocales;
	locDist = other.locDist;
	dataParTasksPerLocale = other.dataParTasksPerLocale;
	dataParIgnoreRunningTasks = other.dataParIgnoreRunningTasks;
	dataParMinGranularity = other.dataParMinGranularity;
	 if debugDistPrinting then
		writeln( "module:loc ",here.id, " proc Block.dsiReprivatize (privatization)\n");
}

proc BlockDom.dsiSupportsPrivatization() param return true;

proc BlockDom.dsiGetPrivatizeData() return (dist.pid, whole.dims());

proc BlockDom.dsiPrivatize(privatizeData) {
	var privdist = chpl_getPrivatizedCopy(dist.type, privatizeData(1));
	var c = new BlockDom(rank=rank, idxType=idxType, stridable=stridable, dist=privdist);
	 if debugDistPrinting then
		writeln( "module:loc ",here.id, " proc BlockDom.dsiPrivatize (privatization)\n");
	for i in c.dist.targetLocDom do
		c.locDoms(i) = locDoms(i);
	c.whole = {(...privatizeData(2))};
	return c;
}

proc BlockDom.dsiGetReprivatizeData() return whole.dims();

proc BlockDom.dsiReprivatize(other, reprivatizeData) {
	 if debugDistPrinting then
		writeln( "module:loc ",here.id, " proc BlockDom.dsiReReprivatize (other - privatization)\n");
	for i in dist.targetLocDom do
		locDoms(i) = other.locDoms(i);
	whole = {(...reprivatizeData)};
}

proc BlockArr.dsiSupportsPrivatization() param {
	writeln(here.id, " BlockArr.dsiSupportsPrivatization()");
	return true;
}

proc BlockArr.dsiGetPrivatizeData(){
	if debugDistPrinting then
		writeln(here.id, ": BlockArr.dsiGetPrivatizeData()");
	return dom.pid;
}

proc BlockArr.dsiPrivatize(privatizeData) {
	var privdom = chpl_getPrivatizedCopy(dom.type, privatizeData);
	var c = new BlockArr(eltType=eltType, rank=rank, idxType=idxType, stridable=stridable, dom=privdom);
	if debugDistPrinting then
		writeln( "loc ",here.id, " proc BlockArr.dsiPrivatize (privatization) loop over.. \n");
	for localeIdx in c.dom.dist.targetLocDom {
		//writeln(localeIdx, "....");
		c.locArr(localeIdx) = locArr(localeIdx);
		if c.locArr(localeIdx).locale.id == here.id then{
			if debugDistPrinting then
				writeln( "BlockArr.dsiPrivatize: copy c.locArr(localeIdx)=", c.locArr(localeIdx), " in  c.myLocArr=",  c.myLocArr);
			c.myLocArr = c.locArr(localeIdx);
		}
	}
	return c;
}

proc BlockArr.dsiSupportsBulkTransfer() param return true;
proc BlockArr.dsiSupportsBulkTransferInterface() param return true;

proc BlockArr.doiCanBulkTransfer() {
	//if debugDistPrinting then
		//writeln( "loc ",here.id, " proc BlockArr.doiCanBulkTransfer\n");
	//if debugBlockDistBulkTransfer then
		writeln("module:In BlockArr.doiCanBulkTransfer");

	if dom.stridable then
		for param i in 1..rank do
			if dom.whole.dim(i).stride != 1 then return false;

	// See above note regarding aliased arrays
	if disableAliasedBulkTransfer then
		if _arrAlias != nil then return false;

	return true;
}

proc BlockArr.doiCanBulkTransferStride() param {
	writeln( "module:loc ",here.id, " proc BlockArr.doiCanBulkTransferStride() param\n");
	//if debugBlockDistBulkTransfer then
		writeln("module:In BlockArr.doiCanBulkTransferStride");

	// A BlockArr is a bunch of DefaultRectangular arrays,
	// so strided bulk transfer gotta be always possible.
	return true;
}

proc BlockArr.doiBulkTransfer(B) {
	//writeln( "loc ",here.id, " proc BlockArr.doiBulkTransfer(B)\n");
	//if debugBlockDistBulkTransfer then
		writeln("module:In BlockArr.doiBulkTransfer");

	if debugBlockDistBulkTransfer then resetCommDiagnostics();
	var sameDomain: bool;
	// We need to do the following on the locale where 'this' was allocated,
	//  but hopefully, most of the time we are initiating the transfer
	//  from the same locale (local on clauses are optimized out).
	on this do sameDomain = dom==B._value.dom;
	// Use zippered iteration to piggyback data movement with the remote
	//  fork.  This avoids remote gets for each access to locArr[i] and
	//  B._value.locArr[i]
	coforall (i, myLocArr, BmyLocArr) in zip(dom.dist.targetLocDom,
																				locArr,
																				B._value.locArr) do
		on dom.dist.targetLocales(i) {

		if sameDomain &&
			chpl__useBulkTransfer(myLocArr.myElems, BmyLocArr.myElems) {
			// Take advantage of DefaultRectangular bulk transfer
			if debugBlockDistBulkTransfer then startCommDiagnosticsHere();
			local {
				myLocArr.myElems._value.doiBulkTransfer(BmyLocArr.myElems);
			}
			if debugBlockDistBulkTransfer then stopCommDiagnosticsHere();
		} else {
			if debugBlockDistBulkTransfer then startCommDiagnosticsHere();
			if (rank==1) {
				var lo=dom.locDoms[i].myBlock.low;
				const start=lo;
				//use divCeilPos(i,j) to know the limits
				//but i and j have to be positive.
				for (rid, rlo, size) in ConsecutiveChunks(dom,B._value.dom,i,start) {
					if debugBlockDistBulkTransfer then writeln("Local Locale id=",i,
																						"; Remote locale id=", rid,
																						"; size=", size,
																						"; lo=", lo,
																						"; rlo=", rlo
																						);
					// NOTE: This does not work with --heterogeneous, but heterogeneous
					// compilation does not work right now.  This call should be changed
					// once that is fixed.
					var dest = myLocArr.myElems._value.theData;
					const src = B._value.locArr[rid].myElems._value.theData;
					__primitive("chpl_comm_get",
											__primitive("array_get", dest,
																	myLocArr.myElems._value.getDataIndex(lo)),
											rid,
											__primitive("array_get", src,
																	B._value.locArr[rid].myElems._value.getDataIndex(rlo)),
											size);
					lo+=size;
				}
			} else {
				var orig=dom.locDoms[i].myBlock.low(dom.rank);
				for coord in dropDims(dom.locDoms[i].myBlock, dom.locDoms[i].myBlock.rank) {
					var lo=if rank==2 then (coord,orig) else ((...coord), orig);
					const start=lo;
					for (rid, rlo, size) in ConsecutiveChunksD(dom,B._value.dom,i,start) {
						if debugBlockDistBulkTransfer then writeln("Local Locale id=",i,
																				"; Remote locale id=", rid,
																				"; size=", size,
																				"; lo=", lo,
																				"; rlo=", rlo
																				);
					var dest = myLocArr.myElems._value.theData;
					const src = B._value.locArr[rid].myElems._value.theData;
					__primitive("chpl_comm_get",
											__primitive("array_get", dest,
																	myLocArr.myElems._value.getDataIndex(lo)),
											dom.dist.targetLocales(rid).id,
											__primitive("array_get", src,
																	B._value.locArr[rid].myElems._value.getDataIndex(rlo)),
											size);
						lo(rank)+=size;
					}
				}
			}
			if debugBlockDistBulkTransfer then stopCommDiagnosticsHere();
		}
	}
	if (printAux) then
	writeln(here.id, " : Calling updateBuddies ");
	updateBuddies();

	if (printAux) then
	for tli in dom.dist.targetLocDom {
		writeln(here.id, " locArr[", tli, "].myElems = ", for e in locArr[tli].myElems do e, " locArr[", tli, "].myResElems = ", for e in locArr[tli].myResElems do e);
	}

	if debugBlockDistBulkTransfer then writeln("Comms:",getCommDiagnostics());
}

proc BlockArr.dsiTargetLocales() {
		if debugDistPrinting then
		writeln( "module:loc ",here.id, " proc BlockArr.dsiTargetLocales returns dom.dist.targetLocales \n");
	return dom.dist.targetLocales;
}

// Block subdomains are continuous

proc BlockArr.dsiHasSingleLocalSubdomain() param return true;

// returns the current locale's subdomain

proc BlockArr.dsiLocalSubdomain() {
		//if debugDistPrinting then
		writeln( "module:loc ",here.id, " proc BlockArr.dsiLocalSubdomain\n");
	return myLocArr.locDom.myBlock;
}

iter ConsecutiveChunks(d1,d2,lid,lo) {
	var elemsToGet = d1.locDoms[lid].myBlock.numIndices;
	const offset   = d2.whole.low - d1.whole.low;
	var rlo=lo+offset;
	var rid  = d2.dist.targetLocsIdx(rlo);
		if debugDistPrinting then
		writeln( "module:loc ",here.id, " iter ConsecutiveChunks\n");
	while (elemsToGet>0) {
		const size = min(d2.numRemoteElems(rlo,rid),elemsToGet):int;
		yield (rid,rlo,size);
		rid +=1;
		rlo += size;
		elemsToGet -= size;
	}
}

iter ConsecutiveChunksD(d1,d2,i,lo) {
	const rank=d1.rank;
	var elemsToGet = d1.locDoms[i].myBlock.dim(rank).length;
	const offset   = d2.whole.low - d1.whole.low;
	var rlo = lo+offset;
	var rid = d2.dist.targetLocsIdx(rlo);
	if debugDistPrinting then
		writeln( "module:loc ",here.id, " iter ConsecutiveChunksD\n");
	while (elemsToGet>0) {
		const size = min(d2.numRemoteElems(rlo(rank):int,rid(rank):int),elemsToGet);
		yield (rid,rlo,size);
		rid(rank) +=1;
		rlo(rank) += size;
		elemsToGet -= size;
	}
}

proc BlockDom.numRemoteElems(rlo,rid){
	// NOTE: Not bothering to check to see if rid+1, length, or rlo-1 used
	//  below can fit into idxType
	var blo,bhi:dist.idxType;
	 if debugDistPrinting then
		writeln( "module:loc ",here.id, " proc BlockDom.numremoteElems\n");
	if rid==(dist.targetLocDom.dim(rank).length - 1) then
		bhi=whole.dim(rank).high;
	else
			bhi=dist.boundingBox.dim(rank).low +
				intCeilXDivByY((dist.boundingBox.dim(rank).high - dist.boundingBox.dim(rank).low +1)*(rid+1):idxType,
											 dist.targetLocDom.dim(rank).length:idxType) - 1:idxType;

	return(bhi - (rlo - 1):idxType);
}

//Brad's utility function. It drops from Domain D the dimensions
//indicated by the subsequent parameters dims.
proc dropDims(D: domain, dims...) {
	var r = D.dims();
	var r2: (D.rank-dims.size)*r(1).type;
	var j = 1;
	writeln(here.id, " dropDims");
	for i in 1..D.rank do
		for k in 1..dims.size do
			if dims(k) != i {
				r2(j) = r(i);
				j+=1;
			}
	var DResult = {(...r2)};
	return DResult;
}

//For assignments of the form: "any = Block"
//Currently not used, instead we use: doiBulkTransferFrom()
proc BlockArr.doiBulkTransferTo(Barg)
{
	if debugBlockDistBulkTransfer then
		writeln("module:In BlockArr.doiBulkTransferTo(Barg)");

	const B = this, A = Barg._value;
	type el = B.idxType;
	coforall i in B.dom.dist.targetLocDom do // for all locales
		on B.dom.dist.targetLocales(i)
			{
				var regionB = B.dom.locDoms(i).myBlock;
				if regionB.numIndices>0
				{
					const ini=bulkCommConvertCoordinate(regionB.first, B, A);
					const end=bulkCommConvertCoordinate(regionB.last, B, A);
					const sa=chpl__tuplify(A.dom.locDoms(i).myBlock.stride);

					var r1,r2: rank * range(idxType = el,stridable = true);
					r2=regionB.dims();
					 //In the case that the number of elements in dimension t for r1 and r2
					 //were different, we need to calculate the correct stride in r1
					for param t in 1..rank{
						r1[t] = (ini[t]:el..end[t]:el by sa[t]:el);
						if r1[t].length != r2[t].length then
							r1[t] = (ini[t]:el..end[t]:el by (end[t] - ini[t]):el/(r2[t].length-1));
					}

					if debugBlockDistBulkTransfer then
						writeln("module: A",(...r1),".FromDR",regionB);

					Barg[(...r1)]._value.doiBulkTransferFromDR(B.locArr[i].myElems);
				}
			}
}

//For assignments of the form: "Block = any"
//where "any" means any array that implements the bulk transfer interface
proc BlockArr.doiBulkTransferFrom(Barg)
{
	if debugBlockDistBulkTransfer then
		writeln("module:In BlockArr.doiBulkTransferFrom()");

	const A = this, B = Barg._value;
	type el = A.idxType;
	coforall i in A.dom.dist.targetLocDom do // for all locales
		on A.dom.dist.targetLocales(i)
		{
			var regionA = A.dom.locDoms(i).myBlock;
			if regionA.numIndices>0
			{
				const ini=bulkCommConvertCoordinate(regionA.first, A, B);
				const end=bulkCommConvertCoordinate(regionA.last, A, B);
				const sb=chpl__tuplify(B.dom.locDoms(i).myBlock.stride);

				var r1,r2: rank * range(idxType = el,stridable = true);
				r2=regionA.dims();
				 //In the case that the number of elements in dimension t for r1 and r2
				 //were different, we need to calculate the correct stride in r1
				for param t in 1..rank{
						r1[t] = (ini[t]:el..end[t]:el by sb[t]:el);
						if r1[t].length != r2[t].length then
							r1[t] = (ini[t]:el..end[t]:el by (end[t] - ini[t]):el/(r2[t].length-1));
				}

				if debugBlockDistBulkTransfer then
						writeln("module:B{",(...r1),"}.ToDR",regionA);

				Barg[(...r1)]._value.doiBulkTransferToDR(A.locArr[i].myElems[regionA]);
			}
		}
}

//For assignments of the form: DR = Block
//(default rectangular array = block distributed array)
proc BlockArr.doiBulkTransferToDR(Barg)
{
	if debugBlockDistBulkTransfer then
		writeln("module:In BlockArr.doiBulkTransferToDR()");

	const A = this, B = Barg._value; //Always it is a DR
	type el = A.idxType;
	coforall j in A.dom.dist.targetLocDom do
		on A.dom.dist.targetLocales(j)
		{
			const inters=A.dom.locDoms(j).myBlock;
			if(inters.numIndices>0)
			{
				const ini=bulkCommConvertCoordinate(inters.first, A, B);
				const end=bulkCommConvertCoordinate(inters.last, A, B);
				const sa = chpl__tuplify(B.dom.dsiStride);

				var r1,r2: rank * range(idxType = el,stridable = true);
				for param t in 1..rank
				{
					r2[t] = (chpl__tuplify(inters.first)[t]
									 ..chpl__tuplify(inters.last)[t]
									 by chpl__tuplify(inters.stride)[t]);
					r1[t] = (ini[t]:el..end[t]:el by sa[t]:el);
				}

				if debugBlockDistBulkTransfer then
					writeln("module:A[",r1,"] = B[",r2,"]");

				const d ={(...r1)};
				const slice = B.dsiSlice(d._value);
				//Necessary to calculate the value of blk variable in DR
				//with the new domain r1
				slice.adjustBlkOffStrForNewDomain(d._value, slice);

				slice.doiBulkTransferStride(A.locArr[j].myElems[(...r2)]._value);

				delete slice;
			}
		}
}

//For assignments of the form: Block = DR
//(block distributed array = default rectangular)
proc BlockArr.doiBulkTransferFromDR(Barg)
{
	if debugBlockDistBulkTransfer then
		writeln("module:In BlockArr.doiBulkTransferFromDR");

	const A = this, B = Barg._value;
	type el = A.idxType;
	coforall j in A.dom.dist.targetLocDom do
		on A.dom.dist.targetLocales(j)
		{
			const inters=A.dom.locDoms(j).myBlock;
			if(inters.numIndices>0)
			{
				const ini=bulkCommConvertCoordinate(inters.first, A, B);
				const end=bulkCommConvertCoordinate(inters.last, A, B);
				const sb = chpl__tuplify(B.dom.dsiStride);

				var r1,r2: rank * range(idxType = el,stridable = true);
				for param t in 1..rank
				{
					r2[t] = (chpl__tuplify(inters.first)[t]
									 ..chpl__tuplify(inters.last)[t]
									 by chpl__tuplify(inters.stride)[t]);
					r1[t] = (ini[t]:el..end[t]:el by sb[t]:el);
				}

				if debugBlockDistBulkTransfer then
					writeln("module:A[",r2,"] = B[",r1,"]");

				const d ={(...r1)};
				const slice = B.dsiSlice(d._value);
				//this step it's necessary to calculate the value of blk variable in DR
				//with the new domain r1
				slice.adjustBlkOffStrForNewDomain(d._value, slice);

				A.locArr[j].myElems[(...r2)]._value.doiBulkTransferStride(slice);
				delete slice;
			}
		}
}
