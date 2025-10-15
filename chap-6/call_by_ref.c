#include <stdio.h>

int sum(int*, int*);


int main() {
    int x, y=7;
    printf("The sum while also changing the value is %d.\n", sum(&x, &y));
    printf("The changed variable is %d.", x);
    return 0;
}

int sum(int* a, int* b) {
    *a = 6;
    return *a+*b;
}