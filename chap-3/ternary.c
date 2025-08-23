#include <stdio.h>

int main()
{
    // condition ? expression-if-true : expression-if-false
    // Here "?" and ":" are called Ternary Operators
    int a = 345;
    int b = 650;
    a > b ? printf("A bigger") : printf("B bigger");
    return 0;
}