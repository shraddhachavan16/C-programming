#include<stdio.h>
int main()
{
    int i,n;
    printf("enter the n elements");
    scanf("%d",&n);
    int*arr=(int*)malloc(sizeof(int)*n);
    if(arr==NULL)
    {
        printf("memory allocation id failed");
        return 1;
    }
    printf("enter array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
        printf("min=%d",min);
        free(arr);
        return 0;
}