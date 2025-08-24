#include <stdio.h>

int main() {
    /*
    Repeat problem8 using while loop.
    */
    int n, prod=1;
    printf("====Factorial Calcualtor====\n");
    printf("Enter an integer: ");
    scanf("%d", &n);
    while (n>0)
    {
        prod*=n;
        n--;
    }
    
    printf("\t\tThe factorial is: %d.\n", prod);
    return 0;
}