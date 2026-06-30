// Write a program to Develop complete mini project using arrays, strings and functions
#include <stdio.h>
#include <string.h>
struct Student
{
    int roll;
    char name[50];
    float marks;
};
void inputStudent(struct Student s[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll);

        while(getchar() != '\n');

        printf("Enter Name: ");
        fgets(s[i].name, sizeof(s[i].name), stdin);
        s[i].name[strcspn(s[i].name, "\n")] = '\0';

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }
}
void displayStudent(struct Student s[], int n)
{
    int i;
    printf("\n----- STUDENT RECORDS -----\n");
    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number : %d\n", s[i].roll);
        printf("Name        : %s\n", s[i].name);
        printf("Marks       : %.2f\n", s[i].marks);
    }
}
int main()
{
    struct Student s[100];
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    inputStudent(s, n);
    displayStudent(s, n);
    return 0;
}