#include <stdio.h>
#include <stdlib.h>

#define NUMNUMS 9

/*
Name: Kortney Menefee
PID: k4790190
Date: 03/17/19
Assignment Name: SearchArray
Instructor: R. Leinecker
*/

int main()
{
  // establish variables
  int data[] = {4,5,8,9,13,22,44,55,65};
  int i, check;
  int number = 0;

  // ask for user input
  printf("What number would you like to search for? ");
  scanf("%d", &check);

  // loop runs through all numbers in the array
  for(i=0; i<NUMNUMS; i++)
  {
      if(check == data[i])
      {
          number ++; // if the number is found the counter increases
      }
  }

  if(number == 1) // if the counter increased the number must have been found
  {
      printf("Number Found!");
  }
  else
  {
      printf("Number Not Found");
  }

return 0;
}
