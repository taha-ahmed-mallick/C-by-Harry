#include <stdio.h>
#include <math.h>

int main() {
    float len;
    printf("Enter length of square: ");
    scanf("%f", &len);
    printf("The area of the square is %f sqr. units", pow(len, 2));    
    return 0;
}