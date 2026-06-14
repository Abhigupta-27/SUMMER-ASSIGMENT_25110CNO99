#include <stdio.h>
int main() 
{
    int num, rem, binary = 0, place = 1;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    while (num > 0) {
        rem = num % 2;
        binary = binary + rem * place;
        place = place * 10;
        num = num / 2;
}
 printf("Binary number = %d", binary);
    return 0;
}