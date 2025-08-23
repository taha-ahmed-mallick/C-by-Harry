#include <stdio.h>

int main() {
    int a = 9;
    int b = 2;
    float c = a/b;
    printf("The value of a/b is %f\n", c);
    // it will not be 4.5
    float d = a;
    c = d/b;
    printf("Now 4.5..... %.1f\n", c);
    // it will be 4.5
    int e = 6.7; //demotion
    printf("%d", e);
    float f  = 6; //promotion
    printf("%f", f);
    return 0;
}