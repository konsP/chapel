use BlockDist, CyclicDist, BlockCycDist, ReplicatedDist;
use Time;

var t2 = new Timer();
t2.start();
while(t2.elapsed() <5){}	
t2.stop();

					
writeln("GLOBAL and REMOTE VARIABLE ACCESSES \n");
				
var x, y : int;
x = 2;
y = 3;

on Locales(1){
	var z : int;
	z = x+y;													//2 remote read, 1 local write
	writeln("z=",z," on ", here.id, ":: local var write + read");

	x = 10;														//write global var
	
	on Locales(0) do{
		
			z -=1;  														//remote write  
	  	writeln("z=",z," on ", here.id, ":: remote var write + read");
	}
	on x do{
		z -=1 ;														//remote write
		writeln("z=",z," on ", here.id,":: remote var write + read");
	}	
	on z do{
		z -=1 ;												 //local read
		writeln("z=",z," on ", here.id, ":: local var write + read");
	}
	
	writeln("last :\n z=",z, " and x=",x, " on ", here.id, ":: local var write + read");		//local read
	

}	

