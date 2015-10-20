proc main() {
	writeln("======  PROGRAM START  \n");
	map(times2, (1, 1+1i));
	
}


proc times2(n){
	return n*2;
}

proc map (f, t){
 return (f(t[0]), f(t[1]));
}


/*
 * -bash-4.1$ chpl -o hofunctions examples/side_effects/h-o-functions.chpl 
 * examples/side_effects/h-o-functions.chpl:10: In function 'times2':
 * examples/side_effects/h-o-functions.chpl:11: internal error: the type
 *  of the actual argument 'n' is generic [callInfo.cpp:56]
*/
