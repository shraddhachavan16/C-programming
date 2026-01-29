#include<stdio.h>
int main()
{
    int arr[5],i;
    printf("enter the 5 number:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
        if(i%2==0)
        printf("%d",arr[i]);
    }
}