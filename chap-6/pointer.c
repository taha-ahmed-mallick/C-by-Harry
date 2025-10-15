#include <stdio.h>

int main() {
    int i = 72;
    int k = i;
    int* j = &i; //j is an integer pointing to i
    printf("%d %d\n", *j, k);
    i = 83;
    printf("%d %d\n", *j, k); // j is basically not an integer
    printf("The address of i is %p\n", &i);
    printf("The address of i is %u\n", &i); //to view it as an unsigned int
    printf("The value of j is %p\n", j);
    printf("The value at adress of i is %d\n", *j);
    printf("The value at adress of i is %d\n", *(&i));
    return 0;
}