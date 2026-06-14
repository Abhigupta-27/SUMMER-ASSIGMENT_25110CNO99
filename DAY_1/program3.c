#include <stdio.h>
int main()
{
int a, b, c = 1;
printf("Enter a number: ");
scanf("%d", &a);
    for(b = 1; b <= a; b++)
    {
     c = c * b;
    }
    printf("Factorial of %d = %d", a, c);
    return 0;
}