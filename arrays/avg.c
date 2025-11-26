#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n=0;
    printf("Enter number of array:");
    scanf("%d",&n);
    int*arr=(int*)malloc(sizeof(int)*n);
    if(arr==NULL)
    {
        printf("memory allocation failed..");
        exit(-1);
    }
    printf("enter the array elements:");
    for( int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for( int i=0;i<n;i++)
        sum=sum+arr[i];
        printf("sum=%d\n,sum");
    
    double avg=sum/n;
    printf("average=%f\n",avg);
    free(arr);
    return 0;

}
