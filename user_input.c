/*
 * File: user_input.c
 * Week 1 - Task 2: Program with User Input
 * Description: Prompts the user for height, bank balance and phone number,
 *              then displays the entered values in a clear format.
 * Data types used:
 *   - float  for height (meters or centimeters)
 *   - double for bank balance (Kenya shillings)
 *   - long long for phone number (to handle long numbers safely)
 */

#include <stdio.h>

int main(void)
{
    float height;           /* Height in meters or centimeters */
    double bankBalance;     /* Bank balance in Kenya shillings */
    long long phoneNumber;  /* Phone number */

    /* Prompt and read height */
    printf("Enter your height (in meters or centimeters): ");
    scanf("%f", &height);

    /* Prompt and read bank balance */
    printf("Enter your bank balance (in Kenya shillings): ");
    scanf("%lf", &bankBalance);

    /* Prompt and read phone number */
    printf("Enter your phone number: ");
    scanf("%lld", &phoneNumber);

    /* Display the collected information clearly */
    printf("\n----- Your Details -----\n");
    printf("Height       : %.2f\n", height);
    printf("Bank Balance : KSh %.2f\n", bankBalance);
    printf("Phone Number : %lld\n", phoneNumber);
    printf("------------------------\n");

    return 0;
}
