#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Name: Kortney Menefee
PID: k4790190
Date: 01/17/19
Assignment Name: MoreFunctions
Instructor: R. Leinecker
*/

// This isn't finished but I did the guessing game and part of the arithmetic game.

void showInfo()
{
    printf("Here are your choices:\n");
    printf("1. Play an arithmetic game\n");
    printf("2. Play a guessing game\n");
    printf("3. See your score\n");
    printf("4. Quit\n");
}

double arithGame(int max, int quantity, int op);
{
    int op, max, problems;
    srand(time(0));
    rnd1 = rand() % max + 1;
    rnd2 = rand() % max + 1;

    printf("Would you like addition or multiplication? 1 for addition 2 for multiplication.\n");
    scanf("%d", &op);
    printf("What would you like the max number to be?\n");
    scanf("%d", &max);
    printf("How many problems would you like?\n");
    scanf("%d", &problems);


    if(op == 1)
    {

        printf("What is %d + %d?", rnd1, rnd2);

    }


    int elapsedTime;
    int startTime = time(0);

    elapsedTime = time(0) - startTime;
}

double guessGame(int max);
{
    int rnd, theirGuess;
    int max, guesses = 0;

    printf("What do you want your maximum number to be?\n");
    scanf("%d", &max);

    srand(time(0));
    rnd = rand() % max + 1;

    do
    {
        printf("Please enter your guess: ");
        scanf("%d", &theirGuess);

        guesses ++;

        if(theirGuess > rnd)
        {
            printf("You are too high.\n");
        }
        else if(theirGuess < rnd)
        {
            printf("You are too low.\n");
        }
    }
    while(rnd != theirGuess);

    printf("You got it right!!!\n");
    printf("You got it in %d guesses", guesses);

    int elapsedTime;
    int startTime = time(0);

    elapsedTime = time(0) - startTime;

    score = (elapsedTime)/(2 * max);

    return score
}

void showScore()
{
    printf("Your score is now %d\n", score);
}

int main()
{
    int choice;
    srand(time(0));

    int getUserChoice(int max)
    {
        int choice;

    do
    {
        showInfo();

        choice = getUserChoice(4);

        if(choice ==1)
        {
            arithGame();
        }
        else if(choice ==2)
        {
            guessGame();
        }
        else if(choice ==3)
        {
            showScore();
        }

    }
    while ( choice! == 4 );

return 0;
}
