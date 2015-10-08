/*simpleons*/
use Time;
use Random;

proc main() {
	var sum :real;
	sum = 0;
	var t = new Timer();
	t.start();
	while(t.elapsed() < 20){		
	}
	t.stop();
	writeln("INITIAL ", sum,"--------- on locale ", here.id);
	writeln("MasterLocale: ", here.name,"   \n");

	on Locales(1) do {
			sum += 1;
			writeln("Sum AFTER = ", sum,"--------- on locale ", here.id);
	}
	on Locales(2) do {
			sum -= 1;
			writeln("Sum AFTER 2 = ", sum,"--------- on locale ", here.id);
	}
	
	on Locales(3) do {		
			sum += here.id;
			writeln("Sum AFTER 2 = ", sum,"--------- on locale ", here.id);
	}
	

	writeln("FINAL ", sum,"--------- on locale ", here.id);

	writeln("DONE");
}


proc plusOne(inout sum){
	writeln("Sum BEFORE = ", sum,"--------- on locale ", here.id);
	sum += 1;
	writeln("Sum AFTER = ", sum,"--------- on locale ", here.id);
}

	 //blocking case
/*		on Locales[1] do {
			//plusOne(sum);
			writeln("Sum BEFORE = ", sum,"--------- on locale ", here.id);
			sum += 1;
			writeln("Sum AFTER = ", sum,"--------- on locale ", here.id);
		}
		on Locales[2] do {
			//plusOne(sum);
			writeln("Sum BEFORE = ", sum,"--------- on locale ", here.id);
			sum += 1;
			writeln("Sum AFTER = ", sum,"--------- on locale ", here.id);
		}	
*/	
	//nb case begin
	/*	

		//coforall case
	coforall loc in Locales do{
		on loc{
			//plusOne(sum);
			writeln("Sum BEFORE = ", sum,"--------- on locale ", here.id);
			sum += 1;
			writeln("Sum AFTER = ", sum,"--------- on locale ", here.id);
		}
	}

	*/	
	//cobegin case 
	/*	cobegin{
		on Locales[1] do {
			//plusOne(sum);
			writeln("Sum BEFORE = ", sum,"--------- on locale ", here.id);
			sum += 1;
			writeln("Sum AFTER = ", sum,"--------- on locale ", here.id);
		}
		on Locales[2] do{
			//plusOne(sum);
			writeln("Sum BEFORE = ", sum,"--------- on locale ", here.id);
			sum += 1;
			writeln("Sum AFTER = ", sum,"--------- on locale ", here.id);
		}
		}//cobegin
	*/

