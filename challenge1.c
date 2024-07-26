/*
    C Programming for Beginners - Master the C Language (Udemy Course)

    Challenge 1

    Description: Create a C program that defines an enum type and uses that type to display the values of some variables
                 The program should create a enum type called Company and the valid values for this type are GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT
                 The program should display as output, the value of the three variables with each variable separated by a newline

                 example: 
                            XEROX = 0;
                            GOOGLE = 0;
                            EBAY = 4;

    Author: iStackz
    Date: 7/11/2024
*/

// directives
#include <stdio.h>


// main function
int main()
{

    // declarations
    enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT}; // declare a custom enum datatype with an identifier (name) of 'Company', that holds specific data i.e what is specified inside the {}

    enum Company myVariable, myVariable1, myVariable2; // declare three 'Company' enum type variables


    // initialize variables with the specified values (values must equal one of the values specified above in the curly braces)
    myVariable = XEROX;
    myVariable1 = GOOGLE;
    myVariable2 = EBAY;

    // print out the variables
    printf("%d\n%d\n%d\n", myVariable,myVariable1,myVariable2);

    // return value if ran successfully   
    return 0;

}
