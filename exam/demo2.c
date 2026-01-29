#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n=0;
    printf("enter the number of elements:");
    scanf("%d",&n);
    int*arr=(int*)malloc(sizeof(int)*n);
    if(arr==NULL)
    {
        printf("memory allocation is failed...");
        return -1;
    }
    printf("enter array elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int i=n-1;
    while(i>=0)
    {
        printf("%d",arr[i]);
        i--;
    }
    printf("\n");
    free(arr);
    return 0;
}