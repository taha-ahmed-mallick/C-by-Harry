#include <stdio.h>

int main() {
    // Explain step by step evaluation of 3*x/y – z+k, where x=2, y=3, z=3, k=1
    int x = 2, y = 3, z = 3, k = 1;
    float a = 3*x/y - z+k;
    // 3*x/y - z+k
    // 3*2/y - 3 + 1
    // 6/3 - 3+1
    // 2-3+1
    // 0
    printf("%f", a);
    return 0;
}