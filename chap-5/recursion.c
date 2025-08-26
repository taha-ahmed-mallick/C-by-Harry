#include <stdio.h>

int factorial(int);

int main()
{
    int ans, num;
    printf("Enter a positive int to find its factorial: ");
    scanf("%d", &num);
    if (num >= 0)
    {
        ans = factorial(num);
        printf("The factorial of %d is %d.", num, ans);
    } else {
        printf("Not a valid number to calc factorial.");
    }
    return 0;
}

int factorial(int num)
{
    int fac;
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        fac = num * factorial(num - 1);
        return fac;
    }
}