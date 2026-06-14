// Write a program to print a number pyramid pattern
#include <stdio.h>
int main()
{    int p, q, r;
    printf("Enter number of rows: ");
    scanf("%d", &p);
    for (q = 1; q <= p; q++)
    {
        for (r = 1; r <= p - q; r++)
            printf(" ");
        for (r = 1; r <= q; r++)
            printf("%d", r);
        for (r = q - 1; r >= 1; r--)
            printf("%d", r);
        printf("\n");
    }
    return 0;
}