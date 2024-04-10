/**************************************
 * putchar.c
 * main () prints out using putchar
 * return 0 on success
 * ***********************************************/



#include <stdio.h>

int main(void)
{
	int letter= 'a';
	for(letter='a'; letter<= 'z' ; letter++)
	{
		putchar(letter);
		
	}

	putchar('\n');
	
	return(0);


}
