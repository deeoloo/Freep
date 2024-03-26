/**************************************
 * array.c by Dorine
 * Introduction to arrays. Given a certain data the program gives us an average.
 * main() -return 0 on success
 * ***********************************************/

#include <stdio.h>
float data[5];/*We declare a float array named data to contain float characters*/
float total; /*Total of data in the array*/
float average;/*Average of the total data in the array*/

int main()
{
	data[0]=20.0;
	data[1]=35.0;
	data[2]=45.0;
	data[3]=10.0;
	data[4]=3.0;

	total=data[0]+data[1]+data[2]+data[3]+data[4];
	average=total/5.0;

	printf("\tTotal is %3.1f\n\tAverage is %3.2f\n", total, average);

	return (0);


}
