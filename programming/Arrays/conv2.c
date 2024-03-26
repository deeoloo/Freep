/**************************************
 * conv2.c by Dorine
 * This program converts users input from Celcius to Fahrenheit
 * main() -return 0 on success
 * ***********************************************/



#include<stdio.h>
#include<string.h>


char input[50];
float celcius;
float fahrenheit;

int main()
{
	printf("Enter the temperature: ");
	fgets(input,sizeof(input),stdin);
	sscanf(input,"%f",&celcius);

	fahrenheit=(celcius * 9 / 5) + 32;
	printf("%.2f celcius is equal to %.2f fahrenheit\n", celcius,fahrenheit);
	return (0);


}
