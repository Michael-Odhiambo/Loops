//
// Created by michael on 03/01/2022.
//

# include <stdio.h>

int main( void ) {

    for ( int i = 5, j = i - 1; i > 0, j > 0; --i, j = i - 1 )
        printf( "%d\n", i );

    return 0;
}

