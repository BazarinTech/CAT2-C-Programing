/*
NAME: BAZARIN NGIGI WANYORO
REGESTRATION NUMBER:CT101/G/29270/25
PROGRAM DESCRIPTION:HOURS WORKED
*/


#include <stdio.h>

int main() {
    float hoursWorked, hourlyWage, grossPay;

    // Prompt user for input
    printf("Enter hours worked in a week: ");
    scanf("%f", &hoursWorked);

    printf("Enter hourly wage: ");
    scanf("%f", &hourlyWage);

    // Calculate gross pay
    if (hoursWorked <= 40) {
        grossPay = hoursWorked * hourlyWage;
    } else {
        grossPay = 40 * hourlyWage + (hoursWorked - 40) * (1.5 * hourlyWage);
    }

    // Print the gross pay
    printf("Gross pay: $%.2f\n", grossPay);

    return 0;
}
