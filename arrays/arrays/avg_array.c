#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    float avg;
    float sum=0;
    printf(" enter nummber of elements:\n");
    scanf("%d",&n);
    int *arr = (int*)malloc(n*sizeof(int));
    if(arr==NULL)
    {
        printf("memory is not allocated:\n");
        return 1;
    }
    printf("enter %d number:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    
    }
        avg=sum/n;
        printf("average=%.2f\n",avg);
        free(arr);
        return 0;
}