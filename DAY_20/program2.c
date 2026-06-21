//Write a Program to Check Symmetric Matrix
#include <stdio.h>
int main(){
    int a[10][10];
    int size, i, j, flag = 1;
    printf("Enter size of square matrix: ");
    scanf("%d", &size);
    printf("Enter matrix elements:\n");
    for(i = 0; i < size; i++)
    {
        for(j = 0; j < size; j++)
            scanf("%d", &a[i][j]);
    }
    for(i = 0; i < size; i++)
    {
        for(j = 0; j < size; j++)
        {
            if(a[i][j] != a[j][i])
            {
                flag = 0;
                break;
            }
        }
    }
    if(flag == 1)
        printf("Matrix is Symmetric.");
    else
        printf("Matrix is Not Symmetric.");
    return 0;
}