#include <stdio.h>

float avg(int, int, int);

int main()
{
    /*
    Write a program using function to find average of three numbers.
    */
    float num1, num2, num3;
    printf("Enter your 1st number: ");
    scanf("%f", &num1);
    printf("Enter your 2nd number: ");
    scanf("%f", &num2);
    printf("Enter your 3rd number: ");
    scanf("%f", &num3);
    printf("The average of these three numbers is, %f", avg(num1, num2, num3));
    return 0;
}

float avg(int x, int y, int z)
{
    return (x + y + z) / 3.0;
}