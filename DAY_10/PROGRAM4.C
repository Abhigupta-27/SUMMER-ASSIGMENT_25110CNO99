// Write a program to print a character pyramid pattern
#include <stdio.h>
int main()
{
int p, q, r;
 char s;
printf("Enter number of rows: ");
 scanf("%d", &p);
    for (q = 1; q <= p; q++)
    {
      for (r = 1; r <= p - q; r++)
       printf(" ");
    for (s = 'A'; s < 'A' + q; s++)
          printf("%c", s);
     for (s = 'A' + q - 2; s >= 'A'; s--)
            printf("%c", s);
        printf("\n");
    }
    return 0;
}