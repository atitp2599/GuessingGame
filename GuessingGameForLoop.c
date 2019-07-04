#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 3

int main()
{
    int num, guess, num_guess = 0, flag = 0;

    srand(time(NULL));

    num = rand ()%10+1;

    for (num_guess=0; num_guess<MAX; num_guess++)
    {
        printf("Guess# %d: guess the secret number.\n", num_guess+1);
        scanf("%d", &guess);

        if (guess == num)
        {
            printf("you guessed CORRECTLY!\n");
            flag = 1;
            break;
        }
    }
        if (!flag)
        {
            printf("You ran out of guesses.\n");
            printf("Sorry, the secret number was %d.\n", num);
        }







    return 0;
}
