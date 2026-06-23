//Write a Program to Find Maximum Occurring Character
#include <stdio.h>
int main(){
    char str[100], ch;
    int i, j, count, max = 0;
    printf("Enter a string: ");
    gets(str);
    for(i = 0; str[i] != '\0'; i++)
    {
        count = 0;
        for(j = 0; str[j] != '\0'; j++)
        {
            if(str[i] == str[j])
            {
                count++;
            }
        }
        if(count > max)
        {
            max = count;
            ch = str[i];
        }
    }
    printf("Maximum Occurring Character = %c", ch);
    printf("\nFrequency = %d", max);
    return 0;
}