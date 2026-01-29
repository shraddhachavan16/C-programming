#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter the size of square matrix:");
    scanf("%d",&n);
    int matrix[n][n];
    printf("enter the element of matrix");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        scanf("%d",&matrix[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d",matrix[i][i]);
    }
    printf("\n");
}
        
