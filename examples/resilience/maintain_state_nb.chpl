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
	writeln("Sum initially = ", sum,"--------- on locale ", here.id);
	writeln("MasterLocale: ", here.name,"   \n");

	on Locales(1) do {
			//plusOne(sum);
			writeln("Sum BEFORE = ", sum,"--------- on locale ", here.id);
			sum += 1;
			writeln("Sum AFTER = ", sum,"--------- on locale ", here.id);
	}
	on Locales(2) do {
			//plusOne(sum);
			writeln("Sum BEFORE = ", sum,"--------- on locale ", here.id);
			sum += 1;
			writeln("Sum AFTER = ", sum,"--------- on locale ", here.id);
	}
	
	//NB cases: error: non-lvalue actual is passed to 'inout' formal 'sum' of plusOne() [functionResolution.cpp:32
	//on + begin , cobegin on , coforall
	if(sum ==1) then
		writeln("Sum returns = ", sum,"--------- on locale ", here.id);
	else if(sum ==2) then
		writeln("Sum returns = ", sum,"--------- on locale ", here.id);
	else
		writeln("Sum returns = ", sum,"--------- on locale ", here.id);
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

