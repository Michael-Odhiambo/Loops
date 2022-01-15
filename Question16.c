//
// Created by michael on 03/01/2022.
//

/**
 * The value of the mathematical constant can be expressed as an infinite series:
 *        e = 1 + 1/1! + 1/2! + 1/3! + .........
 *
 * Write a program that approximates e by computing the value of
 *        1 + 1/1! + 1/2! + 1/3! + ............. + 1/n!
 *
 * where n is an integer entered by the user.
 */

# include <stdio.h>

int main( void ) {

    float e;
    int n;

    printf( "Enter n: " );
    scanf( "%d", &n );

    for ( int i = 1; i <= n; i++ ) {
        unsigned long iFactorial = i;
        float currentSum;
        for ( int j = i - 1; j > 0; j-- ) {
            iFactorial *= j;
        }

        printf( "%d factorial is %ld\n", i, iFactorial );

        currentSum = 1.0f / iFactorial;
        e += currentSum;
    }

    printf( "e: %f\n", e );

    return 0;
}

