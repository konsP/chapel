

config var buffsize = 20;
config var numUpdates = 2;


var buff$ : [0..buffsize] sync real;

begin producer(numUpdates);
consumer();


proc producer (numUpdates){
	var writeloc = 0;
	for i in 1..numUpdates{
		buff$[writeloc] = nextVal();
		writeloc = (writeloc+1) %buffsize;
	}
	buff$[writeloc] = 22;
}

proc consumer(){
	var readloc = 0;
	do{
		const val = buff$[readloc];
		processVal(val);
		readloc = (readloc+1) % buffsize;
	}while(val !=  22);
}


extern nextVal(){ 
	static int   id = 0 + 1;
  int      next_id;
  next_id = id+1;
  writeln("next val ", next_id);
  return next_id;

}

proc processVal (n){ 
	writeln("processed ", n);
	}
