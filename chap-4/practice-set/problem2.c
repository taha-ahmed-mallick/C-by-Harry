#include <stdio.h>

int main() {
    /*
    Write a program to print multiplication table of 10 in reversed order.
    */
    int n, l;
    printf("What table you want to print: ");
    scanf("%d", &n);
    printf("Till which iteration you wanna print: ");
    scanf("%d", &l);
    printf("====Printing Table of %d in reverse====\n", n);
    for (int i = l; i > 0; i--)
    {
        printf("\t\t%d x %d = %d\n", n, i, n*i);
    }
    return 0;
}