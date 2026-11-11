#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int secret = rand() % 80 + 1;
    int guess;
    int tries = 0;

    printf("I'm thinking of a number from 1 to 80.\n");

    do
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        tries++;

        if (guess < secret)
        {
            printf("Too low.\n");
        }
        else if (guess > secret)
        {
            printf("Too high.\n");
        }
    } while (guess != secret);

    printf("Correct! You got it in %d tries.\n", tries);
    return 0;
}
