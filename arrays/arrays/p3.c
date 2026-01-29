#include<stdio.h>
int main()
{
    int arr[5];
    int i,n;
    printf("enter the no of elements:");
    scanf("%d",&n);
    printf("enter array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    int sum=0;
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
        if(arr[i]<min)
            min=arr[i];
    }
    printf("sum of elements=%d\n",sum);
    printf("minimum number=%d\n",min);
    return 0;
}