#include <stdio.h>

int main()
{
    /* What will be the output of this program
        int a = 10;
        if (a = 11)
        printf("I am 11");
        else
        printf("I am not 11");
    */
    // I am 11; bcz == not used.
    int a = 10;
    if (a = 11)
        printf("I am 11");
    else
        printf("I am not 11");
    return 0;
}