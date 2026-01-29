#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("enter the n elements:");
    scanf("%d",&n);
    int*arr=(int*)malloc(sizeof(int)*n);
    if(arr==NULL)
    {
        printf("memory allocation is failed");
        exit(-1);
    }
    printf("enter array elemnts:");
    for( int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int i,j;
    while(i<=1)
    {
        j=1;
    while(j>i)
    {
            printf("%d",j);
            j++;
    }
        i--;
    }
    free(arr);
    return 0;
}