/* From Hand Book By Harry
1. Write a C program to calculate area of a rectangle:
a. Using hard coded inputs.
b. Using inputs supplied by the user.
*/
#include <stdio.h>

int main() {
    int len, width;
    printf("~~Area of Rectangle Calculator~~\n");
    printf("Enter the length: ");
    scanf("%d", &len);
    printf("Enter the width: ");
    scanf("%d", &width);
    printf("The area of rectangle is: %d", len*width);
    return 0;
}