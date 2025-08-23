#include <stdio.h>

int main()
{
    /*
    Write a program to find whether a year entered by the user is a leap year or not.
    Take year as an input from the user.
    */
    int year, leap;
    printf("Enter the Year: ");
    scanf("%d", &year);
    ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) ? (leap = 1) : (leap = 0);
    leap ? printf("This is a leap year") : printf("This is not a leap year");
    return 0;
}