#include<stdio.h>
int main()
{
    int n,i=1 ,sum=0;
    printf("enter a number:");
    scanf("%d",&n);
    while(i<=n)
    {
        sum+=i;
        i+=2;
    }
    printf("sum of odd number%d",sum);
    return 0;
}