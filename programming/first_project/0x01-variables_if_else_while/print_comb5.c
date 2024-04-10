/**************************************
 * print_comb5.c
 * main () prints all possible combinations of two two-digit numbers.
 * return 0 on success
 * ***********************************************/



#include <stdio.h>

int main(void) 

{
    int numb1=0;
    int numb2=0;

    while(numb1<= 99)
    {
        	for (numb2 = numb1 + 1; numb2<=99; numb2++) 
		{
            		putchar(numb1 / 10+'0');
            		putchar(numb1 % 10+ '0');
            		putchar(' ');
            		putchar(numb2 / 10+'0');
            		putchar(numb2 % 10+'0');
            		if (numb1 != 98 || numb2 != 99) 
	    		{
             			putchar(',');
                		putchar(' ');
            		}
        	}
	numb1++;
    }
    return (0);
}


