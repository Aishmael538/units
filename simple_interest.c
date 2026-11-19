/*
 * File: simple_interest.c
 * Week 2 - Optional Task: Simple Interest Calculator
 * Description: Calculates simple interest using the formula:
 *              Simple Interest = (Principal * Time * Rate) / 100
 */

#include <stdio.h>

int main(void)
{
    double principal, time, rate, simpleInterest;

    /* Prompt for values */
    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    printf("Enter the time (in years): ");
    scanf("%lf", &time);

    printf("Enter the rate of interest (%%): ");
    scanf("%lf", &rate);

    /* Calculate simple interest */
    simpleInterest = (principal * time * rate) / 100.0;

    /* Display result */
    printf("\n----- Simple Interest -----\n");
    printf("Principal        : %.2f\n", principal);
    printf("Time (years)     : %.2f\n", time);
    printf("Rate (%%)         : %.2f\n", rate);
    printf("Simple Interest  : %.2f\n", simpleInterest);
    printf("---------------------------\n");

    return 0;
}
