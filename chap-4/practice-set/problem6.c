#include <stdio.h>

int main() {
    /*
    Write a program to implement program 5 using ‘for’ and ‘do-while’ loop.
    */
    int sum = 0;
    for (int i = 1; i < 11; i++) {
        sum+=i;
    }
    printf("The sum of first 10 natural numbers using for loop is %d.\n", sum);
    int i = 1;
    sum = 0;
    do {
        sum+=i;
        i++;
    } while (i<11);
    printf("The sum of first 10 natural numbers using do while loop is %d.", sum);
    return 0;
}