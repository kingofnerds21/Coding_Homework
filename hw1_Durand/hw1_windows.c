/*
Durand, Taylor
This is a program that will take the measurements, in feet, for a window.
Calculate the square footage for the window.
Multiply it by how many windows there are.
Apply a price for the total square footage.
*/

#include <stdio.h>

int main()
{
    // Declaring all variables needed
    int win_height ;
    int win_width;
    int win_num;
    int sqft_ea;
    int sqft_tot;
    int price_tot;

    // Collecting values needed for each variable

    printf("This program calculates the area and cost of windows given size and count.\n");
    printf("The price for one square foot of a new window is $50\n\n");
    printf("Enter the window's width in feet:   ");
    scanf("%d", &win_width);
    printf("Enter the window's height in feet:  ");
    scanf("%d", &win_height);
    printf("Enter the total number of windows:  ");
    scanf("%d", &win_num);

   // printf("%d, %d, %d", win_width, win_height, win_num);

    // Performing all operations on variables

   sqft_ea = win_height * win_width;
   sqft_tot = sqft_ea * win_num;
   price_tot = sqft_tot * 50;

    // Printing all required information

    printf("\nYour total is: $%d for %d square feet of window.\n", price_tot, sqft_tot);
}