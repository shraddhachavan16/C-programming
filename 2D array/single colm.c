#include<stdio.h>
int main()
{
    int i,rows;
    printf("enter the no rows:");
    scanf("%d",&rows);
    int a[rows][1];
    printf("enter the element of colms:");
    for(i=0;i<rows;i++)
    {
        scanf("%d",&a[i][0]);
    }
    printf("\nsingle colms matrix:\n");
    for(i=0;i<rows;i++)
    {
        printf("%d\n",a[i][0]);
    }
    printf("\n");
    return 0;
}