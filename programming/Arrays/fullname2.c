/**************************************
 * fullname2.c bt Dorine 
 * This program that takes the users first and second name from the terminal and prints the full name
 * main() -returns 0 on success.
 * ***********************************************/


#include <stdio.h>
#include <string.h>

char input[50];
char first_name[50];
char second_name[50];
char full_name[100];

int main( )
{
	/*sscanf(variable1,datatype,variable2*/
	printf("Enter your first name: ");
	fgets(input,sizeof(input),stdin);
	sscanf(input,"%s",first_name);

	/*first_name-"Dorine"*/
	strcpy(full_name,first_name);
	strcat(full_name, " ");

	printf("Enter your second name: ");
	fgets(input,sizeof(input),stdin);
	sscanf(input,"%s",second_name);

	strcat(full_name,second_name);
	 printf("Your full name is %s\n", full_name);

	return (0);








}

