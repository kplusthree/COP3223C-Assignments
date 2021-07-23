#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Name: Kortney Menefee
PID: k4790190
Date: 02/07/19
Assignment Name: GetPI
Instructor: R. Leinecker
*/

// create PI function
float getPI()
{
    float PI;
    PI = M_PI; // assign variable the value of PI
    return PI; // return variable
}

int main()
{
    //establish variables
    float myPI;
    myPI = getPI(); // return value of getPI to myPI
    printf("The value of PI is %f\n", myPI);

return 0;
}
