//Write a Program to Sort Array in Descending Order
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
        for(j = i + 1; j < size; j++)
        {
            if(arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Array in Descending Order:\n");
    for(i = 0; i < size; i++)
 printf("%d ", arr[i]);
    return 0;
}