//Write a Program for Binary Search
#include <stdio.h>
int main(){
    int arr[100], size, i;
    int key, first, last, middle;
    printf("Enter size of sorted array: ");
    scanf("%d", &size);
    printf("Enter sorted array elements:\n");
    for(i = 0; i < size; i++)
   scanf("%d", &arr[i]);
    printf("Enter element to search: ");
    scanf("%d", &key);
    first = 0;
    last = size - 1;
    while(first <= last)
    {
        middle = (first + last) / 2;
        if(arr[middle] == key)
        {
            printf("Element found at position %d", middle + 1);
            return 0;
        }
        else if(arr[middle] < key)
          first = middle + 1;
        else
          last = middle - 1;
    }
    printf("Element not found");
    return 0;
}