//Write a Program to Reverse an Array
#include <stdio.h>
int main()
{
    int a[100], n, i;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Reversed array:\n");
    for(i = n - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }
    return 0;
}