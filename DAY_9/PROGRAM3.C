// Write a program to print a repeated character pattern.
#include <stdio.h>
int main()
{
 int p, q, r;
  char s;
    printf("Enter number of rows: ");
    scanf("%d", &p);
    for (q = 1; q <= p; q++)
  {
     s = 'A' + q - 1;
    for (r = 1; r <= q; r++)
     {
         printf("%c", s);
      }
     printf("\n");
    }
    return 0;
}