#include<stdio.h>
int main()
{
    int i,n;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        (n%2==0)?printf("%d\n is odd"):printf("%d\n is even");
    }
            return 0;
}