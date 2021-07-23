#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

/*
Name: Kortney Menefee
PID: k479019
Date: 04/21/19
Assignment Name: LinkedLists
Instructor: R. Leinecker
*/

// data structure for user info
struct ContactInfo
{
    char name[100];
    char address[100];
    char city[50], state[50], zip[50];
    char phone[15];
    struct ContactInfo *node;
};

// allocates a new data structure, let's user input data, returns address
struct ContactInfo *getContactInfo()
{
    struct ContactInfo *ret = calloc(sizeof(struct ContactInfo), 1);

    // asks user for info
    printf("What is your name? ");
    gets(ret->name);
    printf("What is your address? ");
    gets( ret->address );
    printf("What is your city? ");
    gets( ret->city );
    printf("What is your state? ");
    gets( ret->state );
    printf("What is your zip? ");
    gets( ret->zip );
    printf("What is your phone? ");
    gets( ret->phone );

    return ret;
}

// Adds a new ContactInfo data structure to the end of the linked list
void addContactInfoToList( struct ContactInfo *info, struct ContactInfo *newInfo )
{
    // keep doing this while ci->node is not NULL
    while(info->node != NULL) // looking for the end for where to add the next node
    {
        info =  info->node;
    }
    info->node = newInfo;
}

// helper function for displayEntireLinkedList function
void display( struct ContactInfo *i )
{
    // displays user info
    printf("%s\n", i->name);
    printf("%s\n", i->address);
    printf("%s, %s %s\n", i->city, i->state, i->zip);
    printf("%s\n", i->phone);
}

// walks the entire linked list and displays each data structure in the list
void displayEntireLinkedList( struct ContactInfo *info )
{
    // keep doing this while info is not NULL
    while(info != NULL)
    {
        display(info);
        info = info->node;
    }
}

int main()
{
    int i; // counter for for loop
    struct ContactInfo *root = calloc( sizeof(struct ContactInfo), 1 );
    root = getContactInfo(); // sets root value
    for(i=0; i<9; i++) // runs 10 times
    {
        struct ContactInfo *newOne = getContactInfo(); // gets next user data
        addContactInfoToList(root, newOne); // adds the next user data to the list
    }
    displayEntireLinkedList(root); // displays all user data

return 0;
}
