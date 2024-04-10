/*******************************************
 * datatypes.c by Dorine
 * Learning more about datatypes and operations
 * arithmetic operators--> - + * / %
 * logical operators --> == === <= >= < > !=
 * assignment operator --> =
 *
 * main() -returns 0 on success.
 * ********************************/

#include <stdio.h>

int value1;
int value2;
int modullo;
int degree;
float ferh;
int main()
{
	/*formula f=degree*9/5+32*/
	degree=28;
	ferh=(degree*9.0/5.0)+32;
	value1=28;
	value2=5;
	modullo=28%5;

	printf("%d divided by %d remainder %d\n",value1,value2,modullo);

	printf("degree is %d\n", degree); 
	printf("ferh is %f\n", ferh);
	return (0);



}

