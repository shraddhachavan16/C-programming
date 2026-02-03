#include<stdio.h>
int main()
{
    int a,b,i,sum1=0,sum2=0;
    printf("enter the two numbers:");
    scanf("%d%d",&a,&b);
    for(i=1;i<a;i++)
    {
        if(a%i==0)
            sum1 +=i;
    }
    for(i=1;i<b;i++)
    {
        if(b%i==0)
            sum2 +=i;
    }
    if(sum1==b && sum2==a)
        printf("Amicable numbers");
    else
        printf("not amicable numberss");
        return 0
}