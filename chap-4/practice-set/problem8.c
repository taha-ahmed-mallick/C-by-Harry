#include <stdio.h>

int main() {
    /*
    Write a program to calculate the factorial of a given number using a for loop.
    */
    int n, prod=1;
    printf("====Factorial Calcualtor====\n");
    printf("Enter an integer: ");
    scanf("%d", &n);
    for (int i = n; i > 0; i--) {
        prod*=i;
    }
    printf("\t\tThe factorial is: %d.\n", prod);
    return 0;
}