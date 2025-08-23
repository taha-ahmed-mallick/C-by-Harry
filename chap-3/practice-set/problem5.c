#include <stdio.h>

int main() {
    /*
    Write a program to determine whether a character entered by the user is
    lowercase or not.
    */
    char ch;
    printf("Enter a character (A-Z/a-z): ");
    scanf("%c", &ch);
    // CASE   ASCII
    // A-Z -> 65-90
    // a-z -> 97-122
    if (ch >= 65 && ch <= 90) {
        printf("This is an uppercase letter.");
    } else if (ch >= 97 && ch <= 122) {
        printf("This is a lowercase letter.");
    } else {
        printf("The character entered is not an alphabet.");
    }
    return 0;
}