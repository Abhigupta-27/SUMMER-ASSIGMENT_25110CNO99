//
#include <stdio.h>
int main()
{
    int a[100], n, i, x, pos = -1;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter element to search: ");
    scanf("%d",&x);
    for(i=0;i< n;i++)
    {
        if(a[i] == x)
        {
            pos = i;
            break;
        }
    }
    if(pos!= -1)
        printf("Element found at position %d",pos+1);
    else
        printf("Element not found");
    return 0;
}