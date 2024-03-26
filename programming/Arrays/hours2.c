/**************************************
 * hours2.c by Dorine
 * This program takes hours as input and give the user back total number of minutes given
 * main() -return 0 on sucess.
 * ***********************************************/


#include<stdio.h>
#include<string.h>

char input[50];
int minutes;
int hours;

int main()
{
	printf("Enter hours: ");
	fgets(input,sizeof(input),stdin);
	sscanf(input,"%d",&hours);

	minutes= hours * 60;
	printf("Total minutes: %d\n", minutes);
	return (0);


}
