//
// Created by michael on 03/01/2022.
//

/**
 * Write a program that finds the largest in a series of numbers entered by the user. The program must prompt the
 * user to enter numbers one by one. When the user enters 0 or negative number, the program must display the largest
 * non-negative number entered.
 */

# include <stdio.h>

int main( void ) {

    float currentNumber = 0.0f, largestNumber = 0.0f;

    printf( "Enter a number: " );
    scanf( "%f", &currentNumber );

    while ( currentNumber > 0 ) {
        if ( currentNumber > largestNumber )
            largestNumber = currentNumber;
        printf( "Enter a number: " );
        scanf( "%f", &currentNumber );
    }
    printf( "The largest number entered was %.2f\n", largestNumber );

    return 0;
}

