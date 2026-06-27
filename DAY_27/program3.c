/*
Question: Write a program to Create salary management system.
*/
#include <stdio.h>
int main() {
    float basic, hra, da, total;
    printf("Enter Basic Salary: ");
    scanf("%f", &basic);
    hra = 0.20 * basic; 
    da = 0.10 * basic;  
    total = basic + hra + da;
    printf("\n--- Salary Slip ---\n");
    printf("Basic: %.2f\nHRA: %.2f\nDA: %.2f\nTotal Salary: %.2f\n", basic, hra, da, total);

    return 0;
}