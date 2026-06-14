//Write a program to Write function to check PRIME 
#include <stdio.h>
void checkPrime(int n)
{
    int i, flag = 1;
    if (n <= 1)
        flag = 0;
    else
    {
        for (i = 2; i <= n / 2; i++)
  {
           if (n % i == 0)
           {
       flag = 0;
             break;
        }
    }
    }
  if (flag)
        printf("Prime Number");
 else
      printf("Not a Prime Number");
}
int main()
{
    int p;
    printf("Enter a number: ");
    scanf("%d", &p);
    checkPrime(p);
    return 0;
}