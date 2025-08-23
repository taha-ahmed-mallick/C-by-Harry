#include <stdio.h>

int main()
{
    int a;      // Declare an integer variable 'a'
    float b;    // Declare a float variable 'b'
    int i = 10; // Declare and initialize 'i' with 10
    int j = i;  // Declare 'j' and initialize with 'i'
    // INVALID
    // int a = 2, b = 3, c = 4, d = 5; // Declare and initialize multiple variables
    int j1 = a + j - i; // Valid: use previously defined variables
    // Invalid: 'a' is used before declaration
    // float b = a + 3;
    // float a = 1.1;
    // Valid: Assigning the same value to multiple variables
    int c, d;
    a = b = c = d = 30; // a, b, c, d all equal to
    printf("%f", 5+9);
    return 0;
}