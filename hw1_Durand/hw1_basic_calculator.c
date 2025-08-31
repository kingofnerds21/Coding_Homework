/*
Durand, Taylor
This is a program that will show the four common operations in math which will be 
    "+" "-" "/" "*"
*/

#include <stdio.h>

int main()
{
    //Listing all of my required variables
    int first;
    int second;
    int add;
    int sub;
    int mul;
    int div;

    //Asking for and getting variables for operations
    printf("Please enter your first number: ");
    scanf("%d", &first);
    printf("Please enter your second number: ");
    scanf("%d", &second);

    //Performing the listed operations
    add = first + second;
    sub = first - second;
    mul = first * second;
    div = first / second;

    //Printing the results of the operations
    printf("%d + %d = %d\n", first, second, add);
    printf("%d - %d = %d\n", first, second, sub);
    printf("%d * %d = %d\n", first, second, mul);
    printf("%d / %d = %d\n", first, second, div);

    return 0;
}