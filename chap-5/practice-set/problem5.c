#include <stdio.h>

int main() {
    /*
    What will the following line produce in a C program:
        int a = 4;
        printf("%d %d %d \n", a, ++a, a++);
    */
    // 4 5 5
    // 6 6 5
    // both are right
    int a = 4;
    printf("%d %d %d \n", a, ++a, a++);
    // https://www.youtube.com/watch?v=aZb0iu4uGwA&t=20400
    return 0;
}