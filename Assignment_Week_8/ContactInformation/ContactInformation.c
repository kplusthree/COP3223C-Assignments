#include <stdio.h>
#include <stdlib.h>

/*
Name: Kortney Menefee
PID: k4790190
Date: 03/17/19
Assignment Name: ContactInformation
Instructor: R. Leinecker
*/

// on the assignment it said to declare it locally but in class the professor said to declare it globally instead.
struct ContactInfo ci;

// build date structure to establish variables
struct ContactInfo
{
    char fname[50];
    char lname[50];
    char city[50];
    char state[50];
    char zipCode[9];
    char phone[10];
};

// function let's user input contact information
void getContactInfo()
{
    printf("Please enter your contact information\n");
    printf("First Name: ");
    scanf("%s", ci.fname);
    printf("Last Name: ");
    scanf("%s", ci.lname);
    printf("City: ");
    scanf("%s", ci.city);
    printf("State: ");
    scanf("%s", ci.state);
    printf("Zip Code: ");
    scanf("%s", ci.zipCode);
    printf("Phone Number: ");
    scanf("%s", ci.phone);
}

// function takes user info from the other function and displays to back to the user
void displayContactInfo()
{
    printf("Let's check to make sure your info was right.\n");
    printf("The info you entered is as follows:\n");
    printf("First Name: %s\n", ci.fname);
    printf("Last Name: %s\n", ci.lname);
    printf("City: %s\n", ci.city);
    printf("State: %s\n", ci.state);
    printf("Zip Code: %s\n", ci.zipCode);
    printf("Phone Number: %s\n", ci.phone);
}

int main()
{
    //struct ContactInfo ci; // was going to declare locally but professor said not to

    getContactInfo(); // calls function to collect contact information
    displayContactInfo(); // calls function to display collected contact information

return 0;
}
