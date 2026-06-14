#include <stdio.h>
int main()
{
int g, h, i;
printf("Enter a number: ");
scanf("%d", &g);
for(i = 1; i <= 10; i++)
{
  h = g*i;
    printf("%d x %d = %d\n", g, i, h);
 }

 return 0;
}