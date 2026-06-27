/*Question: Write a program to Create marksheet generation system.*/
#include <stdio.h>
int main() {
    int marks[3], i, total = 0;
    float avg;
    printf("Enter marks for 3 subjects:\n");
    for(i = 0; i < 3; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }
    avg = total / 3.0;
    printf("\n--- Marksheet ---\n");
    printf("Total Marks: %d\n", total);
    printf("Average: %.2f\n", avg);
    printf("Result: %s\n", (avg >= 40) ? "PASS" : "FAIL");
    return 0;
}