#include <stdio.h>
int main() {
    int a, b, c, gcd;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    for (c = 1; c <= a && c <= b; c++) {
        if (a % c == 0 && b % c == 0) {
            gcd = c;
        }
    }
    printf("GCD = %d", gcd);

    return 0;
}