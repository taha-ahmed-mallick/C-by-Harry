#include <stdio.h>

int main() {
    // declaration & initialization
    int a = 1;
    // separated
    float b;
    b = 1.4          ;

    // char type
    char grade = 'A'
    // printf("%d", grade); to print ascii code
    ;
    char emoji = '😁';
    printf("a: %d\nb: %f\ngrade: %c\n", a, b, grade);
    printf("Will this work 🤷‍♂️\n");
    printf("Printing the variables....\n");
    printf("%c\n", emoji);
    printf("Emoji printed\n");
    printf("Few error, char-type doesn't supports UTF-8 encoding");
    return 0;
}