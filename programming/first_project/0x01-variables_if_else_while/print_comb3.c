/**************************************
 * print_comb3.c
 * main () prints a combination of two digit numbers
 * return 0 on success
 * ***********************************************/



#include<stdio.h>


int main (void)
{
	int numb1='0';
	int numb2='1';

	while(numb1<='9')
	{
		for(numb2= numb1+1;numb2<='9';numb2++)
		{
			putchar(numb1);
			putchar(numb2);

			if(numb1!='8'|| numb2!='9')
			{ 
		
				putchar(',');

			}


		
			putchar(' ' );

	
		}

	
	
	numb1++;
	}

	return (0);




}
