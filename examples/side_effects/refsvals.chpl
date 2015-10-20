var myDom = {1..5};
var A: [myDom] myDom.type;
var B: [A[5]] int;

A[5] = {1..3};
writeln(B.domain);

myDom = {1..4};
myDom = {1..5};
A[5] = {1..2};
writeln(B.domain);

/* OUTPUT:
* {1..3}
* {1..3}
*/

/**
 * Comments:
 * 
 * Domains are mutable objects V
 * 
 * Domain variables hold references to domains X
 * Arrays of domains hold references to domains X
 *
 * the value of the domain can be thought of as the set of indices that it describes;
 * the value of an array is effectively the collection of elements that it describes
 * and their values.
 * 
 * 
 * 
 * Assignmrnt on domains (lhs = rhs;) does not modify the lhs reference,
 * but copies the value of the rhs object into the value of the lhs object V
 * 
 * makes lhs domain describe the same indices as the rhs domain, while each retains its individual identity 
 * and type (eg one could be a distributed domain nad teh other local)
 * 
 * 
 * Q: Is there a way to modify the reference held in a domain variable, 
 * instead of modifying the domain that it references?
 * 
 * 
 * 
 * */

