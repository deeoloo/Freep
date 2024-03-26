/**************************************
 * strcpy.c  by Dorine
 * This program copies tring constant into a variable
 * stdio.h--> input output
 * string.h --> string manipulation (strcpy)
 * main() -returns 0 on sucess.
 * ***********************************************/

#include <stdio.h>
#include <string.h>

char name[7]; /* Holds characters of your name*/

int main()
{
	/*strcpy(variable,string)*/

	strcpy(name,"Dorine");
	printf("%s\n", name);
	return (0);




}
