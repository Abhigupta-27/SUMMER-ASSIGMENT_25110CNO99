// Write a program to Create contact management system  
#include <stdio.h>
struct Contact
{
    char name[50];
    long long mobile;
};
int main(){
    struct Contact p[100];
    int n, i;
    printf("Enter number of contacts: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Contact %d\n", i + 1);

        printf("Enter Name: ");
        scanf("%s", p[i].name);

        printf("Enter Mobile Number: ");
        scanf("%lld", &p[i].mobile);
    }

    printf("\nContact List :\n");

    for(i = 0; i < n; i++)
    {
        printf("\nContact %d\n", i + 1);
        printf("Name : %s\n", p[i].name);
        printf("Mobile Number : %lld\n", p[i].mobile);
    }
    return 0;
}