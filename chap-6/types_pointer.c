#include <stdio.h>

int main()
{
    char i = 'A';
    char *ptr_i = &i;

    float j = 5.24;
    float *ptr_j = &j;

    printf("add i= %u\n", &i);
    printf("add i= %u\n", j);
    printf("add j= %u\n", &j);
    printf("value i= %d\n", i);
    printf("value i= %d\n", *(&i));

    return 0;
}