/*
    Udemy - C Programming for Beginners - Master the C Language

    Description: Create a C program that converts the number of minutes to days and years
    Author: iStackz
    Date: 7/12/2024

    RULES:
        1. prompt user for amount of minutes
        2. display output showing what the user inputted and the conversion of minutes to days and years
*/

// directives
#include <stdio.h>

// main function, argument/parameter is set to void because it will not be accepting any arguments.
int main(void)
{
    // declare variables
    int minutes;
    double minutesInYear;
    double minutesInDay;
    double years;
    double days;


    // prompt for user input
    printf("Enter number of minutes: ");
    scanf("%d", &minutes);

    // initialize variables
    minutesInYear = 525600;
    minutesInDay = 1440;
    days = (double) minutes / minutesInDay; // math to calculate days. Used typecasting to change int (minutes) to double
    years = (double) minutes / minutesInYear; // math to calculate years. used typecasting to change int (minutes) to double

    // display output
    printf("You've entered %d minutes\n", minutes);
    printf("conversion of %d minutes to days: %.2f\n", minutes, days);
    printf("conversion of %d minutes years: %.2f\n", minutes, years);

    // exit successfully
    return 0;

    /*
        NOTES:

            1 hour = 60 minutes
            1 day = 60 * 24 --> 1440 mins
            1 year = 1440 * 365 --> 525,600 mins
    */
}
