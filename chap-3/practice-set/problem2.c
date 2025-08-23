#include <stdio.h>

int main()
{
    /*
    Write a program to determine whether a student has passed or failed. To pass, a
    student requires a total of 40% and at least 33% in each subject. Assume there
    are three subjects and take the marks as input from the user.
    */
    int mark1, mark2, mark3;
    printf("Enter the marks in 1st subject: ");
    scanf("%d", &mark1);
    printf("Enter the marks in 2nd subject: ");
    scanf("%d", &mark2);
    printf("Enter the marks in 3rd subject: ");
    scanf("%d", &mark3);
    if (!(mark1 >= 0 && mark1 <= 100) || !(mark2 >= 0 && mark2 <= 100) || !(mark3 >= 0 && mark3 <= 100))
    {
        printf("Invalid range of marks in one of the subject\n");
        printf("\t\tProgram exited.\n");
        return 0;
    }
    if (mark1 < 33 || mark2 < 33 || mark3 < 33) {
        printf("You failed in one of the individual subject.");
        return 0;
    }
    float avg = (mark1+mark2+mark3)/3.0;
    if (avg < 40) {
        printf("Your average is less than 40%%, which is minimum to pass.");
    } else printf("Your average is %.2f.", avg);
    return 0;
}