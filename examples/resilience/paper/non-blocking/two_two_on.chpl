/*two_two_on*/
use Time;

proc main() {
	//need this, to give time to send the fatal signal to loc 1*/
	var t = new Timer();
	t.start();
	while(t.elapsed() < 5){		
	}
	t.stop();
	
	writeln("MasterLocale: ", here.name,"   \n");
	
		on Locales[1] do begin{
			foo(1);
			on Locales[2] do begin{
				foo(2);
			}
		}
		on Locales[3] do begin{
			foo(3);
			on Locales[2] do begin{
				foo(4);
			}
		}
		
	
	writeln("PROGRAM END ======================1======= \n");
	
}

proc foo(n){
	writeln("arg= ", n, "----------on locale ", here.id);
}

