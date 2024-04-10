/**************************************
 * print_comb4.c
 * main () prints a three digit numbers
 * return 0 on success
 * ***********************************************/



#include <stdio.h>

int main(void) 
{
    int numb1='0';
    int numb2='0';
    int numb3='2';
    
    while(numb1<='7')
 {
	 for(numb1='0';numb1<='9';numb1++)
	 {
		 for(numb2=numb1+1;numb2<='9';numb2++)
		 {
			 for(numb3=numb2+1;numb3<='9';numb3++)
			 {
			 	putchar(numb1);
			 	putchar(numb2);
				putchar(numb3);

		  		if(numb1!='7'||numb2!='8'|| numb3!='9')
				 {
				 	putchar(',');
				 	putchar(' ');
		 
		 
		 		}
	 
		 	}

	 
	 	}
	}
	numb1++;
    }

 

    return (0);

 }
