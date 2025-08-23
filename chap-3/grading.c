#include <stdio.h>

int main()
{
    /* Quick Quiz: Write a program to find grade of a student given his marks based on below:
        90 – 100 => A
        80 – 90 => B
        70 – 80 => C
        60 – 70 => D
        50 – 60 => E
        <50 => F */
    char grade;
    int marks;
    printf("Enter marks (0-100): ");
    scanf("%d", &marks);
    grade = marks >= 90 ? 'A' :
        marks >= 80 ? 'B' :
        marks >= 70 ? 'C' :
        marks >= 60 ? 'D' :
        marks >= 50 ? 'E' :
        marks>=0 ? 'F' : '.';
    printf("Your grade is %c", grade);
    return 0;
}