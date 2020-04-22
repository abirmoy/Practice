#include <stdio.h>
#include <stdlib.h>
#include <time.h> //for random variable

int main()
{
    int guess = 0;
    int random_number = 0;
    int number_of_guess;
    time_t t;

    //initialization of random number generator
    srand((unsigned) time(&t));

    //set the random number
    random_number = rand () %21;
    top: printf("\nThis is a guessing game.\nI have chosen a number between 0 and 20, which you must guess.\n");//label top for play again


    for (number_of_guess = 5; number_of_guess > 0; --number_of_guess)
    {
        printf("\nYou have %d tr%s left.", number_of_guess, number_of_guess == 1? "y" : "ies");
        printf("\nEnter your guess: ");
        scanf("%d", &guess);

        if (guess == random_number)
        {
            printf("\nCongratulations! Your guess is correct.");
            break;
        }
        else if (guess < 0 || guess > 20)
            printf("\nHey I said the number is between 0 and 20");
        else if (random_number > guess)
            printf("\n %d is wrong. My number is greater than that.", guess);
        else if (random_number < guess)
            printf("\n %d is wrong. My number is less than that.", guess);
    }

    printf("\nYou had 5 tries and failed. The number was %d.", random_number);



    //ask if the user wants to play again
    int check_continue;
    printf("\nEnter 1 for play again or 0 to exit: ");
    scanf("%d", &check_continue);
    if (check_continue == 1)
        goto top;
    else
        return 0;




    return 0;
}
