#include<stdio.h>
int main()
{
    int i,j;
    int rows,colms;
    printf("entr the rows:");
    scanf("%d",&rows);
    printf("entr the colms:");
    scanf("%d",&colms);
    int matrix[rows][colms];
    printf("enter the element of matrix:");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<colms;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    for(i=0;i<rows;i++)
    {
        int sum=0;
        for(j=0;j<colms;j++)
        {
            sum=sum+matrix[i][j];
        }
        printf("Sum of row %d = %d\n", i + 1, sum);
    }
    return 0;

}