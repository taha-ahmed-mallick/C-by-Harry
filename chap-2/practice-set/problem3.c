#include <stdio.h>

int main()
{
    //  Write a program to check whether a number is divisible by 97 or not.
    int input;
    printf("Enter the number: ");
    scanf("%d", &input);
    int result = input % 97;
    if (!result)
    {
        printf("The number is divisible by 97.");
    } else printf("The number isn't divisible by 97.");
    return 0;
}