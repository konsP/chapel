/*coforall*/
use Time, Random;

proc main() {
	writeln("======  PROGRAM START  \n");
	var total = new Timer();
	total.start();

	var t = new Timer();
	t.start();
	while(t.elapsed() < 20){		
	}
	t.stop();
	
	//example1
	coforall loc in Locales {
		on loc do
			foo(here.id);
	}
	total.stop();
	writeln("======  Time elapsed: ",  total.elapsed(), "\n");
}


proc foo(n){
	writeln("arg= ", n, "----------on locale ", here.id);
}
