#include <stdio.h>
int main() {
    int a, b, x, y,z,sum;
    printf("Enter starting number: ");
    scanf("%d", &a);
    printf("Enter ending number: ");
    scanf("%d", &b);
    printf("Armstrong numbers are:\n");
    for (x = a; x <= b; x++) {
        y = x;
        sum = 0;
        while (y > 0) {
            z = y % 10;
            sum = sum + (z * z * z);
            y = y / 10;
        }
        if (sum == x)
         printf("%d ", x);
        }
    return 0;
}