#include <stdio.h>

int main() {
    /*
    Write a program to print multiplication table of a given number n
    */
    int n, l;
    printf("What table you want to print: ");
    scanf("%d", &n);
    printf("Till which iteration you wanna print: ");
    scanf("%d", &l);
    printf("====Printing Table of %d====\n", n);
    for (int i = 1; i <= l; i++)
    {
        printf("\t%d x %d = %d\n", n, i, n*i);
    }
    
    return 0;
}