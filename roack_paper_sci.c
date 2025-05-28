#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int win(int player, int guess) // A function whic indicates winning conditions
{
    return (player == 0 && guess == 2)     // R>S
           || (player == 1 && guess == 0)  // P>R
           || (player == 2 && guess == 1); // S>P
}
int main()
{
    srand(time(0));         // Seed random number generator
    int guess = rand() % 3; // Random number 0, 1, or 2
    // 0--rock
    // 1--paper
    // 2--scissors
    int player;
    printf("---Welcome to Rock Paper Scissors---\n");    // small intro
    printf("There are specified keys for this game \n"); // telling user about conditions
    printf("For Rock Enter = 0\n");
    printf("For Paper Enter = 1\n");
    printf("For Scissor Enter = 2\n");
    printf("Enter the number : ");           // asking for input
    scanf("%d", &player);                    // for input
    printf("Your guess is:%d\n", player);    // showing player input
    printf("Computer guess is:%d\n", guess); // showing computer input

    if (player == guess)
    {
        printf("----Its a tie----\n"); // if both inputs are same
    }
    else if (win(player, guess)) // used win function for win conditon
    {
        printf("----You win----\n");
    }
    else if (player != 0 || player != 1 || player != 2) // if user input any other values
    {
        printf("Invalid Input\n----You lose----"); // He/she will be lose because mistake is mistake
    }
    else
    {
        printf("----You lose----"); // Bad luck
    }

    return 0;
}

