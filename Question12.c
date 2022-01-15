//
// Created by michael on 03/01/2022.
//

/**
 * Write a program that asks the user to enter a fraction, then reduces the fraction to lowest terms.
 */

# include <stdio.h>

int main( void ) {

    int numerator, denominator;

    printf( "Enter a fraction ( a/b ): " );
    scanf( "%d/%d", &numerator, &denominator );

    for ( int i = 2; i <= numerator; i++ ) {
        if ( numerator % i == 0 && denominator % i == 0 ) {
            numerator /= i;
            denominator /= i;
        }
    }

    printf( "In lowest terms: %d/%d\n", numerator, denominator );

    return 0;
}

