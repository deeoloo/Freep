#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*Last digit of -748255693 is -3 and is less than 6 and not 0*/

	if(n%10==0)
	{

		printf("last digit of %d is 0", n);
	}
	else if(n%10>5)
	{
		printf("last digit of %d is %d and is greater than 5", n, n%10);
	
	}
	else if(n%10<6)
	{
		printf("last digit of %d is %d and is less than 6 and not 0", n, n%10);
	
	}

	else

	{
		printf("wait");
	}

	

	printf("\n");

	return (0);
}
