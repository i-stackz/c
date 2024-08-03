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

// constants
#define BASICRATE 12.00
#define OVERTIMERATE 1.5
#define TAXRATE1 0.15
#define TAXRATE2 0.20
#define TAXRATE3 0.25

// main function
int main()
{
    // variables
    float hoursWorked, gross, net, tax1, tax2, tax3, paycheck;

    // program title
    printf("\n\n** Weekly Pay Calculator **\n\n");

    // display message and prompt for input
    printf("\nEnter hours worked for the week: ");
    scanf(" %f", &hoursWorked);

    // validate user input
    while (hoursWorked <= 0)
    {
        // display message
        printf("Error! hours worked cannot be less than 0. Try again!: ");
        scanf(" %f", &hoursWorked);
    }

    //==> calculate check <==//

    // gross income (if worked 40 hrs or less)
    if(hoursWorked <= 40)
    {
        // hours worked * 12/hr = gross pay
        gross = hoursWorked * BASICRATE;
    }
    else // more than 40 hrs
    {
        // gross = regular check + extra hrs at overtime rate
        gross = (BASICRATE * 40) + ((hoursWorked - 40) * (BASICRATE * OVERTIMERATE));
    }

    //** calculate taxes **//

    // edited 8/3/2024
    
    // taxes on the 1st $300
    if(gross >= 300)
    {
        // tax1 = 300 * .15
        tax1 = (300 * TAXRATE1);
    }

    // taxes on the 1st $150 after the tax taken on the 1st $300
    if((gross - 300) >= 150)
    {
        // tax2 = 150 * .20
        tax2 = (150 * TAXRATE2);
    }

    // taxes on the remaining amount after the taxes taken on $450
    if ((gross - 450) > 0)
    {
        // tax3 = (gross - 450) * .25
        tax3 = ((gross - 450) * TAXRATE3);
    }

    // calculate paycheck
    paycheck = gross - (tax1 + tax2 + tax3);

    // display messages
    printf("\n\nYour paycheck before taxes was $%.2f\n", gross);
    printf("Your paycheck after taxes is $%.2f\n", paycheck);
    printf("You have paid $%.2f in taxes this pay period\n\n", (tax1 + tax2 + tax3));   

/*
    // if gross is over 300       
    if(gross >= 300)
    {
        // tax on 1st 300 at .15
        tax1 = (300 * TAXRATE1);
        // calculate net to use on 2nd if statement
        net = gross - tax1;
    }

    // if after 1st deduction amount is greater than 150
    if(net >= 150)
    {
        // tax on 1st 150 at .20 after 1st deduction
        tax2 = (150 * TAXRATE2);
        // calculate net to use on 3rd if statement 
        net = net - tax2;
    }

    // if remaining amount is greater than 0
    if(net > 0)
    {
        // tax on any remaining amount at .25 after other two deductions
        tax3 = ((gross - 450) * TAXRATE3);
        // calculate net
        net = net - tax3; 
    }

    // calculate paycheck
    paycheck = gross - (tax1 + tax2 + tax3);



    // display message
    printf("\n\nYour paycheck before taxes is %.2f", gross);
    printf("\nYour paycheck after taxes is %.2f", net);
    printf("\nYou've been deducted %.2f in taxes\n\n", (gross - net));
*/
    // exit successfully
    return 0;
}