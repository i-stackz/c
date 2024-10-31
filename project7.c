/*
 * Source: Project 7 from Chapter 2 of C Programming a Modern Approach 2nd Edition by K.N. King:  pdf page 59
 * 
 * Description: 
 * 		Write a program that asks the user to enter a U.S. dollare amount and then shows you how to pay that amount
 * 		using the smallest number of $20, $10, $5, and $1 bills
 *
 * Author: iStackz
*/

// Pre-processor directives
#include <stdio.h>
#include <stdlib.h>

// main function
int main(int argc, char *argv[])
{
    // variables
    int amount; // will contain user's input (dollar amount)
    int leftover;
    int number_of_twenties;
    int number_of_tens;
    int number_of_fives;
    int number_of_ones;

    // prompt user for input
    printf("\nEnter a dollar amount: ");
    scanf(" %d", &amount);
    printf("\nYou have entered %d", amount);
    printf("\nI will now tell you how many $20s, $10s, $5s and $1s you need to reach the dollar amount specified: ");

    number_of_twenties = (amount / 20);
    leftover = amount - (20 * number_of_twenties);
    printf("\nThe number of $20s is %d ($%d)", number_of_twenties, (number_of_twenties * 20));

    if(leftover > 0)
    {
         amount = leftover;
         number_of_tens = (amount / 10);
         leftover = amount - (10 * number_of_tens);

         printf("\nThe number of $10s is %d ($%d)", number_of_tens, (number_of_tens * 10));

         if(leftover > 0)
         {
            amount = leftover;
            number_of_fives = (amount / 5);
            leftover = amount - (5 * number_of_fives);

            printf("\nThe number of $5s is %d ($%d)", number_of_fives, (number_of_fives * 5));

            if(leftover > 0)
            {
                amount = leftover;
                number_of_ones = (amount / 1);
                leftover = amount - (1 * number_of_ones);

                printf("\nThe number of $1s is %d ($%d)", number_of_ones, (number_of_ones * 1));
                if(leftover > 0)
                {
                    printf("\nError! calculations is off, current balance is %d", leftover);
                    exit(1);
                }
            }
         }
    }
        
    
    // test
    
    return 0;
}
