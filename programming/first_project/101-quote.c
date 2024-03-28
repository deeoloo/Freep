/**************************************
 * 101-quote.c
 * main () - This program prints out without using printf and puts
 * Return (1) on success
 * ***********************************************/



#include <unistd.h>


int main (void)

{
	write(STDOUT_FILENO, "and that piece of art is useful\" - Dora Korpar, 2015-10-19",59);

	return (1);
	

}

