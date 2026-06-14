//Write a Program to Count Even and Odd Elements
#include <stdio.h>
int main()
{
    int arr[100], n, i, even = 0, odd = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("Even Elements = %d\n", even);
    printf("Odd Elements = %d", odd);
    return 0;
}