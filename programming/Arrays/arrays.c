/**************************************
 * arrays.c by Dorine
 * This program writesa 2 dimensional array program.First dimension contains 1-9.While the second dimension 10-18.Print the values to the terminals
 * main () -returns 0 on success.
 * ***********************************************/


#include <stdio.h>

#define ROWS 9
#define COLS 9

int main() {
    int array[ROWS][COLS];

    /* Populate the array*/
    int i=0;
    int j=0;
    for (i=0; i< ROWS;i++) {
	   
	  
        for ( j=0; j < COLS;j++) {
	
            array[i][j] = (i + 1) * 10 + j + 10;
        }
    }

    /*Print the array*/
    printf("2-Dimensional Array:\n");
    for ( i=0;i < ROWS;i++) {
	  
        for (j=0; j < COLS;j++) {
	
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}

