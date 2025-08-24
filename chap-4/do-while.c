#include <stdio.h>

int main()
{
    int num;
    do
    {
        printf("Enter number from 50-100: ");
        scanf("%d", &num);
    } while (50 > num || num > 100);

    return 0;
}