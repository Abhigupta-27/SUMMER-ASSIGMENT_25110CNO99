#include <stdio.h>
int main() {
    int a, b,c,d = 0;
    printf("Enter a number  ");
    scanf("%d", &a);
    b = a;
    while (b > 0) {
        c = b % 10;
        d = d + (c * c * c);
   b = b / 10;
    }
    if (d == a)
            printf("Armstrong Number");
    else
     printf("Not an Armstrong Number");
    return 0;
}