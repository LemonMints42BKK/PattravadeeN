#include <iostream>

class Parent 				{};
class Child1: public Parent {};
class Child2: public Parent {};

class Unrelates				{};

int main (void){
	Child1 a;					//Referance valued
	Parent *b = &a;				//Implicit upcast -> OK

	Child1	* c = b;						//Implicit downcast -> HEll!!
	Child2	* d = static_cast<Child2 *>(b);	//Explicit downcast -> OK!

	Unrelates *e = static_cast<Unrelates *>(&a);//Explicit conversion -> NO!
	
	return 0;
}