/* From Hand Book By Harry
2. Calculate the area of a circle and modify the same program to calculate the
volume of a cylinder given its radius and height.
*/
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int main() {
    int r = 6;
    float area = M_PI*pow(r, 2);
    printf("The area of cricle with radius %d is %f\n", r, area);
    int h = 5;
    float volume = h * area;
    printf("The volume of Cylinder with radius %d and height %d is %f", r, h, volume);
    return 0;
}