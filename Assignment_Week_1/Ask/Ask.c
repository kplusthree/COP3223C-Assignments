#include <stdio.h>
#include <stdlib.h>

/*
Name: Kortney Menefee
PID: k4790190
Date: 01/13/19
Assignment Name: Ask
Instructor: R. Leinecker
*/

int main()
{
    /* Establishes the variables */

    int width;
    int height;

    /* Has the user enter a width and height */

    printf("Please enter a width:");
    scanf("%d", &width);

    printf("Please enter a height:");
    scanf("%d", &height);

    /* Displays the width and height the user entered */

    printf("\nThank You!\nYou entered a width of %d and a height of %d.\n", width, height);

return 0;
}
