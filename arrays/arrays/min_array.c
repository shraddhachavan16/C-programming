#include<stdio.h>
int main()
{
    int arr[10],i,n;
    int min=arr[0];
    printf("enter the n elements");
    scanf("%d",&n);
    printf("enter array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("min=%d",min);
    return 0;
}