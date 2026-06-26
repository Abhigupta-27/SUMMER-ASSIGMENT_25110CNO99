// Write a program to Create ATM Simulation.
#include <stdio.h>
int main()
{
    int choice;
    float balance = 10000, amount;
    printf("ATM MENU\n");
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if (choice == 1)
        printf("Current Balance = %.2f", balance);
    else if (choice == 2)
    {
        printf("Enter amount to deposit: ");
        scanf("%f", &amount);

        balance = balance + amount;

        printf("Updated Balance = %.2f", balance);
    }
    else if (choice == 3)
    {
        printf("Enter amount to withdraw: ");
        scanf("%f", &amount);

        if (amount <= balance)
        {
            balance = balance - amount;
            printf("Updated Balance = %.2f", balance);
        }
        else
        {
            printf("Insufficient Balance!");
        }
    }
    else
        printf("Invalid Choice!");
    return 0;
}