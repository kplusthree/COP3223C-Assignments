#include <stdio.h>
#include <stdlib.h>

/*
Name: Kortney Menefee
PID: k4790190
Date: 01/20/19
Assignment Name: AskForStartEndAndIncrement
Instructor: R. Leinecker
*/

int main()
{

    /* Declaring variables */

    int counter, start, end, increment;

    /* Lets user input the start, end, and increment */

    printf("This program lets you count by whole numbers.\nStarting Number?");
    scanf("%d", &start);
    printf("Ending Number?");
    scanf("%d", &end);
    printf("Increment?");
    scanf("%d", &increment);

    /* prints output */

    for(counter=start; counter<=end; counter+=increment)
    {
        printf("The counter is now %d\n", counter);
    }

return 0;
}
