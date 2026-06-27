/*
Question: Write a program to Create employee management system.
*/
#include <stdio.h>
#include <string.h>
struct Employee {
    int id;
    char name[50];
    float salary;
};
int main() {
    struct Employee emp;
    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);
    printf("Enter Employee Name: ");
    scanf("%s", emp.name);
    printf("Enter Employee Salary: ");
    scanf("%f", &emp.salary);
    printf("\n--- Employee Record ---\n");
    printf("ID: %d\nName: %s\nSalary: %.2f\n", emp.id, emp.name, emp.salary);
    return 0;
}