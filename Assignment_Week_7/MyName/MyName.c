#include <stdio.h>
#include <stdlib.h>
#include <string.h> // need it for strings
#include <ctype.h> // contains toupper and tolower

/*
Name: Kortney Menefee
PID: k4790190
Date: 02/24/19
Assignment Name: MyName
Instructor: R. Leinecker
*/

void upperName(char upperName[]) // makes string all uppercase
{
    int i;
    int length = strlen(upperName);

    for(i=0; i<length; i++)
    {
        upperName[i] = toupper(upperName[i]); // toupper makes it uppercase
    }
}

void lowerName(char lowerName[]) // makes string all lowercase
{
    int i;
    int length = strlen(lowerName);

    for(i=0; i<length; i++)
    {
        lowerName[i] = tolower(lowerName[i]); // tolower makes it lowercase
    }
}

void initialCappedName(char initialCappedName[]) // makes only the first letter uppercase
{
    int i;
    int length = strlen(initialCappedName);

    for(i=1; i<length; i++)
    {
        initialCappedName[i] = tolower(initialCappedName[i]); // makes all but the first letter lower case
    }
    initialCappedName[0] = toupper(initialCappedName[0]); // makes first letter uppercase
}

int main()
{
    // establish variables
    char name[100];

    // user inputs name
    printf("What is your name? \n");
    scanf("%s", name);

    // displays as typed
    printf("Original name: %s\n", name);

    // displays as uppercase
    upperName(name);
    printf("Uppercase name: %s\n", name);

    // displays as lowercase
    lowerName(name);
    printf("Lowercase name: %s\n", name);

    // displays with first letter in uppercase
    initialCappedName(name);
    printf("Initial-Capped name: %s\n", name);

return 0;
}
