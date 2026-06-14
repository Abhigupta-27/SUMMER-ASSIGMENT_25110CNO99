#include <stdio.h>
int main() 
 {
    int a, b, c = 1, d;
    printf("Enter the base: ");
    scanf("%d", &a);
    printf("Enter the exponent: ");
    scanf("%d", &b);
    for (d = 1; d <= b; d++) {
        c = c * a;
}
 printf("%d^%d = %d", a, b, c);
 return 0;
}