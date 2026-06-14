//Write a program to Write function to find factorial
#include <stdio.h>
int factorial(int n)
{
    int i, fact = 1;
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int p;
    printf("Enter a number: ");
    scanf("%d", &p);
    printf("Factorial = %d", factorial(p));
    return 0;
}