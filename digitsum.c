#include<stdio.h>
int main()
{
    int sum=0,n;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        sum+=n%10;
        n/=10;
    }
    printf("Sum of digits: %d", sum);
    return 0;
}