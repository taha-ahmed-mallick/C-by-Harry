#include <stdio.h>

float weight(float);

int main() {
    /*
    Write a function to calculate force of attraction on a body of mass ‘m’ exerted by
    earth. Consider g = 9.8m/s2.
    */
    float mass;
    printf("Enter the mass of the body (kgs): ");
    scanf("%f", &mass);
    printf("The weight of the body is, %f", weight(mass));
    return 0;
}

float weight(float mass) {
    return mass * 9.8;
}