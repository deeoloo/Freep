/**************************************
 * 5_sign.c
 * _sign() -prints the sign of a number.
 * Returns 1 and prints + if n is greater than zero, and  0 and prints 0 if n is zero and -1 and prints - if n is less than zero
 * ***********************************************/





#include "main.h"


int print_sign(int n)

{
	if(n> 0)
	{
		_putchar('+');
		return(1);
	}

	/*else if(n==0)
	{
		_putchar('0');
		return(0);
	}*/


	else if(n<0)
	{
		_putchar('-');
		return(-1);
	}

	_putchar('0');


	return (0);





}

