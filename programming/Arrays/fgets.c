/**************************************
 * fgets.c by Dorine
 * This proram takes user name and prints it back
 * main() -returns 0 on succes
 * ***********************************************/


#include<stdio.h>
#include<string.h>

char input[100];/*Holds the input from the user*/
char first_name;/*Actual user first name*/

int main ()
{ 
	printf("Enter first name;  ");
	fgets(input,sizeof(input),stdin);
	printf("The length of your name is %ld\n",strlen(input));

	return (0);



}
