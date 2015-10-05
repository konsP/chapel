/*var_scope*/
use Time;
use Random;

proc main() {
	var x, y :real;
	x = 2.0;
	y = 3.0;
	on Locales(1) do begin{
		var z:real;
		z = x+y ;
		
		write( "z is ",z, " on ", here.id,"\n");
		on Locales(0) do{
			z=x+y;
			write( "z is ",z, " on ", here.id,"\n");
		}
		on x do{ //data driven migration to Locale 0
			//z = x+y;
			write( "z is ",z, " on X ", here.id,"\n");
		}
	write( "z on ", z.locale.id,"\n");
	}	
	write( "x on ", x.locale.id,"\n");
	write( "y on ", y.locale.id,"\n");
	

	writeln("DONE");
}

/*
on Locales(0) do {
z=1;
=====
x on 0
y on 0
DONE
z is 5.0 on 1
z is 1.0 on 0
z is 1.0 on X 1
z on 1

***********************

on Locales(0) do{
	z=x+y;
x on 0
y on 0
DONE
z is 5.0 on 1
z is 5.0 on 0
z is 5.0 on X 1
z on 1

***********************
on Locales(0) do begin{
	z=1;

does not compile

***********************

on Locales(0) do begin{
	z=x+y;

does not compile


*/
