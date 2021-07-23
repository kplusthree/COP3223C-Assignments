#include <stdio.h>
#include <stdlib.h>

/*
Name: Kortney Menefee
PID: k4790190
Date: 02/07/19
Assignment Name: GetRandom
Instructor: R. Leinecker
*/

// create random number function
getRandomNumber()
{
    int rnd;
    srand(time(0)); // random number based on time
    rnd = rand() % 100 + 1;
    return rnd; // return the value
}

int main()
{
    // establish variables
    int rnd;
    rnd = getRandomNumber(); // get the value from the function
    printf("The random number generated from GetRandom is %d.\n", rnd);

return 0;
}
