#include <stdio.h>
int main()
{
    int a, b, c, d, e, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &a);
    b = a;
    while (b > 0) {
    c = b % 10;
      d = 1;
        for (e = 1; e <= c; e++) {
        d = d * e;
    }
     sum = sum + d;
      b = b / 10;
    }
 if (sum == a)
    printf("Strong Number");
  else
 printf("Not a Strong Number");

    return 0;
}