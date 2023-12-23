int	main(void){

	float	a	=	420.042f;					//Referance vulue

	void *	b	=	&a	;						//Implicit promotion -> OK
	int *	c	=	reinterpret_cast<int *>(b);	//Explicit demotion -> OK
	int &	d	=	reinterpret_cast<int &>(b);	//Explicit demotion -> OK
	
	return 0;
}