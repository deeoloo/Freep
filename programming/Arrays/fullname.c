/**************************************
 * fullname.c by Dorine
 * This Write a program that takes the users first and second name from the terminal and prints the full name
 * main() -returns 0 on success.
 * ***********************************************/



#include <stdio.h>
#include <string.h>


char input[50];
char first_name[50];
char second_name[50];
char full_name[100];

int main ()
{
	printf("Enter your first_name:  ");
	fgets(input,sizeof(input),stdin);

	printf("Enter your second_name: ");
	fgets(input,sizeof(input),stdin);

	printf("Your full_name is %s %s\n",first_name,second_name);

	return (0);





}
