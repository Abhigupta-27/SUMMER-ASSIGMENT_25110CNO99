/* Write a program to Find longest word. */
#include <stdio.h>
#include <string.h>
int main(){
    char txt[200], ans[100];
    int p = 0, q = 0, mx = 0, st = 0;
    printf("Enter a sentence: ");
    fgets(txt, sizeof(txt), stdin);
    while (txt[p] != '\0')
    {
        if (txt[p] == ' ' || txt[p] == '\n')
        {
            if (q > mx)
            {
                mx = q;
                strncpy(ans, &txt[st], mx);
                ans[mx] = '\0';
            }

            q = 0;
            st = p + 1;
        }
        else
        {
            q++;
        }

        p++;
    }
    if (q > mx)
    {
        mx = q;
        strncpy(ans, &txt[st], mx);
        ans[mx] = '\0';
    }
    printf("Longest word: %s", ans);
    return 0;
}