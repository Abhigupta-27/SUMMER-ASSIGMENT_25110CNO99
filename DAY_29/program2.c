// Write a program to Create bank account system.
#include <stdio.h>
struct Bank
{
    int accNo;
    char name[50];
    float balance;
};
int main(){
    struct Bank c[100];
    int n, i;
    printf("Enter number of accounts: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Account %d\n", i + 1);

        printf("Enter Account Number: ");
        scanf("%d", &c[i].accNo);

        printf("Enter Customer Name: ");
        scanf("%s", c[i].name);

        printf("Enter Balance: ");
        scanf("%f", &c[i].balance);
    }
    printf("\n Bank Account Details   :   \n");

    for(i = 0; i < n; i++)
    {
        printf("\nAccount %d\n", i + 1);
        printf("Account Number : %d\n", c[i].accNo);
        printf("Customer Name : %s\n", c[i].name);
        printf("Balance : %.2f\n", c[i].balance);
    }

    return 0;
}