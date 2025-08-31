/*
Taylor Durand
This code will ask for and then 
print back to you your "lucky number"
*/
#include <stdio.h>

int main()
{
   int luck_nmbr = 0; //declared lucky number 
   
   printf("Enter your lucky number:");

   scanf("%d", &luck_nmbr); //user input for luck_number

   printf("Thank you.\nYour lucky number is: %d\n", luck_nmbr);

   return 0;
}