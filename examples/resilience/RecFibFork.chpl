/*simpleons*/
use Time;
use Random;
use GMP;
proc main() {

	var nth = 2000000;
	var t = new Timer();
	t.start();
	while(t.elapsed() < 15){		
	}
	t.stop();
	writeln("MasterLocale: ", here.name,"   \n");

	var total = new Timer();
	total.start();

	on Locales[1]{
		var sum =0;
		var ii = new BigInt();
		var jj = new BigInt();
		write(" Locale ", here.id," :");
		for ii in fibonacci1(nth) {
			jj.set(ii);
		}
		//writeln("jj:  ", jj);	
			//fibonacci1(nth);
	}
	writeln("\n");
	on Locales[2]{
		var sum=0;
		var iii = new BigInt();
		var jjj = new BigInt();
		write(" Locale ", here.id," :");
		for iii in fibonacci2(nth){
			jjj.set(iii);
		}
		//writeln("jjj:  ", jjj);	
	}
	total.stop();
	writeln("Elapsed :", total.elapsed(),  "\n");
	
}

iter fibonacciNormal(n) : int{
 	var i1 =0, i2 =1;
	var i =0;
	
	while (i<=n){
		yield i1;
		var i3 = i1+i2;
		
		i1 = i2;
		i2 = i3;
		i +=1;
		
	}
}

iter fibonacci1(n) : BigInt(){
	var i1 = new BigInt();
	var i2 = new BigInt();
	var i3 = new BigInt();
	var r = new BigInt();
	
	i1.add_ui(i1, 0); 
	i2.add_ui(i2, 1);
 	//var i1 =0, i2 =1;
	var i =0;
	while (i<=n){
		if(i%2==0){
			yield i1;
		}
		i3.add(i1, i2); //var i3 = i1+i2;
		i1.set(i2); //i1 = i2; 
		i2.set(i3); //i2 = i3;
		i +=1;
	}
	writeln("iterations : ", i, "\n");
}



iter fibonacci2(z) : BigInt(){

	var i1 = new BigInt();
	var i2 = new BigInt();
	var i3 = new BigInt();
	i1.add_ui(i1, 0); 
	i2.add_ui(i2, 1);
 	//var i1 =0, i2 =1;
	var i =0;
	while (i<=z){
		if(i%2!=0){
			yield i1;
		}		
		i3.add(i1, i2); //var i3 = i1+i2;
		i1.set(i2); //i1 = i2; 
		i2.set(i3); //i2 = i3;
		i +=1;
	}
	writeln("iterations : ", i, "\n");
}




iter fibonacci(n):int
{
	var i =0;
	//while (i<=n){

		if(n==0){
			yield 0;
		}else if(n==1 || n==2){
			yield 1;
		}else{
			on Locales[1]{
				//forall xx in fibonacci(n-1) do
				//	yield xx;
				fibonacci(n-1);
			}
			on Locales[2]{
				//for yy in fibonacci(n-2) do
				//	yield yy;
				fibonacci(n-2);
			}
		}//else end
	//	i +=1;
	//}
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






