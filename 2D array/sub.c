#include<stdio.h>
int main()
{
    int n;
    printf("entr the size of matrix:");
    scanf("%d",&n);
    int matrix1[n][n];
    printf("enter the first matrix:\n");
    for(int r=0;r<n;r++)
    {
        for(int c=0;c<n;c++)
        {
            scanf("%d",&matrix1[r][c]);
        }
    }
    int matrix2[n][n];
    printf("entr the secod matrix:\n");
    for(int r=0;r<n;r++)
    {
        for(int c=0;c<n;c++)
        {
            scanf("%d",&matrix2[r][c]);
        }
    }
    int matrix[n][n];
    for(int r=0;r<n;r++)
    {
        for(int c=0;c<n;c++)
        {
            matrix[r][c]=matrix1[r][c]-matrix2[r][c];
        }
    }
    printf("sub of matrix:\n");
    for(int r=0;r<n;r++)
    {
        for(int c=0;c<n;c++)
        {
            printf("%d ",matrix[r][c]);
        }
        printf("\n");
    }



}