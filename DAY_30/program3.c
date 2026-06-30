// Write a program to Create mini employee management system.
#include <stdio.h>
#include <string.h>
struct Employee
{
    int id;
    char name[50];
    float salary;
};
int main()
{
    struct Employee e[100];
    int n, i;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    getchar();
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Employee %d\n", i + 1);
        printf("Enter Employee ID: ");
        scanf("%d", &e[i].id);
        getchar();
        printf("Enter Employee Name: ");
        fgets(e[i].name, sizeof(e[i].name), stdin);
        e[i].name[strcspn(e[i].name, "\n")] = '\0';

        printf("Enter Salary: ");
        scanf("%f", &e[i].salary);
        getchar();
    }
    printf("\n EMPLOYEE RECORDS : \n");
    for(i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);
        printf("Employee ID   : %d\n", e[i].id);
        printf("Employee Name : %s\n", e[i].name);
        printf("Salary        : %.2f\n", e[i].salary);
    }
    return 0;
}