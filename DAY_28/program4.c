// Write a program to Create inventory management system.
#include <stdio.h>
struct Item
{
    int id;
    char name[50];
    int quantity;
    float price;
};
int main(){
    struct Item p[100];
    int n, i;
    printf("Enter number of items: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of Item %d\n", i + 1);

        printf("Enter Item ID: ");
        scanf("%d", &p[i].id);

        printf("Enter Item Name: ");
        scanf("%s", p[i].name);

        printf("Enter Quantity: ");
        scanf("%d", &p[i].quantity);

        printf("Enter Price: ");
        scanf("%f", &p[i].price);
    }
    printf("\n--- INVENTORY DETAILS ---\n");
    for (i = 0; i < n; i++)
    {
        printf("\nItem %d\n", i + 1);
        printf("ID       : %d\n", p[i].id);
        printf("Name     : %s\n", p[i].name);
        printf("Quantity : %d\n", p[i].quantity);
        printf("Price    : %.2f\n", p[i].price);
    }
    return 0;
}