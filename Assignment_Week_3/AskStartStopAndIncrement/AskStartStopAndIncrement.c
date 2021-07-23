#include <stdio.h>
#include <stdlib.h>

/*
Name: Kortney Menefee
PID: k4790190
Date: 01/24/19
Assignment Name: AskStartStopAndIncrement
Instructor: R. Leinecker
*/

int main()
{
    /* assign variables */
    int start, end, increment;

    /* ask user for start, end, and increment */
    printf("Starting number? ");
    scanf("%d", &start);
    printf("Ending number? ");
    scanf("%d", &end);
    printf("Increment number? ");
    scanf("%d", &increment);

    /* while the user input is less than the end input, add the increment */
    while(start <= end)
    {
        printf("\nThe counter value is %d", start);
        start += increment;
    }

return 0;
}
