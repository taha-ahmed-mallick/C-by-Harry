/* From Hand Book By Harry
4. Write a program to calculate simple interest for a set of values representing
principal, number of years and rate of interest.
*/

#include <stdio.h>

int main()
{
    printf("=== Simple Interest Calculator ===\n");
    float p, r, t;
    while (1)
    {
        printf("Enter principle amount: ");
        scanf("%f", &p);
        printf("Enter per annum rate in percentage: ");
        scanf("%f", &r);
        printf("Enter years passed: ");
        scanf("%f", &t);

        printf("The value of simple interest is: %.2f\n", p * r * t / 100.0);

        char whattodo;
        printf("Press (x/X) to exit or (y/Y) to continue: ");
        scanf(" %c", &whattodo);

        while (whattodo != 'x' && whattodo != 'y')
        {
            printf("Enter valid code\n");
            printf("Press (x/X) to exit or (y/Y) to continue: ");
            scanf(" %c", &whattodo);
        }

        if (whattodo == 'x')
            break;
        printf("--x-- New Calculation --x--\n");
    }
    printf("Program Exited\n");
    return 0;
}