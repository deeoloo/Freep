/**************************************
 * string.c by Dorine
 * Introduction to Strings in C
 * Strings are like array uof characters with NUL at the(\0)
 * main() -return 0 on success.
 * ***********************************************/


#include <stdio.h>

char name[7];

int main()
{
	name[0]='D';
	name[1]='O';
	name[2]='R';
	name[3]='I';
	name[4]='N';
	name[5]='E';
	name[6]='\0';

	printf("%s\n",name);
	return (0);

	
		



}
