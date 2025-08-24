#include <stdio.h>

int main()
{
    for (int i = 0; i < 10; i++)
    {
        if (i == 10)
            break;
        if (i == 5)
            continue;
        printf("i is %d.\n", i);
    }
    return 0;
}