/*three_on*/
use Time, Random;

proc main() {
	var total = new Timer();
	total.start();


	var t = new Timer();
	t.start();
	while(t.elapsed() < 15){		
	}
	t.stop();
	
	writeln("MasterLocale: ", here.name,"   \n");
	
		on Locales[1] do begin {
			monteCarlo(1);//
			on Locales[2] do begin {
				monteCarlo(2);//
				on Locales[3] do begin {
					monteCarlo(3); //
				}
			}
		}
		
		
	
	total.stop();
	writeln("PROGRAM END ============= Time elapsed:", total.elapsed()," \n");
	
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


proc monteCarlo(){
	const      n = 100000000, 				// number of random points to try
	seed = 589494289; 					// seed for random number generator
	
	var rs = new RandomStream(seed, parSafe=false);
	var count = 0;
	
	for i in 1..n do
		if (rs.getNext()**2 + rs.getNext()**2) <= 1.0 then
			count += 1;
	
	writeln(" pi = ",  count * 4.0 / n, " ----------on locale ", here.id);
	
	delete rs;
}



proc foo(n){
	writeln("arg= ", n, "----------on locale ", here.id);
}

