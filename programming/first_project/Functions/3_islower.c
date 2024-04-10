/**************************************
 * 3_islower.c
 * _islower()-checks whether input is lower or uppercase
 * @c-character from the user
 * Return 0 if not lowercase and 1 if lowercase
 * ***********************************************/



#include "main.h"


int _islower(int c)

{
	if(c>='a' && c<='z')
	{
		return(1);
	}

	else
	{
		return(0);
	}




}



