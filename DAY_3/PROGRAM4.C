#include <stdio.h>
int main() {
    int a, b, x, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    x = (a > b) ? a : b;
    while (1) {
        if (x % a == 0 && x % b == 0) {
            lcm = x;
            break;
        }
        x++;
    }
    printf("LCM = %d", lcm);
    return 0;
}