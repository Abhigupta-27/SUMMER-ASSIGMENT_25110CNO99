#include <stdio.h>
int main() {
    int num, factor, check, primeFlag, largestPrime = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (factor = 2; factor <= num; factor++) {
        if (num % factor == 0) {
            primeFlag = 1;
            for (check = 2; check < factor; check++) {
                if (factor % check == 0) {
                    primeFlag = 0;
                    break;
            }
        }
          if (primeFlag == 1)
            largestPrime = factor;
    }
  }
    printf("Largest Prime Factor = %d", largestPrime);
    return 0;
}