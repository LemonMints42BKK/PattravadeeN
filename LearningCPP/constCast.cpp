int	main(void){

	int	a	=	42;					//Referance vulue

	int const *	b	=	&a	;		//Implicit promotion -> OK
	int *	c	=	b;				//Implicit demotion -> NO WAY!!!
	int *	d	=	const_cast<int *>(b);	//Explicit demotion -> OK
	
	return 0;
}