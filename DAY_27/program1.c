/*
Question: Write a program to Create student record management system.
*/

#include <stdio.h>

struct Student {
    int roll_no;
    char name[50];
    float marks;
};

int main() {
    struct Student s;

    printf("Enter Student Roll Number: ");
    scanf("%d", &s.roll_no);
    printf("Enter Student Name: ");
    scanf("%s", s.name);
    printf("Enter Student Marks: ");
    scanf("%f", &s.marks);

    printf("\n--- Student Record ---\n");
    printf("Roll No: %d\nName: %s\nMarks: %.2f\n", s.roll_no, s.name, s.marks);

    return 0;
}