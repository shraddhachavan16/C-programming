#include<stdio.h>
int main()
{
    int arr[5],n=5,i;
    printf("enter %d numbers:\n",n);
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
     int max=arr[0];
    for(i=1;i<5;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        printf("max=%d\n",max);
        return 0;
    }
}