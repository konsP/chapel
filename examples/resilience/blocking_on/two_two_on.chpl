/*two_two_on*/
use Time;

proc main() {
	var t = new Timer();
	t.start();
	while(t.elapsed() < 20){		
	}
	t.stop();
	
	writeln("MasterLocale: ", here.name,"   \n");
	
		on Locales[1] do  {
			foo(1);
			on Locales[2] do{
				foo(2);
			}
		}
		on Locales[3] do{
			foo(3);
			on Locales[2] do{
				foo(4);
			}
		}
		
	
	writeln("PROGRAM END ============================= \n");
	
}

proc foo(n){
	writeln("arg= ", n, "----------on locale ", here.id);
}

