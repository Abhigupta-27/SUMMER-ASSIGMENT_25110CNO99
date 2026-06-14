#include <stdio.h>
int main() 
{
    int p, q, r, s = 0;
    printf("Enter a number: ");
    scanf("%d", &p);
    r = p;
    while (p != 0) {
        q = p % 10;
        s = s * 10 + q;
        p = p / 10;
    }
    if (r == s)
        printf("Palindrome Number");
    else
       printf("Not a Palindrome Number");
    return 0;
}