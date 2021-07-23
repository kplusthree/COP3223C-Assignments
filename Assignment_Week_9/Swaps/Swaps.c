#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Name: Kortney Menefee
PID: k4790190
Date: 03/24/19
Assignment Name: Swaps
Instructor: R. Leinecker
*/

// function for swapping integers
void swapInt(int *i, int *j)
{
    int temp;
    temp = *i; // temporary storage of i
    *i = *j; // change i's value to j's value
    *j = temp; // put temporary storage of i into j
    printf("i's value is %d and j's value is %d\n", *i, *j); // display swapped values
}

void swapDouble(double *ii, double *jj)
{
    double temp;
    temp = *ii; // temporary storage of ii
    *ii = *jj; // change ii's value to jj's value
    *jj = temp; // put temporary storage of ii into jj
    printf("ii's value is %.2lf and jj's value is %.2lf\n", *ii, *jj); // display swapped values
}

void swapString(char *a, char *b)
{
    int len1, len2, i; // establish variables
    char temp[50];
    strcpy(temp, a); // temporary storage of a
    strcpy(a, b); // change a's value to b's value
    strcpy(b, temp); // put temporary storage of a into b
    len1 = strlen(a);
    len2 = strlen(b);

    printf("The string stored in a is: ");

    for(i=0; i<len1; i++) // run loop for length of a
    {
        printf("%c", a[i]); // print a's value
    }

    printf("\nThe string stored in b is: ");

    for(i=0; i<len2; i++) // run loop for length of b
    {
        printf("%c", b[i]); // print b's value
    }
}

int main()
{
    // establish variables
    int i, j;
    double ii, jj;
    char a[50], b[50];

    // get user input
    printf("Please enter the value of i: ");
    scanf("%d", &i);
    printf("Please enter the value of j: ");
    scanf("%d", &j);

    // call function
    swapInt(&i, &j);

    // get user input
    printf("Please enter the value of ii: ");
    scanf("%lf", &ii);
    printf("Please enter the value of jj: ");
    scanf("%lf", &jj);

    // call function
    swapDouble(&ii, &jj);

    // get user input
    printf("Please enter the string for a: ");
    scanf("%s", a);
    printf("Please enter the string for b: ");
    scanf("%s", b);

    // call function
    swapString(a, b);

return 0;
}
