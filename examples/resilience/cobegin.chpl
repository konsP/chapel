/*cobegin*/
use Time, Random;

proc main() {
	var total = new Timer();
	total.start();

	var t2 = new Timer();
	t2.start();
	while(t2.elapsed() <20){}	
	t2.stop();
	writeln("PROGRAM_OUTPUT: ======  GO GO ");
	

	cobegin{
		on Locales[1] do 
			foo(1);
		on Locales[2] do 
			foo(2);	
	}

	total.stop();
	writeln("PROGRAM_OUTPUT: ======  Time elapsed: ",  total.elapsed());
}
	
proc foo(n){
	writeln("arg= ", n, "----------on locale ", here.id);
}

proc monteCarlo(){
	const      n = 100000000, 				// number of random points to try
	seed = 589494289; 					// seed for random number generator
	//writeln(seed);
	var rs = new RandomStream(seed, parSafe=false);
	var count = 0;

	for i in 1..n do
		if (rs.getNext()**2 + rs.getNext()**2) <= 1.0 then
			count += 1;
	writeln("count", count);
	writeln("pi = ",  count*4.0/n , " ----------on locale ", here.id);
	delete rs;
}
