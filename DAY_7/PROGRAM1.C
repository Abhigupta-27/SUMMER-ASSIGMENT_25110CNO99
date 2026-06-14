//Write a program to Recursive factorial.
#include <stdio.h>
int fact(int a)
{
    if (a == 0 || a == 1)
        return 1;
    return a * fact(a - 1);
}
int main()
{
    int b, c;
    printf("Enter a number: ");
    scanf("%d", &b);
    c = fact(b);
    printf("Factorial = %d", c);
    return 0;
}