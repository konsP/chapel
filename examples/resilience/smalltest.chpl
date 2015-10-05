/*cobegin*/
use Time, Random;


proc main() {
	var total = new Timer();
	total.start();

	
	
	writeln("PROGRAM_OUTPUT: ======  GO GO ");
	var t = new Timer();
	t.start();
	while(t.elapsed()<1){}
	t.stop();

	on Locales[1] do{ 
					/// from here
		on Locales[2] do
			foo(2);
		foo(1);
	}				/// till here it is a startMovedTask call on loc 1
					// all this is handled by one done_t object

	foo(0000);
				
	total.stop();
	writeln("PROGRAM_OUTPUT: ======  Time elapsed: ",  total.elapsed());
}


proc foo(n){
	writeln("arg= ", n, "----------on locale ", here.id);
}
