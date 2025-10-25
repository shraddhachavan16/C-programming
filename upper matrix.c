#include<stdio.h>
int main()
{
    int i,j;
    int rows, colms;
    printf("enter the rows:");
    scanf("%d",&rows);
    printf("entr the colms:");
    scanf("%d",&colms);
    int matrix[rows][colms];
    printf("entr the elements of matrix");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<colms;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("matrix is\n:");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<colms;j++)
        {
            printf("%d\n",matrix[i][j]);
        }
        printf("\n");
    }
    printf("upeer triangular matrix is:");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<colms;j++)
        {
            if(i>j)
                printf("0");
            else
                printf("%d",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}