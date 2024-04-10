/**************************************
 * print_base16
 * main() prints the base of 16
 * return 0 on success
 * ***********************************************/



#include<stdio.h>

int main (void)
{
	int letter='0';
	int letterz='a';
	for(letter='0';letter<='9';letter++)
	{
		putchar(letter);
	
	}

	for(letterz='a';letterz<='f';letterz++)
	{
		putchar(letterz);

	}

	printf("\n");

	return (0);



}
