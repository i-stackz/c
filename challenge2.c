/*
    C Programming for Beginners - Master the C Language (Udemy)

    Challenge2: create a C program that displays the perimeter and area of a rectangle

    Author: iStackz
    Date: 7/11/2024

*/

// directive
#include <stdio.h>

// main function
int main() 
{
    // declare variables
    double width;
    double height;
    double perimeter;
    double area;

    // initialize variables
    width = 5.5;
    height = 10.5;
    perimeter = ((height + width) * 2);
    area = (width * height);


    // print out the values of the variaibles
    printf("The width equals %g\n", width);
    printf("The height equals %g\n", height);
    printf("The perimeter of the rectangle is %g\n", perimeter);
    printf("The area of the rectangle is %g\n", area);

    // exit successfully
    return 0;

}



    /*
        NOTES:

        Permimeter = height + width * 2
        area = width * height
    */
