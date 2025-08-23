#include <stdio.h>

int main() {
    /*
    Write a program to find greatest of four numbers entered by the user.
    */
    int num1, num2, num3, num4;
    printf("Enter 1st number: ");
    scanf("%d", &num1);
    printf("Enter 2nd number: ");
    scanf("%d", &num2);
    printf("Enter 3rd number: ");
    scanf("%d", &num3);
    printf("Enter 4th number: ");
    scanf("%d", &num4);
    int max = num1;
    if (num2 > max) max = num2;
    if (num3 > max) max = num3;
    if (num4 > max) max = num4;
    printf("The greatest number entered was: %d", max);
    return 0;
}