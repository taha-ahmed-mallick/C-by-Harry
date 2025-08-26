#include <stdio.h>

void pattern(int);

int main() {
    /*
    Write a program using function to print the following pattern (first n lines)
    *
    * * *
    * * * * *
    */
    printf("\t\t\tPattern Generator\n");
    printf("\t\t\t=================\n");
    int lines;
    do {
        printf("How many lines do you want to print: ");
        scanf("%d", &lines);
    } while(lines < 1);
    pattern(lines);
    return 0;
}

void pattern(int lines) {
    for (int i = 1; i <= lines; i++) {
        for (int j = 1; j <= i; j++) printf("*");
        printf("\n");
    }
}