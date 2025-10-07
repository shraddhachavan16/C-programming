#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("enter the n element");
    scanf("%d",&n);
    int*arr=(int*)malloc(sizeof(int)*n);
    if(arr==NULL)
    {
        printf("memory allocation is failed....");
        exit(-1);
    }
    printf("enter array element:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for( int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
            arr[i]=0;
        else
            arr[i]=1;
    }
    int temp;
    int j;
    for( int i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("modified sorted array:");
    for( int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    free(arr);
    return 0;
}