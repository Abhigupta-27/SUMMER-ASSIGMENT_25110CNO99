#include <stdio.h>
int main() {
    int a, b, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &a);
    for (b = 1; b < a; b++) {
        if (a % b == 0) {
            sum = sum + b;
     }
   }
 if (sum == a)
        printf("Perfect Number");
 else
 printf("Not a Perfect Number");
    return 0;
}