//Write a Program to Multiply Two Matrices
#include <stdio.h>
int main(){
    int a[10][10], b[10][10], c[10][10];
    int rows1, cols1, rows2, cols2;
    int i, j, k;
    printf("Enter rows and columns of first matrix: ");
    scanf("%d%d", &rows1, &cols1);
    printf("Enter rows and columns of second matrix: ");
    scanf("%d%d", &rows2, &cols2);
    if(cols1 != rows2)
    {
        printf("Matrix multiplication not possible.");
        return 0;
    }
    printf("Enter first matrix:\n");
    for(i = 0; i < rows1; i++)
    {
        for(j = 0; j < cols1; j++)
            scanf("%d", &a[i][j]);
    }
    printf("Enter second matrix:\n");
    for(i = 0; i < rows2; i++)
    {
        for(j = 0; j < cols2; j++)
            scanf("%d", &b[i][j]);
    }
    for(i = 0; i < rows1; i++)
    {
        for(j = 0; j < cols2; j++)
        {
            c[i][j] = 0;
            for(k = 0; k < cols1; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
    }
    printf("Product Matrix:\n");
    for(i = 0; i < rows1; i++)
    {
        for(j = 0; j < cols2; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}