//
// Created by michael on 03/01/2022.
//

# include <stdio.h>

int main( void ) {

    int i = 1;

    while ( i <= 128 ) {
        printf( "%d\n", i );
        i *= 2;
    }

    return 0;
}