#include <stdio.h>
int main()
{
    float num_1; // Storing number 1
    float num_2; // storing number 2
    char opr;    // storing operator

    printf("---Calculator V1----\n");
    printf("You Can do basic calculation here\n");
    printf("Enter a number: "); // getting first number from user
    if (scanf("%f", &num_1) != 1)
    {
        printf("Invalid Enter a number\n"); // if user input other than number
        return 1;
    }

    printf("Enter another number: "); // getting second number from user
    if (scanf("%f", &num_2) != 1)
    {
        printf("Invalid Enter a number\n"); // if user input other than number
        return 1;
    }

    printf("operators \'+\',\'-\',\'*\',\'/\'\n ");
    printf("Enter an operator: "); // getting operator from user
    scanf(" %c", &opr);

    if (opr == '+')
    {

        float sum = num_1 + num_2;
        printf("%.2f + %.2f = %.2f\n", num_1, num_2, sum);
    }

    else if (opr == '-')
    {
        float subtraction = num_1 - num_2;
        printf("%.2f - %.2f = %.2f\n", num_1, num_2, subtraction);
    }
    else if (opr == '*')
    {
        float multipication = num_1 * num_2;
        printf("%.2f * %.2f = %.2f\n", num_1, num_2, multipication);
    }

    else if (opr == '/')
    {
        if (num_2 == 0)
        {
            printf("Cant divide zero\n"); // no infinite value error
        }
        else
        {
            float division = num_1 / num_2;
            printf("%.2f / %.2f = %.2f\n", num_1, num_2, division);
        }
    }
    else
    {
        printf("Invalid Input");
    }

    printf("---Thank You for using this calculator---");

    return 0;
}