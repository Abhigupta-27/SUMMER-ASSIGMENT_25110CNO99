#include <stdio.h>
int main()
{
int p, q, r = 0;
 printf("Enter the value of n: ");
scanf("%d", &p);
for(q = 1; q <= p; q++)
{     r = r + q;
    }
printf("Sum of first %d natural numbers = %d", p, r);
    return 0;
}
