/*factorial*/
use Time;


config const howMany =10;
var facts = 1;

for i in 1..howMany do
	facts = facts * i;

writeln("Factorial of ", howMany, " = ", facts , " ----------on locale ", here.id);

