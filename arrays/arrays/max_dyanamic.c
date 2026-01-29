#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    printf("enter the n elements");
    scanf("%d",&n);
    int *arr=(int*)malloc(sizeof(int)*n);
    if(arr==NULL)
    {
        printf("allocation is failed");
        return 1;
    }
    printf("enter array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
     int max=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
        printf("max=%d ",max);
        free(arr);
        return 0;
    
}