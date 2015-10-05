/*simpleontest*/
use Time, Random;

proc main() {
	//need this, to give time to send the fatal signal to loc 1*/
	var t = new Timer();
	t.start();
	while(t.elapsed() < 5){		
	}
	t.stop();
	var total = new Timer();
	total.start();
	writeln("MasterLocale: ", here.name,"   \n");
	
		on Locales[1] do  {
			monteCarlo();
			on Locales[2] do{
				monteCarlo();
			}
		}
		
	total.stop();
	writeln("PROGRAM END ============= Time elapsed:", total.elapsed()," \n");
	
}

proc foo(n){
	writeln("arg= ", n, "----------on locale ", here.id);
}

proc monteCarlo(){
	const      n = 100000000, 				// number of random points to try
	seed = 589494289; 					// seed for random number generator

	var rs = new RandomStream(seed, parSafe=false);
	var count = 0;

	for i in 1..n do
		if (rs.getNext()**2 + rs.getNext()**2) <= 1.0 then
			count += 1;
	writeln(" pi = ", count*4.0/n , " ----------on locale ", here.id);
	delete rs;
}
