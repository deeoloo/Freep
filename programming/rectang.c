/******************************************************************
 * rectang.c by Dorine
 * main () -returns 9 on success.
 * ******************************************************************/

#include <stdio.h>
int length;
int width;
int perimeter;
int main()
{
	/*formula=2*length+width*/
	length=6;
	width=4;
	perimeter=2*(length+width);

	printf("%d add %d remainder %d\n", length, width, perimeter);

	printf("length is %d\n", length);
	printf("width is %d\n", width);
	printf("perimeter is %d\n",perimeter);
	return (0);




}
