// Write a program to reverse a number using recursion.
#include <stdio.h>
int revNum(int a, int b)
{
 if (a == 0)
    return b;
    return revNum(a / 10, b * 10 + a % 10);
}
int main()
{
 int c, d;
printf("Enter a number: ");
  scanf("%d", &c);
 d = revNum(c, 0);
    printf("Reversed number = %d", d);
    return 0;
}