// Write a program to Create Number Guessing Game.
#include <stdio.h>
int main()
{
    int secret = 8, guess;
    printf("Guess a number between 1 and 10: ");
    scanf("%d", &guess);
    if (guess == secret)
    {
        printf("Congratulations! You guessed the correct number.");
    }
    else
    {
        printf("Wrong guess! The correct number was %d.", secret);
    }
    return 0;
}