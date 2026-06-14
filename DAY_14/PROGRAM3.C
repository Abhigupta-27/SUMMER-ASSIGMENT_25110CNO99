// Write a program to Second largest element. 
#include <stdio.h>
int main()
{
    int a[100], n, i, max, second;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    max=second = a[0];
    for(i =1;i<n;i++)
    {
        if(a[i] > max)
        {
         second=max;
            max =a[i];
        }
        else if(a[i] > second && a[i] != max)
        {
            second = a[i];
        }
    }
    printf("Second Largest Element = %d", second);
    return 0;
}