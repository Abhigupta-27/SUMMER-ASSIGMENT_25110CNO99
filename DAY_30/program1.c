// Write a program to Create student record system using arrays and strings.
#include <stdio.h>
#include <string.h>
struct Student
{
    int roll;
    char name[50];
    float marks;
};
int main()
{
    struct Student s[100];
    int n, i;
    printf("Enter number of students: ");
    scanf("%d", &n);
    getchar();
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll);

        getchar();

        printf("Enter Name: ");
        fgets(s[i].name, sizeof(s[i].name), stdin);
        s[i].name[strcspn(s[i].name, "\n")] = '\0';

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);

        getchar();
    }

    printf("\n STUDENT RECORDS : \n");
    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number : %d\n", s[i].roll);
        printf("Name        : %s\n", s[i].name);
        printf("Marks       : %.2f\n", s[i].marks);
    }
    return 0;
}