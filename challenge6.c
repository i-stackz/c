/*
    Description: Create a guess the number game
    generate a random number that is from 0 to 20
    user will have 5 tries


    Source: Udemy - C Programming for Beginners - Master the C Language: Section 7 Challenge #2

    Author: iStackz
    Date: 7/26/24

*/


//pre-processor directives
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// main function
int main()
{

    // declare
    time_t t;
    srand((unsigned) time(&t));

    // variables
    int userInput;
    int tries = 5;
    int randomNum = rand() % 21;
     

    // while loop to run until tries = 0
    while(tries != 0)
    {
        // display message and prompt for input
        printf("\nEnter a number from 0 through 20: ");
        scanf(" %d", &userInput);

        // validate user input
        if(userInput < 0 || userInput > 20)
        {
            printf("Error! select a number that is from the given range, try again!: \n");
            scanf(" %d", &userInput);
        }

        // check user input against random number
        if(userInput > randomNum)
        {
            printf("Your guess was too high, try again!\n");
            --tries;
            printf("You have %d guesses left\n", tries);
        }
        else if(userInput < randomNum)
        {
            printf("Your guess was too low, try again!\n");
            --tries;
            printf("You have %d guesses left\n", tries);
        }
        else if(userInput == randomNum)
        {
            printf("Congratulations! You've guessed the number correctly.\n\n");
            break;
        }
    }

    // display message
    printf("\n\nLooks like you are out of guesses. You lose!");

    // exit successfully
    return 0;
}