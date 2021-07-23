#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/*
Name: Kortney Menefee
PID: k4790190
Date: 04/07/19
Assignment Name: States
Instructor: R. Leinecker
*/

// establish variables
struct CapInfo
    {
        char state[50], city[50];
        float longitude, latitude;
    };

// function to read through each line
void readLine(char line[], int limit, FILE *fp)
{
    fgets(line, limit, fp);
    strtok(line, "\n"); // gets rid of extra space
}

// function to read through and store each state and its information
void readNextCity (struct CapInfo *c, FILE *fp)
{
    char tmp[50];
    readLine(c->state, 50, fp); // puts the state from data into a variable
    readLine(c->city, 50, fp); // same for city
    readLine(tmp, sizeof(tmp), fp);// same for latitude
    c->latitude = atof(tmp); // converts string to float
    readLine(tmp, sizeof(tmp), fp); // same for longitude
    c->longitude = atof(tmp);
    return;
}

// function to open file
FILE *openFile(char fileName[], char mode[])  // This is working
{
    FILE *fp;
    fp = fopen(fileName, mode); // reads file
    if(fp == NULL) // if it can't find the file, display the error to user
    {
        printf("Could not open the file.\n");
        exit(0);
    }
    return fp;
}

// function for searching through the text file
void doSearch(char state[], char city[])
{
    struct CapInfo c;
    FILE *fp = openFile("data.txt", "r");
    while(!feof(fp)) // while not at the end
    {
        readNextCity(&c, fp); // read the file, and if the user input matches one of the states display its info
        if(stricmp(state, c.state) == 0 && stricmp(city, c.city) == 0)
        {
            printf("State:%s\n", c.state);
            printf("City:%s\n", c.city);
            printf("Latitude:%f\n", c.latitude);
            printf("Longitude:%f\n", c.longitude);
            return;
        }
    }
    printf("Sorry no state or city was found.\n"); // if it can't find the user input in the file, display error to user
    fclose(fp);
    return;
}

int main()
{
    // establish variables
    char state[50], city[50], answer[50];

    // search while the user inputs 'Y'
    do
    {
        // get user input
        printf("What state would you like to search for? ");
        gets(state);
        printf("What city would you like to search for? ");
        gets(city);

        doSearch(state, city);

        printf("Would you like to search again? (Y/N) ");
        gets(answer);
    }
    while(toupper(answer[0] == 'Y'));

    // at the very end give a thank you to the user
    printf("Thank you for using our incredible program!!!\n");

return 0;
}
