#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Initialize random number generator with current time
    srand(time(0));

    // Generate a random number between 0 and 99
    int randomNumber = (rand() % 100) + 1;
    int num_of_guess = 0;
    int guessed;

    printf("====Guess the number between 1-100====\n");

    do
    {
        printf("Guess the number: ");
        scanf("%d", &guessed);
        if (guessed > randomNumber)
            printf("lower number please.\n");
        else if (guessed < randomNumber)
            printf("Higher number please.\n");
        num_of_guess++;
    } while (guessed != randomNumber);

    printf("You guessed the number in %d number of guesses.", num_of_guess);

    return 0;
}
