#include<stdio.h>
int main()
{
    int x;
    int ans=0;
    printf("entr the n number:");
    scanf("%d",&x);
    while(x!=0)
    {
        ans=ans*10+x%10;
        x=x/10;
        return ans;
    }
}