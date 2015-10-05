use Time, Random;;
proc main() {
	var total = new Timer();
	total.start();

	var t2 = new Timer();
	//var t3 = new Timer();
	t2.start();
	while(t2.elapsed() <35){}	
	t2.stop();
	on Locales[1] do begin{
		monteCarlo(5);
	}	
		on Locales[2] do begin {
			monteCarlo(10);	
		}
		on Locales[3] do begin {
			monteCarlo(6);	
		}	
	on Locales[1] do{
		monteCarlo(7);
	}

	total.stop();
	writeln("PROGRAM_OUTPUT: ======  Time elapsed: ",  total.elapsed());
}
	
proc foo(n){
	writeln("arg= ", n, "----------on locale ", here.id);
}

proc monteCarlo(x){
	const      n = 1000000, 				// number of random points to try
	seed = 589494289; 					// seed for random number generator
	//writeln(seed);
	var rs = new RandomStream(seed, parSafe=false);
	var count = 0;
	
	

	for i in 1..n do
		if (rs.getNext()**2 + rs.getNext()**2) <= 1.0 then
			count += 1;
	//writeln("PROGRAM_OUTPUT: count = ", count," ----------on locale ", here.id);
	writeln("PROGRAM_OUTPUT: pi = ",  count*4.0/n , " ard  x = ",x,"----------on locale ", here.id);
	delete rs;
}
