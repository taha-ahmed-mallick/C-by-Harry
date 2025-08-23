#include <stdio.h>

int main() {
    int a, b, yAND, yOR;
    while (1)
    {
        printf("=====Calculate Logical AND OR NOT values=====\n");
        printf("Enter values for input (1/0/else to exit)\n");
        printf("Enter value for A: ");
        scanf("%d", &a);
        printf("Enter value for B: ");
        scanf("%d", &b);
        if (a != 0 && a != 1 || b != 0 && b != 1) {
            break;
        }
        yAND = a && b;
        yOR = a || b;
        
        printf("The logical and value of a.b is %d\n", yAND);
        printf("The logical or value of a+b is %d\n", yOR);
        printf("The logical not value of a is %d\n", !a);
        printf("The logical not value of b is %d\n", !b);
    }
    return 0;
}