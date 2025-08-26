#include <stdio.h>

int sum(int);

int main() {
    /*
    Write a recursive function to calculate the sum of first ‘n’ natural numbers.
    */
    printf("\t\tCalculate the sum of first n natural numbers\n");
    printf("\t\t============================================\n");
    int num;
    do {
        printf("Enter the value of n: ");
        scanf("%d", &num);
    } while(num < 1);
    printf("The sum upto %d natural numbers is %d", num, sum(num));
    return 0;
}

int sum(int num) {
    if (num == 1) return num;
    return num + sum(num-1);
}