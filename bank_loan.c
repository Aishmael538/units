/*
 * File: bank_loan.c
 * Week 2 - Task 2: Bank Loan Program
 * Description: Determines whether a customer qualifies for a loan.
 *              Qualification criteria:
 *                - Age >= 21 years
 *                - Annual income >= KSh 21,000
 */

#include <stdio.h>

int main(void)
{
    int age;
    double annualIncome;

    /* Prompt for customer details */
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your annual income (in Kenya shillings): ");
    scanf("%lf", &annualIncome);

    /* Check loan eligibility */
    if (age >= 21 && annualIncome >= 21000.0)
    {
        printf("\nCongratulations you qualify for a loan.\n");
    }
    else
    {
        printf("\nUnfortunately, we are unable to offer you a loan at this time.\n");
    }

    return 0;
}
