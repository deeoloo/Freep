/**************************************
 * 7_printlastdigit.c
 * _printlastdigit()- prints the last digit of a number
 * return 0 on success
 * ***********************************************/



#include "main.h"



int print_last_digit(int t)
	
{
	if(t<0)
	{ 
		t=t*-1;
	}
	_putchar((t %10)+'0');

	return(t%10);


}
