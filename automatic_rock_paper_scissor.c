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
    srand(time(0)); // Seed random number generator

    // 0--rock
    // 1--paper
    // 2--scissors
    // 3--for ending
    int player, guess;
    int user = 0;
    int computer = 0;
    int tie = 0;
    printf("---Welcome to Rock Paper Scissors---\n");    // small intro
    printf("There are specified keys for this game \n"); // telling user about conditions
    printf("For Rock Enter = 0\n");
    printf("For Paper Enter = 1\n");
    printf("For Scissor Enter = 2\n");
    printf("For Exit enter =3\n");

    do //using do while loop for reapetation
    {
        printf("Enter the number : "); // asking for input
        scanf("%d", &player);          // for input

        if (player == 3) //if player is exiting
        {
            printf("Exiting the game\n ");
            break; //loop will be end here
        }
        if (player<0 || player>2) // if user input any other values
        {
            printf("Invalid Input\n----You lose----"); // He/she will be lose because mistake is mistake
            computer++;
            continue; //loop will continue if he/she uses valid value
        }
        guess = rand() % 3; ///main loop starts from here ..This is guessing random
        printf("Your choice: %d\n", player);//showing user input
        printf("Computer choice: %d\n", guess);//showing computer input
        if (player == guess)
        {
            printf("----Its a tie----\n");
            tie++; // if both inputs are same
        }
        else if (win(player, guess)) // used win function for win conditon
        {
            printf("----You win----\n");
            user++;
        }

        else
        {
            printf("----You lose----");
            computer++; // User loss
        }
        printf("Your Score=> %d\nComputer Score=>%d\nTies=>%d\n", user, computer, tie); //scoreboard
    } while (1);
    printf("---Final Score----\n");//final score messege
    int total=user+computer+tie;
    printf("Total matches:%d\n",total);//total matches count
    printf("Your Score:%d\n", user);//users score output
    printf("Computer Score:%d\n", computer);//computer score output
    printf("Ties:%d\n", tie);//total ties
    if (user > computer) // user wins more than computer
    {
        printf("-------You wins Most----------\n");
    }
    if (computer == user)// user and computer wins equally
    {
        printf("--------The match is Draw--------\n");
    }
    else
    {
        printf("---------Computer wins most--------");//computer wins most
    }
    return 0;
}
