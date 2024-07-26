/*

    Description: Program that calculates your weekly pay
    Source: Challenge 5 from Udemy C Programming for Beginners - Master the C Language (section 7 challenge)

    Author: iStackz
    date: 7/25/2024

    Filename: weekly_pay.c
    Executable: weekly_pay.o

*/

// pre-processor directives
#include <stdio.h>


// main function
int main()
{
    // variables
    float basicPayRate, overtimeRate, taxRate1, taxRate2, taxRate3, paycheck, hoursWorked;

    // initialize variables
    basicPayRate = 12.00;
    overtimeRate = 1.5;
    taxRate1 = 0.15;
    taxRate2 = 0.20;
    taxRate3 = 0.25;
    paycheck = 0;

    // display output and prompt for user input
    printf("\n\nEnter hours worked for the week: ");
    scanf(" %f", &hoursWorked);

    // while loop that will run while hoursWorked is less than or equal to 0
    while (hoursWorked <= 0)
    {
        // display message and prompt for input
        printf("\nError! hours worked cannot be zero or less, try again!: ");
        scanf(" %f", &hoursWorked);
    }
    
    // perform calculation
    if ( hoursWorked > 40)
    {
        /* test
        // overtime paycheck
        float regularPay = (basicPayRate * 40);
        float overtimePay = (overtimeRate * basicPayRate) * (hoursWorked - 40);
        paycheck = regularPay + overtimePay;
        */

        // overtime paycheck
        paycheck = ( (basicPayRate * 40) + ( (overtimeRate * basicPayRate) * (hoursWorked - 40) ) );
    }
    else
    {
        // regular paycheck
        paycheck = hoursWorked * basicPayRate;
    }

    // display message
    printf("\nYour paycheck before taxes is %.2f (gross) \n", paycheck);

    // calculate the taxes
    if ( (paycheck - 300) >= 0 )
    {
        // tax deduction on the 1st 300 dollars from paycheck
        paycheck = paycheck - (300 * taxRate1);

        // test 1
        printf("\npaycheck balance after 1st tax rate is %.2f", paycheck);
    }

    // tax deduction on the 1st 150 dollars from paycheck and after the 1st tax deduction.
    if ( (paycheck - 150) >= 0)
    {
        // tax deduction on the 1st 150 dollars from check after the 1st deduction
        paycheck = paycheck - (150 * taxRate2);

        // test 2
        printf("\npaycheck balance after 2nd tax rate is %.2f", paycheck);
    }

    // tax deduction on the remaining paycheck amount for 25%
    if ( paycheck > 0 )
    {
        // tax deduction on the remaining paycheck balance
        paycheck = paycheck - (paycheck * taxRate3);

        // test 3
        printf("\npaycheck balance after 3rd tax rate is %.2f\n", paycheck);
    }

    // display output
    printf("\nYour paycheck after taxes is %.2f (net)\n\n", paycheck);

    // exit successfully
    return 0;
}