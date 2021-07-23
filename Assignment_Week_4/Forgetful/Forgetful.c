#include <stdio.h>
#include <stdlib.h>

/*
Name: Kortney Menefee
PID: k4790190
Date: 02/03/19
Assignment Name: Forgetful
Instructor: R. Leinecker
*/

int main()
{
    // Establish variables
    float driveTime, allowedTime, goofedTime;
    float extraTime, totalTime;

    // User inputs time it takes to drive, total time, and how long into the drive they are
    printf("Please enter the amount of time (in minutes) that it takes to drive from home to work: ");
    scanf("%f", &driveTime);
    printf("Please enter the amount of time (in minutes) that you allow for your drive from home to work: ");
    scanf("%f", &allowedTime);
    printf("Please enter the amount of time (in minutes) since you left home: ");
    scanf("%f", &goofedTime);

    extraTime = allowedTime - driveTime; // Calculates how much time they have left after driving
    totalTime = (goofedTime * 2) + driveTime; // Calculates calculates if the user will have any time left over after forgetting

    // Explains to the user how much time they normally would have to get to work, and how long their trip will be
    printf("\nUnder normal circumstances when you haven't forgotten anything you have %.2f minutes to spare when you get to work.\n", extraTime);
    printf("If you go home now, it will take you %.2f minutes to get home, and then another %.2f minutes to get to work.\n", goofedTime, driveTime);
    printf("That will make your total travel time %.2f.\n", totalTime);

    // Tells user whether or not they'll be late to work
    if( allowedTime - totalTime > 0)
    {
        printf("\nYou will arrive at work on time if you turn around and go home to get the forgotten item");
    }
    else
    {
        printf("\nYou will arrive at work late if you turn around and go home to get the forgotten item");
    }

return 0;
}
