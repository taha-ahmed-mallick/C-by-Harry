#include <stdio.h>

int fibonacci(int);

int main()
{
    /*
    Write a program using recursion to calculate nth element of Fibonacci series.
    */
    int num;
    do
    {
        printf("Enter the term number of fibonacci series: ");
        scanf("%d", &num);
    } while (num < 1);
    int term = fibonacci(num);
    printf("The term is %d\n", term);
    return 0;
}

int fibonacci(int num)
{
    // 0,1,1,2,3,5,8,13,21,34, ...
    if (num == 1 || num == 2)
        return num - 1;
    return fibonacci(num-1) + fibonacci(num-2);
}