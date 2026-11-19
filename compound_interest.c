/*
 * File: compound_interest.c
 * Week 2 - Optional Task: Compound Interest Calculator
 * Description: Calculates compound interest using the formula:
 *              Amount = Principal * (1 + Rate/100)^Time
 *              Compound Interest = Amount - Principal
 *
 * Note: Uses a simple loop for power calculation (no math.h required).
 */

#include <stdio.h>

int main(void)
{
    double principal, rate, amount, compoundInterest;
    int time, i;

    /* Prompt for values */
    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    printf("Enter the time (in years): ");
    scanf("%d", &time);

    printf("Enter the rate of interest (%%): ");
    scanf("%lf", &rate);

    /* Calculate compound amount using iterative multiplication */
    amount = principal;
    for (i = 0; i < time; i++)
    {
        amount = amount * (1 + rate / 100.0);
    }

    compoundInterest = amount - principal;

    /* Display results */
    printf("\n----- Compound Interest -----\n");
    printf("Principal          : %.2f\n", principal);
    printf("Time (years)       : %d\n", time);
    printf("Rate (%%)           : %.2f\n", rate);
    printf("Amount             : %.2f\n", amount);
    printf("Compound Interest  : %.2f\n", compoundInterest);
    printf("-----------------------------\n");

    return 0;
}
