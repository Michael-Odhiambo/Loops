//
// Created by michael on 03/01/2022.
//

/**
 * Write a program that prompts the user to enter a series of dates and then prints the earliest date after
 * the user quits.
 */

# include <stdio.h>

int main( void ) {

    int currentDay, currentMonth, currentYear, earliestDay, earliestMonth, earliestYear;

    printf( "Enter a date (mm/dd/yy): " );
    scanf( "%d/%d/%d", &currentMonth, &currentDay, &currentYear );

    earliestDay = currentDay;
    earliestMonth = currentMonth;
    earliestYear = currentYear;

    while ( currentMonth > 0 ) {

        printf( "Enter a date (mm/dd/yy): " );
        scanf( "%d/%d/%d", &currentMonth, &currentDay, &currentYear );

        if ( currentMonth <= 0 )
            break;

        if ( earliestYear <= currentYear ) {
            if ( earliestYear == currentYear ) {  // The years are equal, we need to check the months.
                if ( earliestMonth <= currentMonth ) {
                    if ( earliestMonth == currentMonth ) {  // The months are equal, check the days.
                        if ( earliestDay > currentDay ) {
                            earliestYear = currentYear;
                            earliestMonth = currentMonth;
                            earliestDay = currentDay;
                        }
                    }
                }
                else {  // The currentMonth comes before the earliestMonth. Update the earliest date.
                    earliestYear = currentYear;
                    earliestMonth = currentMonth;
                    earliestDay = currentDay;
                }
            }
        }
        else {  // The current year comes before the earliest year, so update the earliest date.
            earliestMonth = currentMonth;
            earliestDay = currentDay;
            earliestYear = currentYear;
        }
    }

    printf( "%d/%d/%d is the earliest date.\n", earliestMonth, earliestDay, earliestYear );

    return 0;
}

