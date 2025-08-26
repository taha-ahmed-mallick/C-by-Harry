#include <stdio.h>

// Prototyping
int sum(int, int);

// Defining
int sum(int x, int y) /*parameters*/{
    printf("The sum is: %d\n", x+y);
    return x+y;
}

int main() {
    int a = 5, b = 6;
    int c = sum(a, b);/*Arguments */ // Function call

    int a1 = 58, b1 = 45;
    int c1 = sum(a1,b1);

    int a2 = 12, b2 = 5;
    int c2 = sum(a2,b2);

    printf("Return values: %d, %d, %d.", c, c1, c2);

    return 0;
}