//Write a Program to Find Diagonal Sum of a Matrix
#include <stdio.h>
int main(){
    int a[10][10];
    int size, i, j, sum = 0;
    printf("Enter size of square matrix: ");
    scanf("%d", &size);
    printf("Enter matrix elements:\n");
    for(i = 0; i < size; i++)
    {
        for(j = 0; j < size; j++)
            scanf("%d", &a[i][j]);
    }
    for(i = 0; i < size; i++)
        sum = sum + a[i][i];
    printf("Diagonal Sum = %d", sum);
    return 0;
}