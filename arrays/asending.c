#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    printf("enter the no of elements:");
    scanf("%d",&n);
    int*arr=(int*)malloc(sizeof(int)*n);
    if(arr==NULL)
    {
        printf("allocation failed");
        return -1;
    }
    printf("enter array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int evencnt=0,oddcnt=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
            evencnt++;
        else
            oddcnt++;
    }
    for(i=0;i<n;i++)
    {
        if(i<evencnt)
            arr[i]=0;
        else
            arr[i]=1;
           
    }
    printf("array in desending order");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    free(arr);
    return 0;
}

    