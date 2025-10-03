#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("enter the no of elements:");
    scanf("%d",&n);
    int*arr=(int*)malloc(sizeof(int)*n);
    if(arr==NULL)
    {
        printf("memory allocation is failed.......");
        exit(-1);
    }
    printf("enter array elements");
    for( int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0;
    int max=arr[0];
    for( int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("sum of elements=%d",sum);
    printf("max=%d",max);
    
    free(arr);
    return 0;
}