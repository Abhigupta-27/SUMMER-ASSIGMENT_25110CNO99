// Write a program to print a hollow square pattern.
#include <stdio.h>
int main()
{
 int a, b, c;
printf("Enter size of square: ");
  scanf("%d", &a);
 for (b = 1; b <= a; b++)
 {
      for (c = 1; c <= a; c++)
      {
        if (b == 1 || b == a || c == 1 || c == a)
            printf("* ");
        else
            printf("  ");
      }
      printf("\n");
}
    return 0;
}