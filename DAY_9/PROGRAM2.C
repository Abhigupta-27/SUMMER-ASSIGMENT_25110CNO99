// Write a program to print a reverse number triangle pattern.
#include <stdio.h>
int main()
{
  int a, b, c;
    printf("Enter number of rows: ");
    scanf("%d", &a);
    for (b = a; b >= 1; b--)
    {
     for (c = 1; c <= b; c++)
     {
          printf("%d", c);
      }
     printf("\n");
    }
    return 0;
}