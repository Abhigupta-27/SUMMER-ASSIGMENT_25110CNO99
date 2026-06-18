//Write a Program for Bubble Sort.
#include <stdio.h>
int main(){
    int arr[100], size, i, j, temp;
    printf("Enter size of array: ");
    scanf("%d", &size);
    printf("Enter array elements:\n");
    for(i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    for(i = 0; i < size - 1; i++)
    {
        for(j = 0; j < size - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Sorted Array:\n");
    for(i = 0; i < size; i++)
     printf("%d ", arr[i]);

    return 0;
}