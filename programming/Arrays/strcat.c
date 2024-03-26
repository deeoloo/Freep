/**************************************
 * strcat.c by Dorine
 * This program concancates (combines) tro strings
 * main() -returns 0 on success.
 * ***********************************************/

#include <stdio.h>
#include <string.h>

char first_name[50];
char second_name[50];
char full_name[50];

int main()

{ 
	strcpy(first_name,"Dorine");
	strcpy(second_name,"Oloo");
	/*strcat(variable1,variable2)*/

	strcpy(full_name, first_name);

	strcat(full_name," "); /*adds space between the names*/
	strcat(full_name, second_name);


	strcat(first_name,second_name);
	printf("The full name is %s\n",full_name);
	return (0);








}

