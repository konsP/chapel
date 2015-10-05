/*simpleons*/
use Time;
use Random;

proc main() {
	writeln("MasterLocale: ", here.name,"   \n");
	var t = new Timer();
	t.start();
	while(t.elapsed() < 10){		
	}
	t.stop();
	
	var total = new Timer();
	total.start();

		on Locales[1] do  {
			//foo(1);//fact();
			monteCarlo();
		}
		on Locales[2] do{
			//foo(2);//fact();
			monteCarlo();
		}
	total.stop();
	writeln("PROGRAM END ============= Time elapsed:", total.elapsed()," \n");
	
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



proc fact(){
	const howMany =5;
	var facts = 1;
	for i in 1..howMany do
		facts = facts * i;
	writeln("Factorial of ", howMany, " = ", facts , " ----------on locale ", here.id);
	
}


proc foo(n){
	writeln("arg= ", n, "----------on locale ", here.id);
}





