#include<stdio.h>
int main()
{
    int n;
    int r,c;
    printf("entr the size of matrix:");
    scanf("%d",&n);
    int matrix[n][n];
    printf("entr the elemnt of matrix:");
    for(int r=0;r<n;r++)
    {
        for(int c=0;c<n;c++)
        {
            scanf("%d",&matrix[r][c]);
        }
    }
    int num;
    printf("entr enter to multiply:");
    scanf("%d",&num);
    for(int r=0;r<n;r++)
    {
        for(int c=0;c<n;c++)
        {
            matrix[r][c]*=num;
        }
    }
    printf("resultant matrix:\n");
    for(int r=0;r<n;r++)
    {
        for(int c=0;c<n;c++)
        {
            printf("%d ",matrix[r][c]);
        }
    }

}