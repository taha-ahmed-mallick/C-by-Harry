#include <stdio.h>

int main() {
    /*
    Write a program to check whether a given number is prime or not using loops.
    */
    printf("====Prime Checker====\n");
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (n == 2 || n == 3) {
        printf("This is a prime number.");
        return 0;
    } else if (n == 1) {
        printf("This is nither a prime number or a composite number.");
        return 0;
    } else if (n <= 0) {
        printf("Enter a positive integer.");
        return 0;
    } 
    for (int i = 2; i <= n/2;i++) {
        if (n%i==0) {
            printf("This is a composite number.");
            return 0;
        }
    }
    printf("This is a prime number.");
    return 0;
}