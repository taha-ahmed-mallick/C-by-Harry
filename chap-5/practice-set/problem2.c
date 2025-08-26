/* From Hand Book By Harry
3. Write a program to convert Celsius (Centigrade degrees temperature to
Fahrenheit).
*/

#include <stdio.h>
#include <ctype.h>

float toC(float temp, char unit)
{
    if (unit == 'c')
        return temp;
    if (unit == 'f')
        return (temp - 32) * 5.0 / 9.0;
    if (unit == 'k')
        return temp - 273.16;
    return temp;
}

float fromC(float c, char unit)
{
    if (unit == 'c')
        return c;
    if (unit == 'f')
        return c * 9.0 / 5.0 + 32;
    if (unit == 'k')
        return c + 273.16;
    return c;
}

int main()
{
    /*
    Write a function to convert Celsius temperature into Fahrenheit.c
    */
    printf("===Temperature Converter===\n");
    printf("Key:-\n");
    printf("Centigrade -> (c/C)\nFahrenheit -> (f/F)\nKelvin -> (k/K)\nExit -> (x/X)\n");
    float c, f, k;
    char from, to;
    while (1)
    {
        printf("Change unit from: ");
        scanf(" %c", &from);
        from = tolower(from);
        if (from != 'c' && from != 'f' && from != 'k')
            break;

        printf("Change unit to: ");
        scanf(" %c", &to);
        to = tolower(to);
        if (to != 'c' && to != 'f' && to != 'k')
            break;

        float temp;
        printf("Enter temperature: ");
        scanf("%f", &temp);

        c = toC(temp, from);
        float result = fromC(c, to);

        printf("\n\n\t\tThe temperature is %.2f %c\n\n", result, toupper(to));
    }
    printf("Program Exited");
    return 0;
}