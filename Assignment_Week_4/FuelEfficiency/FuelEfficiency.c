#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Name: Kortney Menefee
PID: k4790190
Date: 02/03/19
Assignment Name: FuelEfficiency
Instructor: R. Leinecker
*/

int main()
{
    // Establishes variables
    float radius, revolutions, gallons;
    float distance, circumference, miles, sum;

    // asks for user to input radius, revolutions, and gallons
    printf("What is the radius of your tires in inches? ");
    scanf("%f", &radius);
    printf("How many revolutions did your car's tire's make? ");
    scanf("%f", &revolutions);
    printf("How many gallons of gas did your car use? ");
    scanf("%f", &gallons);

    circumference = 2 * M_PI * radius; // solve for circumference
    distance = circumference * revolutions; // solve for length
    miles = distance / 63360; // convert inches to miles
    sum = miles / gallons; // convert to miles per hour

    printf("Your car averaged %.2f miles per gallon.\n", sum);

    // sets the parameters of mileage as poor, average, good, or excellent
    if( 0 <= sum && sum <= 20)
    {
        printf("Your car has poor mileage");
    }
    else if( 20 < sum && sum <= 30)
    {
        printf("Your car has average mileage");
    }
    else if( 30 < sum && sum <= 40)
    {
        printf("Your car has good mileage");
    }
    else if( 40 < sum )
    {
        printf("Your car has excellent mileage");
    }

return 0;
}
