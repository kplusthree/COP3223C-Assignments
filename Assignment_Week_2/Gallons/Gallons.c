#include <stdio.h>
#include <stdlib.h>

/*
Name: Kortney Menefee
PID: k4790190
Date: 01/20/19
Assignment Name: Gallons
Instructor: R. Leinecker
*/

int main()
{

    /* Declaring variables */

    float gallons, liters, milliliters;

    /* Asks user to input an amount in gallons */

    printf("Welcome! This program converts gallons to liters and milliliters.\nHow many gallons would you like to convert?:");
    scanf("%f", &gallons);

    /* Converts gallons gallons to liters to milliliters */

    liters = gallons * 3.785;
    milliliters = liters * 1000;

    printf("\n%.3f gallons converts to %.3f liters and %.3f milliliters.", gallons, liters, milliliters);

return 0;
}
