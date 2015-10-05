/*simpleontest*/
use Time, Random;

proc main() {
	var t = new Timer();
	t.start();
	while(t.elapsed() < 10){		
	}
	t.stop();
	
	on Locales[1] do begin {
		monteCarlo();
	}
}

proc monteCarlo(){
	const      n = 100, 				// number of random points to try
	seed = 589494289; 					// seed for random number generator
	var rs = new RandomStream(seed, parSafe=false);
	var count = 0;
	for i in 1..n do
		if (rs.getNext()**2 + rs.getNext()**2) <= 1.0 then
			count += 1;
	writeln("count", count);
	writeln("pi = ",  count*4.0/n , " ----------on locale ", here.id);
	delete rs;
}
