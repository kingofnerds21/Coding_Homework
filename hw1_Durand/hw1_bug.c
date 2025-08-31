/*
Taylor Durand
This is me finding a bug in this program
This program reads from the user the number of courses and prints it back.
*/
#include <stdio.h>
int main(void)
{
int courses;
printf("How many courses are you taking? ");
scanf("%d", &courses);
printf("Your answer was: %d\n", courses);
return 0;
}