#include <stdio.h>

int main() {
    int a  = 3,
    b = 6,
    c = 9;
    printf("This should be 2 and it is... %d\n", a*b/c);
    printf("3b/2c+7a = %d", 3*b/2*c+7*a);
    // 3b/2c+7a
    // 3b/2c+7*3
    // 3b/2c+21
    // 3*6/2c+21
    // 18/2c+21
    // 9*9+21
    // 81+21
    // 102
    return 0;
}