#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n=0;
    printf("enter the no of elements:");
    scanf("%d",&n);
    int*arr=(int*)malloc(sizeof(int)*n);
    if(arr==NULL)
    {
        printf("memory alloction is failed");
        exit(-1);
    }
    printf("enter the array elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int first=arr[0];
    int second=-1;
    for( int i=1;i<n;i++)
    {
        if(arr[i]>first)
        {
            second=first;
            first=arr[i];
        }else if (arr[i] < first && (second == -1 || arr[i] > second)) 
            second = arr[i];
    }
    if(second==-1)
       printf("there is no second largest element:");
    else
        printf("second largest element%d",second);
    free(arr);
    return 0;
}