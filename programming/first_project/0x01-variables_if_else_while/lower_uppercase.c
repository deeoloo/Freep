/**************************************
 * lower_upper.c
 * main () prints lowercase and uppercase
 * returns 0 on success
 * ***********************************************/


#include<stdio.h>

int main (void)
{
  int letter= 'a';
  int letter_x ='A';
  
  for(letter='a';letter<='z';letter++)
  {
	putchar(letter);
  
  }
  for(letter_x= 'A';letter_x<='Z';letter_x++)
  {
	putchar(letter_x);
  
  
  }
  return (0);



}
