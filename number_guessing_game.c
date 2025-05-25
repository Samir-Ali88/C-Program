#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{

    srand(time(0));                // Seed the random number generator
    int number = rand() % 100 + 1; // Random number between 1 and 100
    printf("----Guess number from 1-100\n");
    int guess;//input from user
    int i;
    for (i = 0; guess != number; i++) //condition that runs untill guess is correct
    {
        printf("Enter the number:");
        scanf("%d", &guess);
        if (guess > number) //if the guess is larger than number 
        {
            printf("Your nummber is high\n");
        }
        else if (guess < number) //if guess is smaller than number
        {
            printf("Your number is low\n");
        }
    }
    printf("Congrats..You guessed correct in %d attempts", i); //Code will run if the guess is matched
    return 0;
}