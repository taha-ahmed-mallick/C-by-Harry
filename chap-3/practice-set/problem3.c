#include <stdio.h>

int main() {
    /*
    Calculate income tax paid by an employee to the government as per the slabs
    mentioned below:
    Income Slab Tax
    2.5 – 5.0L 5%
    5.0L - 10.0L 20%
    Above 10.0L 30%
    Note that there is no tax below 2.5L. Take income amount as an input from the user.
    */
    int income;
    printf("Enter your income in PKR:");
    scanf("%d", &income);
    if (income<0) {
        printf("Error");
        return 0;
    }
    if (income < 250000) {
        printf("You don't have to pay any income tax.");
    } else if (income <= 500000){
        printf("Your income tax is %.2f, which is 5%% of your income.", (income-250000)*0.05);
    } else if (income <= 1000000) {
        printf("Your income tax is %.2f, which is 20%% of your income.", 12500+(income-500000)*0.2); // (500000-250000)*0.05+(income-500000)*0.2
    } else {
        printf("Your income tax is %.2f, which is 30%% of your income.", 112500+(income-1000000)*0.3); // (500000-250000)*0.05+(1000000-500000)*0.2+(income-1000000)*0.3
    }
    return 0;
}