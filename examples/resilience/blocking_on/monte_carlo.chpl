/* monte_carlo.chpl*/
use Time;
use Random;

config const n = 100000000, 				// number of random points to try
seed = 589494289; 					// seed for random number generator

//writeln("Number of points = ", n);
//writeln("Random number seed = ", seed);

proc main(){

writeln(" Warming up.. ");
	mc();
}
proc mc(){

	var rs = new RandomStream(seed, parSafe=false);
	var count = 0;
	for i in 1..n do
		if (rs.getNext()**2 + rs.getNext()**2) <= 1.0 then
			count += 1;
	writeln(" pi = ", format("#.#######", count * 4.0 / n), " ----------on locale ", here.id);

	delete rs;
}


