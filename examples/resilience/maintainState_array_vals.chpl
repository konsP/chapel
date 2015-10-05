/*simpleons*/
use Time;
use Random;

proc main() {
	var myArray: [0..4] int;
	myArray(0) =0;
	myArray(1) =1;
	myArray(2) =2;
	myArray(3) =3;
	var t = new Timer();
	while(t.elapsed() < 5){		
	}
	t.stop();
	//writeln("Sum initially = ", sum,"--------- on locale ", here.id);
	writeln("myarray: ",myArray);

	 //blocking case
		on Locales[1] do begin{
			//plusOne(sum);
			writeln("myarray1 BEFORE = ", myArray(1),"--------- on locale ", here.id);
			myArray(1) = 7;
			writeln("myarray1  AFTER = ", myArray(1),"--------- on locale ", here.id);
		}
		on Locales[2] do begin{
			//plusOne(sum);
			writeln("myArray(2) BEFORE = ", myArray(2),"--------- on locale ", here.id);
			myArray(2) = 8;
			writeln("myArray(2) AFTER = ", myArray(2),"--------- on locale ", here.id);
		}	
	
	//nb case begin
	/*	on Locales[1] do begin{
			//plusOne(sum);
			writeln("Sum BEFORE = ", sum,"--------- on locale ", here.id);
			sum += 1;
			writeln("Sum AFTER = ", sum,"--------- on locale ", here.id);
		}
		on Locales[2] do begin {
			//plusOne(sum);
			writeln("Sum BEFORE = ", sum,"--------- on locale ", here.id);
			sum += 1;
			writeln("Sum AFTER = ", sum,"--------- on locale ", here.id);
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
	//coforall case
	/*coforall loc in Locales do{
		on loc{
			//plusOne(sum);
			writeln("Sum BEFORE = ", sum,"--------- on locale ", here.id);
			sum += 1;
			writeln("Sum AFTER = ", sum,"--------- on locale ", here.id);
		}
	}
	*/
	//NB cases: error: non-lvalue actual is passed to 'inout' formal 'sum' of plusOne() [functionResolution.cpp:32
	//on + begin , cobegin on , coforall
	writeln("END \n myarray: ",myArray);
}




