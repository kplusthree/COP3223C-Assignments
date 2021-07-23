#include <stdio.h>
#include <stdlib.h>
#include <math.h> // min and max

/*
Name: Kortney Menefee
PID: k4790190
Date: 02/24/19
Assignment Name: RandomNumbers
Instructor: R. Leinecker
*/

// gets user input
int getChoice()
{
    int choose;
    do
    {
        printf("How many numbers would you like? "); // ask for input
        scanf("%d", &choose);
    }
    while(choose<1 || choose>200); // prints the statement if the user goes outside the bounds

    return choose; // returns the number the user chose
}

int main()
{
    // establish variables
    int numbers[200];
    int i, average;
    int total = 0;
    int rnd;
    srand(time(0));
    rnd = rand() % 10000 + 1; // establishes random number based on time
    int smallest = 1000000;
    int largest = -1000000;

    // displays program information
    printf("This program will let you enter a list of numbers into an array.\n");
    printf("It will then display all of the randomly assigned numbers,\n");
    printf("and then display the smallest, largest, and average of all numbers.\n\n");

    // gets user input
    int choice = getChoice();
    printf("You said you would like %d numbers\n", choice);

    // assigns random numbers and stores them into array
    for(i=0; i<choice; i++)
    {
        numbers[i] = rnd; // stores values
        rnd = rand() % 10000 + 1; // calls a new random number
        smallest = fmin(smallest, numbers[i]); // finds smallest
        largest = fmax(largest, numbers[i]); // finds largest
    }

    // displays the numbers and calculates the sum of all numbers
    for(i=0; i<choice; i++)
    {
        printf("Number %d is %d\n", i + 1, numbers[i]);
        total += numbers[i];
    }

    // calculates average
    average = total / choice;
    printf("The smallest is %d the largest is %d and the average is %d\n", smallest, largest, average);

return 0;
}
