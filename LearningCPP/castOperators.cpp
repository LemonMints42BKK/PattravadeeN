#include <iostream>

class Foo {
	public:
		Foo (float const v): _v(v) {}

		float getFoo(void)	{return (this->_v);}

		operator float()	{return (this->_v);}
		operator int()		{return (static_cast<int>(this->_v));}
	private:
		float	_v;
};

int main (void){
	
	Foo		a(420.042f);
	float	b = a;
	int		c = a;

	std::cout << a.getFoo() << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	return 0;
}
