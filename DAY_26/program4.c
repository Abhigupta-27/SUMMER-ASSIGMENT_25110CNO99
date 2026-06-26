// Write a program to Create Quiz Application.
#include <stdio.h>
int main()
{
    int answer, score = 0;
    printf("Question 1: What is the capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 2)
    {
        score++;
    }
    printf("\nQuestion 2: How many days are there in a week?\n");
    printf("1. 5\n2. 6\n3. 7\n4. 8\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 3)
    {
        score++;
    }

    printf("\nQuestion 3: Which language is used for system programming?\n");
    printf("1. C\n2. HTML\n3. CSS\n4. SQL\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 1)
    {
        score++;
    }

    printf("\nYour Final Score = %d/3", score);

    return 0;
}