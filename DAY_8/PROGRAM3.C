// Write a program to print a character triangle pattern.
#include <stdio.h>
int main()
{
    int p, q;
    char r;
    printf("Enter number of rows: ");
    scanf("%d", &p);
    for (q = 1; q <= p; q++)
    {
     for (r = 'A'; r < 'A' + q; r++)
    {
     printf("%c ", r);
        }
     printf("\n");
    }
 return 0;
}