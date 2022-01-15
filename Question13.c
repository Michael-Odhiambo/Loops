//
// Created by michael on 03/01/2022.
//

/**
 * Write a program that displays a number entered by the user with its digits reversed.
 */

# include <stdio.h>

int main( void ) {

    int theNumber;

    printf( "Enter a number: " );
    scanf( "%d", &theNumber );

    do {
        printf( "%d", theNumber /= 10 );
        if ( theNumber == 0 )
            printf( "\n" );
    } while ( theNumber > 0 );

    return 0;
}

