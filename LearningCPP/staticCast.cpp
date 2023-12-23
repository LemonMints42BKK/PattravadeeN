int	main(void){

	int	a	=	42;					//Referance vulue

	double	b	=	a;				//Implicit promotion -> OK
	int	c		=	b;				//Implicit demotion -> NO WAY!!!
	int	d		=	static_cast<int>(b);	//Explicit demotion -> OK
	
	return 0;
}