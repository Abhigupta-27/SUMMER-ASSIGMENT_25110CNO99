// Write a program to Create menu-driven string operations system.
#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    int ch, i, len = 0;
    char temp;
    printf("Enter a string: ");
    gets(str);
    do
    {
        printf("\n--- STRING OPERATIONS MENU ---\n");
        printf("1. Find Length\n");
        printf("2. Reverse String\n");
        printf("3. Convert to Uppercase\n");
        printf("4. Convert to Lowercase\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1:
                printf("Length = %d\n", strlen(str));
                break;

            case 2:
                len = strlen(str);

                for (i = 0; i < len / 2; i++)
                {
                    temp = str[i];
                    str[i] = str[len - i - 1];
                    str[len - i - 1] = temp;
                }

                printf("Reversed String = %s\n", str);
                break;

            case 3:
                for (i = 0; str[i] != '\0'; i++)
                {
                    if (str[i] >= 'a' && str[i] <= 'z')
                        str[i] = str[i] - 32;
                }

                printf("Uppercase String = %s\n", str);
                break;

            case 4:
                for (i = 0; str[i] != '\0'; i++)
                {
                    if (str[i] >= 'A' && str[i] <= 'Z')
                        str[i] = str[i] + 32;
                }

                printf("Lowercase String = %s\n", str);
                break;

            case 5:
                printf("Program Ended.\n");
                break;

            default:
                printf("Invalid Choice.\n");
        }

    } while (ch != 5);
    return 0;
}