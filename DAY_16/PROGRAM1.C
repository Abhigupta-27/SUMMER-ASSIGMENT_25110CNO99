//Write a Program to Find Missing Number in Array
#include <stdio.h>
int main()
{
    int a[100], n, i, sum = 0, total, miss;
    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n - 1);
    for(i = 0; i < n - 1; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    total = n * (n + 1) / 2;
    miss = total - sum;
    printf("Missing Number = %d", miss);
    return 0;
}