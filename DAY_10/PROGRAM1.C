// Write a program to print a star pyramid pattern.
#include <stdio.h>
int main()
{
    int p, q, r;
    printf("Enter number of rows: ");
    scanf("%d", &p);
    for (q = 1; q <= p; q++)
    {
        for (r = 1; r <= p - q; r++)
            printf(" ");
        for (r = 1; r <= 2 * q - 1; r++)
            printf("*");
        printf("\n");
    }
    return 0;
}