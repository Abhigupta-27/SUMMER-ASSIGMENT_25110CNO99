#include <stdio.h>
int main() 
{
 int a, b;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Factors of %d are:\n", a);
    for (b = 1; b <= a; b++) {
        if (a % b == 0) 
        {
      printf("%d ", b);
    }
}
    return 0;
}