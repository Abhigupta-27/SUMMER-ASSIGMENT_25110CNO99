/* Write a program to Sort words by length. */
#include <stdio.h>
#include <string.h>
int main(){
    char word[10][50], swap[50];
    int n, a, b;
    printf("Enter number of words: ");
    scanf("%d", &n);
    printf("Enter words:\n");
    for (a = 0; a < n; a++)
      scanf("%s", word[a]);
    for (a = 0; a < n - 1; a++)
    {
        for (b = a + 1; b < n; b++)
        {
            if (strlen(word[a]) > strlen(word[b]))
            {
                strcpy(swap, word[a]);
                strcpy(word[a], word[b]);
                strcpy(word[b], swap);
            }
        }
    }
    printf("Words sorted by length:\n");
    for (a = 0; a < n; a++)
        printf("%s\n", word[a]);
    return 0;
}