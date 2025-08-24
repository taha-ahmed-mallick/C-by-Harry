#include <stdio.h>

int main()
{
    int n = 6;
    for (int i = 0; i < n; i++)
    {
        printf("The value of i is: %d\n", i + 1);
    }
    for (int i = 6; i; i--)
    {
        printf("The value of i is: %d\n", i);
    }
    /*
    for (initialization; condition; inc/dec)
    {
        code
    }
        In condition part we can write any condition like in example 2
        where we write only i as a condition.
        As 0 is interpreted as false while other ints are true.
    */
    return 0;
}