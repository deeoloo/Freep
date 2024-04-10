/**************************************
 * 1-alphabet.c
 * print alphabet ()- prints alphabet in lowercase using _putchar
 * return void on success
 * ***********************************************/



#include "main.h"

void print_alphabet(void)
{
	int i= 'a';

	for( i='a'; i<='z';i++)
	{
		_putchar(i);

	}


	_putchar('\n');
	

}
