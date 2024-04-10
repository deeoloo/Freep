/**************************************
 * alphabetx10.c
 * prints alphabets x10
 * return void
 * ***********************************************/




#include "main.h"


void print_alphabet_x10(void)
{
	int i='a';
	int j= 0;

	for(j=0; j<10; j++)
	{

		for(i='a'; i<='z'; i++)
	
		{
			_putchar(i);
		}

		_putchar('\n');

	}


}
