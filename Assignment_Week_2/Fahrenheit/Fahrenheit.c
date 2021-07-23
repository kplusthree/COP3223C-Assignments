#include <stdio.h>
#include <stdlib.h>

/*
Name: Kortney Menefee
PID: k4790190
Date: 01/20/19
Assignment Name: Fahrenheit
Instructor: R. Leinecker
*/

int main()
{

    /* Declaring variables */

    float far, cel;

    /* Let's the user input a temperature */

    printf("Welcome to Temperature Converter!\nPlease Enter a temperature in degrees fahrenheit:");
    scanf("%f", &far);

    /* Converts fahrenheit to celsius */

    cel = ((far - 32) * (5.0/9.0));

    /* Prints the output */

    printf("\nThank you!\nThat is %.2f degrees in celsius.", cel);


return 0;
}
