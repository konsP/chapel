/**
 * Side effect study
 */
use BlockDist, CyclicDist, BlockCycDist, ReplicatedDist;
use DimensionalDist2D, ReplicatedDim, BlockCycDim;
 
 /** ARRAYS **/
writeln("######################################### ARRAYS \n");
/*

var domain1dim = {1..10};
var domain2dim = {1..10, 1..10};

writeln( "domain1dim\n", domain1dim);
writeln( "domain2dim\n", domain2dim);

// Array are similar to those of other languages.
// Their sizes are defined using domains that represent their indices
var myArray: [domain1dim] int;
var myArray2: [domain2dim] int; //equivalent

// Accessed using bracket notation
for i in domain1dim do
  myArray[i] = -i;
  
for i in domain2dim.dim(1) do
	for j in domain2dim.dim(2) do
  	myArray2[i, j] = i+j;
 
writeln( "myArray\n", myArray );
writeln( "myArray2\n", myArray2 );



// Can also iterate over the values of an array
var rSum: int = 0;
for value in myArray2 {
  rSum += value; // Read a value
  value = rSum;  // Write a value
}
writeln( "sum is ", rSum, "\n array \n", myArray2 );
*/
 /** DISTRIBUTIONS **/
 writeln("######################################### DISTRIBUTIONS \n");
 
config const n = 4;

const Space = {1..n, 1..n};
const BlockSpace = Space dmapped Block(boundingBox=Space);
var BA: [BlockSpace] int;

forall ba in BA do
  ba = here.id;
  
   
 /** with locale view**/

var MyLocaleView = {0..#numLocales, 1..1};
//var MyLocaleView = {0..#numLocales, 0..#numLocales};
var MyLocales: [MyLocaleView] locale = reshape(Locales, MyLocaleView);

const BlockSpace2 = Space dmapped Block(boundingBox=Space,
                                        targetLocales=MyLocales);
var BA2: [BlockSpace2] int;

forall ba in BA2 do
  ba = here.id;

writeln("Block Array Index Map");
writeln(BA2);
writeln();


forall ba in BA2 do{
		if(here.id ==0){
			ba = 5;
		}
} 
writeln(BA2);
writeln();

writeln("######\n");


/*ba is accessed by here.id locale
 * in the initial configuration 
 * this has no effect
 * 
 * after the rev loop is only affects 
 * the part of locale 0 (was set to 5)
 */
forall ba in BA2 do{
		writeln("access ", here.id,"\n");
		if(ba!=here.id){
			ba = here.id;
			
		}
} 

writeln(BA2);
writeln();
	
					
writeln("######################################### VARIABLES \n");
				
var x, y : int;
x = 2;
y = 3;

on Locales(1){
	var z : int;
	z = x+y;													//2 remote read, 1 local write
	writeln("z=",z," on ", here.id);

	x = 10;														//write global var
	
	on Locales(0) do{
		z -=1;  														//remote write  
	  writeln("z=",z," on ", here.id);
	}
	on x do{
		z -=1 ;														//remote write
		writeln("z=",z," on ", here.id);
	}	
	on z do{
		z -=1 ;												 //local read
		writeln("z=",z," on ", here.id);
	}
	
	writeln("last :\n z=",z, " and x=",x, " on ", here.id);		//local read
	

}	



