// Write a program to print a reverse star pyramid pattern.
#include <stdio.h>
int main()
{
  int a, b, c;
    printf("Enter number of rows: ");
    scanf("%d", &a);
    for (b = a; b >= 1; b--)
    {
    for (c = 1; c <= a - b; c++)
         printf(" ");
     for (c = 1; c <= 2 * b - 1; c++)
          printf("*");
        printf("\n");
  }
    return 0;
}