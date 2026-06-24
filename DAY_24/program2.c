/* Write a program to Compress a string. */
#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    int i, cnt;
    printf("Enter a string: ");
    scanf("%s", s);
    i = 0;
    while (s[i] != '\0')
    {
        cnt = 1;
        while (s[i] == s[i + 1])
        {
            cnt++;
            i++;
        }

        printf("%c%d", s[i], cnt);
        i++;
    }
    return 0;
}