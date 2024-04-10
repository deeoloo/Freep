/**************************************
 * _putchar.c
 * _putchar () -prints a char
 * Return -char
 * ***********************************************/


#include "main.h"


char _putchar (char c)
{

	
	char ch=write(1, &c,1);
	

	return(ch);





}
