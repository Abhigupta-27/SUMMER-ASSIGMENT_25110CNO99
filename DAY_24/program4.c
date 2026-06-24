/* Write a program to Remove duplicate characters. */
#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    int x, y, z, len;
    printf("Enter a string: ");
    scanf("%s", str);
    len = strlen(str);
    for (x = 0; x < len; x++)
    {
        for (y = x + 1; y < len;)
        {
            if (str[x] == str[y])
            {
                for (z = y; z < len; z++)
                {
                    str[z] = str[z + 1];
                }

                len--;
            }
            else
            {
                y++;
            }
        }
    }
    printf("String after removing duplicates: %s", str);
    return 0;
}