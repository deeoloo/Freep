/**************************************
 * 6-size.c
 * main () - Finds the size of a program
 * Returns 0
 * ***********************************************/



#include<stdio.h>


int main(void)
{
	int character=sizeof(char);
	int integer=sizeof(int);
	/*Size of a char: 1 byte(s)*/
	printf("Size of a char: %d byte(s)\n",character);
	
	
	printf("Size of a int: %d byte(s)\n",integer);


	printf("Size of a float: %lu byte(s)\n", sizeof(float));



	printf("size of a long int: %lu bytes(s)\n",sizeof(long int));

	return (0);
			
			
			
			
			
}
