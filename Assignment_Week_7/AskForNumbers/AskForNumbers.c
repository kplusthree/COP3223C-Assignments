#include <stdio.h>
#include <stdlib.h>

/*
Name: Kortney Menefee
PID: k4790190
Date: 02/24/19
Assignment Name: AskForNumbers
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


    // displays program information
    printf("This program will let you enter a list of numbers into an array.\n");
    printf("It will then display all of the numbers,\n");
    printf("and then display the average of all the numbers.\n\n");

    // gets user input
    int choice = getChoice();
    printf("You said you would like %d numbers\n", choice);

    // user enters the numbers and stores them into array
    for(i=0; i<choice; i++)
    {
        printf("Please enter a number: ");
        scanf("%d", &numbers[i]);
    }

    // displays the numbers and calculates the sum of all numbers
    for(i=0; i<choice; i++)
    {
        printf("Number %d is %d\n", i + 1, numbers[i]);
        total += numbers[i];
    }

    // calculates average
    average = total / choice;
    printf("The average is %d\n", average);

return 0;
}
