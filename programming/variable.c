/*********
 * variable.c by Dorine
 * Learning about variables and operators and print format
 * main () -return 0 on success.
 * ***************/


#include <stdio.h>
int number;/*These are integers*/
float decimal;/*These are fractions*/
int number2=30;
int add;/*Adds variables*/
int mult;/*Multiplies variables*/
int mix;/*Multiplies operations*/
int mix2;
int main()
{
	number=4;
	add= number+number2;
	mult= number+number2;
	mix=(number+number2-5)*number;
	mix2=number+number2-5*number;
	
	decimal=3.14;

	printf("number is %d number 2 is %d and decimal is %f\n" ,number, number2, decimal);
	printf("addition %d, multiplication %d, mix %d, mix2 %d\n",add, mult,mix,mix2);
	printf("This should go to the next line");

	return (0);



}

