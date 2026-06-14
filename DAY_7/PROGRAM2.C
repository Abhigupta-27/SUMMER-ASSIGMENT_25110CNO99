// Write a program to print Fibonacci series using recursion.
#include <stdio.h>
int fib(int a)
{
    if (a == 0)
        return 0;
    if (a == 1)
        return 1;
    return fib(a - 1) + fib(a - 2);
}
int main()
{
    int b, c;
    printf("Enter the number of terms: ");
    scanf("%d", &b);
    for (c = 0; c < b; c++)
    {
        printf("%d ", fib(c));
    }
    return 0;
}