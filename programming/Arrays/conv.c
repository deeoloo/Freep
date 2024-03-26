/**************************************
 * conv.c by Dorine
 * This program converts users input from Centigrade to Fahrenheit
 * main () -returns 0 on success.
 * ***********************************************/

#include<stdio.h>
#include<string.h>

char input[50];
float centigrade;
float fahrenheit;

int main ()
{
	printf("Enter the temperature: ");
	fgets(input,sizeof(input),stdin);

	sscanf(input, "%f",&centigrade);



	fahrenheit = (centigrade * 9 / 5) + 32;

	printf("%.2f centigrade is equal to %.2f Fahrenheit\n", centigrade, fahrenheit);

	return (0);


}

