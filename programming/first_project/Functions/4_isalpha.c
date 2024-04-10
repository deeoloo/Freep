/**************************************
 * 4_isalpha.c
 * _isalpha() -checks for alphabet character
 * Returns 1 if c is a letter, lowercase or uppercase and 0 if otherwise
 * ***********************************************/



#include "main.h"



int _isalpha(int c)


{
	if(c>='a' && c<='z')
	{
		return(1);
	}

	else if(c>='A' && c<='Z')
	{
		return (1);
	}

	else
	{
		return (0);
	}




}
