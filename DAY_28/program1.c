// Write a program to Create menu-driven calculator.
#include <stdio.h>
int main()
{
    int ch;
    float a, b, ans;

    do
    {
        printf("\n--- MENU DRIVEN CALCULATOR ---\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        if (ch >= 1 && ch <= 4)
        {
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
        }

        switch (ch)
        {
            case 1:
                ans = a + b;
                printf("Addition = %.2f\n", ans);
                break;

            case 2:
                ans = a - b;
                printf("Subtraction = %.2f\n", ans);
                break;

            case 3:
                ans = a * b;
                printf("Multiplication = %.2f\n", ans);
                break;

            case 4:
                if (b != 0)
                    printf("Division = %.2f\n", a / b);
                else
                    printf("Division by zero is not possible.\n");
                break;

            case 5:
                printf("Program Ended.\n");
                break;

            default:
                printf("Invalid Choice.\n");
        }

    } while (ch != 5);
    return 0;
}