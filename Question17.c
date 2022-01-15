//
// Created by michael on 03/01/2022.
//

/**
 * Write a program that prints a one-month calendar. The user specifies the number of day in the month and the day
 * of the week on which the month begins.
 */

# include <stdio.h>

int main( void ) {

    int numberOfDaysInTheMonth;
    int startingDayOfTheWeek;

    printf( "Enter number of days in the month: " );
    scanf( "%d", &numberOfDaysInTheMonth );

    printf( "Enter starting day of the week ( 1 = Sun, 7 = Sat ): " );
    scanf( "%d", &startingDayOfTheWeek );

    // Print any leading spaces.
    for ( int i = 1; i < startingDayOfTheWeek; i++ )
        printf( "   " );

    // Now print the calendar.
    for ( int i = 1; i <= numberOfDaysInTheMonth; i++ ) {
        printf( "%3d", i );
        if ( ( i - 1 + startingDayOfTheWeek ) % 7 == 0 )
            printf( "\n" );
    }
    printf( "\n" );

    return 0;
}

