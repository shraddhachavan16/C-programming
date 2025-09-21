#include<stdio.h>
int main()
{
    int x,i,j,n,a[8];
    print("enter the elments:\n");
    scanf("%d %d",&a[i],&a[j]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]+a[j]==x)
            {
                printf("i=%d,j=%d",i,j);
                return 0;
            }
        }
    }
}