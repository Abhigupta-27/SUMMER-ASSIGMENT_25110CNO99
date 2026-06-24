/* Write a program to Check string rotation. */
#include <stdio.h>
#include <string.h>
int main(){
    char a[100], b[100], c[200];
    printf("Enter first string: ");
    scanf("%s", a);
    printf("Enter second string: ");
    scanf("%s", b);
    if (strlen(a) != strlen(b))
    {
        printf("Not a rotation.");
        return 0;
    }
    strcpy(c, a);
    strcat(c, a);
    if (strstr(c, b))
        printf("String is a rotation.");
    else
        printf("String is not a rotation.");
    return 0;
}