#include <stdio.h>
#include <stdlib.h>

/*
Name: Kortney Menefee
PID: k4790190
Date: 01/24/19
Assignment Name: DoWhileCount
Instructor: R. Leinecker
*/

int main()
{
    /* assign variables */
    int counter = 1;

    /* print the counter and add 1... */
    do
    {
        printf("The counter value is %d\n", counter);
        counter += 1;
    }
    while(counter <= 16); /* ... until the counter reaches 16 */

return 0;
}
