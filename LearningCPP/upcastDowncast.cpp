#include <iostream>

class Parent 				{}; //more genalic
class Child1: public Parent {}; //more accurate
class Child2: public Parent {}; //more accurate

int main (void){
	Child1 		a;						//Referance valued
	Parent *	b 	= 	&a;				//Implicit "reinterpertation" -> OK
	Parent *	c	=	(Parent *)&a;	//Explicit "reinterpertation" -> OK

	Parent *	d	=	&a;				//Implicit upcast -> OK!
	Child1 * 	e 	= 	d;				//Implicit downcast -> HEll!!
	Child2 * 	f 	= (Child2 *)d;		//Explicit downcast -> OK! but really? child2 <- child1
	
	return 0;
}