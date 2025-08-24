#include <stdio.h>

int main()
{
    int i = 5;
    i += 5;
    printf("i is : %d\n", i);
    i++;
    printf("i is : %d\n", i);
    ++i;
    printf("i is : %d\n", i);
    printf("i is : %d, It wil be 13 just after %d\n", i++, i);
    printf("i is : %d\n", i);
    printf("i is : %d\n", ++i);
    return 0;
}