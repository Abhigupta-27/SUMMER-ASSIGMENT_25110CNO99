// Write a program to find the sum of digits of a number using recursion.
#include <stdio.h>
int sumDigit(int x)
{
    if (x == 0)
     return 0;
 return (x % 10) + sumDigit(x / 10);
}
int main()
{
  int y, z;
    printf("Enter a number: ");
 scanf("%d", &y);
    z = sumDigit(y);
    printf("Sum of digits = %d", z);
 return 0;
}