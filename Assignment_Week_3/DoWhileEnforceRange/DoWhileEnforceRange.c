#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Name: Kortney Menefee
PID: k4790190
Date: 01/24/19
Assignment Name: DoWhileEnforceRange
Instructor: R. Leinecker
*/

int main()
{
    /* assign variables */
    int input;
    int min, max;

    /* user inputs minimum and maximum values */
    printf("Minimum value? ");
    scanf("%d", &min);
    printf("Maximum value? ");
    scanf("%d", &max);

    /* program will ask user to input a number until they input a number that is between the min and max */
    do
    {
        printf("Please enter a number from %d to %d ", min, max);
        scanf("%d", &input); /* program will continue to print command until user follows directions */
    }
    while(input < min || input > max);

    /* if the user correctly input a value the program will finish */
    printf("Your input was %d!", input);

return 0;
}
