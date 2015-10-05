/*back*/
use Time;

proc main() {
	//need this, to give time to send the fatal signal to loc 1*/
	var t = new Timer();
	t.start();
	while(t.elapsed() < 5){		
	}
	t.stop();
	
	writeln("MasterLocale: ", here.name,"   \n");
	
		on Locales[1] do  {
			foo(1);
			on Locales[2] do{
				foo(2);
				on Locales[1] do  {
					foo(3);	
				}
			}
		}
		
		
	
	writeln("PROGRAM END ============================= \n");
	
}

proc foo(n){
	writeln("arg= ", n, "----------on locale ", here.id);
}

