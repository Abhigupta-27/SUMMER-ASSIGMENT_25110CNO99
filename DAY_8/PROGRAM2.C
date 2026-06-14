// Write a program to print a number triangle pattern.
#include <stdio.h>
int main()
{
    int p, q, r;
    printf("Enter number of rows  ");
    scanf("%d", &p);
for (q = 1; q <= p; q++)
   {
   for (r = 1; r <= q; r++)
     {
         printf("%d ", r);
      }
      printf("\n");
    }
    return 0;
}