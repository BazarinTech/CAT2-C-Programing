/*
NAME: BAZARIN NGIGI WANYORO
REGESTRATION NUMBER:CT101/G/29270/25
PROGRAM DESCRIPTION:TAX RATE
*/

#include <stdio.h>

int main() {
    float grossPay, taxes;

    // Prompt user for gross pay input
    printf("Enter gross pay: ");
    scanf("%f", &grossPay);

    // Calculate taxes
    if (grossPay <= 600) {
        taxes = 0.15 * grossPay;
    } else {
        taxes = 0.15 * 600 + 0.20 * (grossPay - 600);
    }

    // Print the taxes
    printf("Taxes: $%.2f\n", taxes);

    return 0;
}
