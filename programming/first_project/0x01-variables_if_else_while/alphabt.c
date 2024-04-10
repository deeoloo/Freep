/**************************************
 * alphabt.c
 * main () prints out leaving out some letters
 * return 0 on success
 * ***********************************************/



#include<stdio.h>

int main(void)
{
	int letter='a';
	for(letter='a';letter<='z';letter++)
	{
		if(!(letter=='e'|| letter=='q'))
		{
			putchar(letter);
		
		
		}



	
	}

	putchar('\n');

	return (0);



}
