/**************************************
 * print_comb.c
 * main() prints numbers with comma in between
 * return 0 on success
 * ***********************************************/



#include<stdio.h>


int main (void)
{
	int number='0';
	for(number='0';number<='9';number++)
	{
		putchar(number);

		if (number!= '9')
		{
            		putchar(',');
            		putchar(' ');
		}
	}	

	putchar('\n');

	return (0);



}
