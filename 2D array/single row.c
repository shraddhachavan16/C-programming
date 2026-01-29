#include<stdio.h>
int main()
{
    int i,colms;
    printf("enter the no of colms:");
    scanf("%d",&colms);
    int a[1][colms];
    printf("enter the elements of row:");
    for(i=0;i<colms;i++)
    {
        scanf("%d",&a[0][i]);
    }
    printf("single row matrix\n");
    for(i=0;i<colms;i++)
    {
        printf("%d\t",a[0][i]);
    }
    printf("\n");
    return 0;
}