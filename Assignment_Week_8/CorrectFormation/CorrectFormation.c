#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*
Name: Kortney Menefee
PID: k4790190
Date: 03/17/19
Assignment Name: CorrectFormation
Instructor: R. Leinecker
*/

void joinNames(char fname[], char lname[], char completeName[])
{
    // establish variables
    int i;
    int len1 = strlen(fname);
    int len2 = strlen(lname);

    // make a loop as long as the name minus the first letter
    for(i=1; i<len1; i++)
    {
        fname[i] = tolower(fname[i]); // make rest of name lowercase
    }
    fname[0] = toupper(fname[0]); // make first letter uppercase

    for(i=1; i<len2; i++) // same as last loop but for last name
    {
        lname[i] = tolower(lname[i]);
    }
    lname[0] = toupper(lname[0]);

    sprintf(completeName, "%s %s\n", fname, lname); // put fname and lname into completeName
    printf("Your complete name is %s\n", completeName); // display name
}

int main()
{
    // establish variables
    char fname[100];
    char lname[100];
    char completeName[200];

    // ask user for first and last name
    printf("What is your first name? ");
    scanf("%s", fname);
    printf("What is your last name? ");
    scanf("%s", lname);

    // call function
    joinNames(fname, lname, completeName);

return 0;
}
