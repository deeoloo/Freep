/**************************************
 * hour.c
 * This program takes hours as input and give the user back total number of minutes given
 * main() -returns 0 on sucess.
 * ***********************************************/


#include<stdio.h>
#include<string.h>

char input[50];
int hour;
int minutes;

int main()

{
	printf("Enter hours: ");
	fgets(input, sizeof(input), stdin);
	sscanf(input, "%d", &hour);

	minutes= hour * 60;
	printf("Total minutes; %d\n",minutes);

	return(0);


}
