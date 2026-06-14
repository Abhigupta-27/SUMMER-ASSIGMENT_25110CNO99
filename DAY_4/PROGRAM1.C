#include <stdio.h>
int main() {
    int n, a = 0, b = 1, c, x;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series:\n");
    for (x = 1; x <= n; x++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}