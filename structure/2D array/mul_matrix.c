#include<stdio.h>
int main()
{
    int n;
    int r,c;
    printf("entr the size of matrix:");
    scanf("%d",&n);
    int a[n][n];
    int b[n][n];
    int m[n][n];
    printf("entr the element of first matrix:\n ");
    for(int r=0;r<n;r++)
    {
        for(int c=0;c<n;c++)
        {
            scanf("%d",&a[r][c]);
        }
    }
    printf("entr the element of second matrix:\n ");
    for(int r=0;r<n;r++)
    {
        for(int c=0;c<n;c++)
        {
            scanf("%d",&b[r][c]);
        }
    }
    for(int r=0;r<n;r++)
    {
        for(int c=0;c<n;c++)
        {       
            m[r][c]=0;
            for(int k=0;k<n;k++)
            {
                m[r][c]=a[r][k]*b[k][c];
            }
        }
    }
    printf("resultant matrix:\n");
    for(int r=0;r<n;r++)
    {
        for(int c=0;c<n;c++)
        {   
            printf("%d ",m[r][c]);
        }
        printf("\n");
    }
}