#include <stdio.h>
int main() {
    int a, b, x, y, flag;
    printf("Enter the starting number: ");
    scanf("%d", &a);
    printf("Enter the ending number: ");
    scanf("%d", &b);
    printf("Prime numbers are:\n");
    for (x = a; x <= b; x++) {
        if (x < 2)
            continue;
        flag = 1;
        for (y = 2; y < x; y++) {
            if (x % y == 0) {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            printf("%d ", x);
    }
    return 0;
}