// Write a program to print a reverse star pattern.
#include <stdio.h>
int main()
{
 int p, q, r;
printf("Enter number of rows: ");
 scanf("%d", &p);
    for (q = p; q >= 1; q--)
    {        for (r = 1; r <= q; r++)
      {
          printf("*");
      }
      printf("\n");
}
    return 0;
}