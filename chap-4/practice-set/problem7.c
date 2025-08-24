#include <stdio.h>

int main() {
    /*
    Write a program to calculate the sum of the numbers occurring in the
    multiplication table of 8. (consider 8 x 1 to 8 x 10).
    */
    int n, l, sum = 0;
    printf("What table you want to print: ");
    scanf("%d", &n);
    printf("Till which iteration you wanna print: ");
    scanf("%d", &l);
    printf("====Printing Table of %d====\n", n);
    for (int i = 1; i <= l; i++)
    {
        int product = n*i;
        printf("\t%d x %d = %d\n", n, i, n*i);
        sum+=product;
    }
    printf("====The total sum is %d of the above table.====", sum);
    return 0;
}