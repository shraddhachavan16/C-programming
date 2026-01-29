#include<stdio.h>
int main()
{
    int arr[5],i,j,x=5,n;
    printf("enter the 5 element\n");
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==x)
            {
                printf("i=%d,j=%d",i,j);
            }
            return 0;
        }
    }


}
