#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter the size of square matrix:(n*n)");
    scanf("%d",&n);
    int matrix[n][n];
    printf("entr the elemnt of matrix:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("\nAntidiagonal elements:\n");
    for(i = 0; i < n; i++) 
    {
        printf("%d ", matrix[i][n - 1 - i]);
    }
    printf("\n");
    return 0;
}
