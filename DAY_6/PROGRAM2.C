#include <stdio.h>
int main()
 {
    int binary, digit, decimal = 0, place = 1;
    printf("Enter a binary number: ");
    scanf("%d", &binary);
    while (binary > 0) 
    {
     digit = binary % 10;
      decimal = decimal + digit * place;
     place = place * 2;
      binary = binary / 10;
    }
 printf("Decimal number = %d", decimal);
  return 0;
}