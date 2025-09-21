#include<stdio.h>
int main()
{
    int n=0,ans=0;
    printf("enter a number=");
    scanf("%d",&n);
    while(n>0)
    {
        ans=(ans*10)+n%10;
        n=n/10;
    }
    printf("reversed no= %d\n",ans);
    return 0;
}