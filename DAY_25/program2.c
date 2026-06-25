/* Write a program to Find common characters in strings*/
#include <stdio.h>
#include <string.h>
int main(){
    char x[100], y[100];
    int p, q, flag;
    printf("Enter first string: ");
    scanf("%s", x);
    printf("Enter second string: ");
    scanf("%s", y);
    printf("Common characters are: ");
    for (p = 0; x[p] != '\0'; p++)
    {
        flag = 0;
        for (q = 0; q < p; q++)
        {
            if (x[p] == x[q])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            continue;
        }
        for (q = 0; y[q] != '\0'; q++)
        {
            if (x[p] == y[q])
            {
                printf("%c ", x[p]);
                break;
            }
        }
    }
    return 0;
}