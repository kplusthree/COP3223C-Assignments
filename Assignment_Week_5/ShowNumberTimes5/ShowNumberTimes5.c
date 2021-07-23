#include <stdio.h>
#include <stdlib.h>

/*
Name: Kortney Menefee
PID: k4790190
Date: 02/07/19
Assignment Name: ShowNumberTimes5
Instructor: R. Leinecker
*/

// global variable so function can use the same variable as main to store user input
int number;

// multiply 5 function
int mult5AndShow()
{
    // establish variables
    int sum;
    sum = number * 5; // multiplies stored user input
    printf("The number %d multiplied by 5 is %d.\n", number, sum);
}

int main()
{
    // user input
    printf("What number would you like to multiply by 5? ");
    scanf("%d", &number);

    mult5AndShow(); // calls function

return 0;
}
