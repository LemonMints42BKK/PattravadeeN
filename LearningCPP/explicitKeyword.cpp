#include <iostream>
//***********************************************
class A {};
class B {};

class C {
				C(A const & _) {return ;}
	explicit	C(B const & _) {return ;}
};

//***********************************************
void	f( C const & _){
	return ;
}

//***********************************************

int main(void){
	
	f(A()); 		// Implicit conversion OK
	f(B());			// Implicit conversion  NOT OK, constructor is explicit.
	return 0;
}