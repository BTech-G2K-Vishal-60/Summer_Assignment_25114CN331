#include <stdio.h>
int main()
{
    int number, guess, attempts = 0;
    number = 21;

    printf("=== Number Guessing Game ===\n");
    printf("I have chosen a number between 1 and 100.\n");

    do
    {
        printf("Enter your guess:\n");
        scanf("%d", &guess);

        attempts++;

        if (guess > number)
        {
            printf("Too High!\n");
        }
        else if (guess < number)
        {
            printf("Too Low!\n");
        }
        else
        {
            printf("Congratulations! You guessed it in %d attempts.\n", attempts);
        }

    } while (guess != number);

    return 0;
}