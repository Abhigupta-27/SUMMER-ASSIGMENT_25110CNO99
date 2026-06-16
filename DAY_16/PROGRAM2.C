//Write a Program to Find Maximum Frequency Element
#include <stdio.h>
int main()
{
    int a[100], n, i, j;
    int maxf = 0, ele;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n; i++)
    {
        int count = 1;
        for(j = i + 1; j < n; j++)
        {
            if(a[i] == a[j])
                count++;
        }
        if(count > maxf)
        {
            maxf = count;
            ele = a[i];
        }
    }
    printf("Element with Maximum Frequency = %d", ele);
    printf("\n Frequency = %d", maxf);
    return 0;
}