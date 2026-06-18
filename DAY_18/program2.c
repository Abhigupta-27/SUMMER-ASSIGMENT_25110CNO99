//Write a Program for Selection Sort
#include <stdio.h>
int main(){
    int arr[100], size, i, j, min, temp;
    printf("Enter size of array: ");
    scanf("%d", &size);
    printf("Enter array elements:\n");
    for(i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    for(i = 0; i < size - 1; i++)
    {
        min = i;
        for(j = i + 1; j < size; j++)
        {
            if(arr[j] < arr[min])
            {
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    printf("Sorted Array:\n");
    for(i = 0; i < size; i++)
        printf("%d ", arr[i]);
    return 0;
}