#include <stdio.h>
#include <stdlib.h>

/*
Name: Kortney Menefee
PID: k4790190
Date: 01/24/19
Assignment Name: WhileCount
Instructor: R. Leinecker
*/

int main()
{
    /* Assign variables */
    int counter = 1;

    /* add to counter while the counter is under 16 */
    while(counter <= 16)
    {
        /* prints number and adds one */
        printf("The counter value is %d\n", counter);
        counter += 1;
    }

return 0;
}
