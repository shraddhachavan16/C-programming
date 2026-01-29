#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,j;
    printf("enter the size of array:");
    scanf("%d",&n);
    int *arr=(int*)malloc(sizeof(int)*n);
    if(arr==NULL)
    {
        printf("allocation is failed....");
        return -1;
    }
    printf("enter array elemnts");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                printf("i=%d,j=%d",i,j);
            }
        }
    }
    free(arr);
    return 0;
}