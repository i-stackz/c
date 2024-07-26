/*
    Source: Udemy - C Programming for Beginners - Master the C Language

    Description: Create a C program that displays the byte size of basic data types supported in C.
    Author: iStackz
    Date: 7/15/2024

    RULES:


*/

// directives
#include <stdio.h>

// main function.
int main(void)
{
    // declare variables
    int sizeOfInt;
    float sizeOfFloat;
    char sizeOfChar;
    double sizeOfDouble;
    long sizeOfLong;
    long long sizeOfLongLong;
    long double sizeOfLongDouble;

    // display output. - the format string of sizeof is %zu
    printf("size of an int is: %zu\n", sizeof(sizeOfInt));
    printf("size of a float is: %zu\n", sizeof(sizeOfFloat));
    printf("size of a char is: %zu\n", sizeof(sizeOfChar));
    printf("size of a double is: %zu\n", sizeof(sizeOfDouble));
    printf("size of long is: %zu\n", sizeof(sizeOfLong));
    printf("size of long long is: %zu\n", sizeof(sizeOfLongLong));
    printf("size of long double is: %zu\n", sizeof(sizeOfLongDouble));

    // exit successfully
    return 0;
}
