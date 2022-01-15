//
// Created by michael on 03/01/2022.
//

/**
 * Write a program that prompts the user to enter a number n, the prints all even squares between 1 and n.
 */

# include <stdio.h>

int main( void ) {

    int n;

    printf( "Enter n: " );
    scanf( "%d", &n );

    for ( int i = 2; i <= n; i += 2 ) {
        if ( i * i > n )
            break;
        printf( "%d\n", i * i );
    }

    return 0;
}

