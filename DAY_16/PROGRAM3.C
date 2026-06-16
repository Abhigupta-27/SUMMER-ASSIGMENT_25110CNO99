//Write a Program to Find Pair with Given Sum
#include <stdio.h>
int main()
{
    int a[100], n, i, j, sum;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter required sum: ");
    scanf("%d", &sum);
    printf("Pairs are:\n");
    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(a[i] + a[j] == sum)
            {
                printf("(%d, %d)\n", a[i], a[j]);
            }
        }
    }
    return 0;
}