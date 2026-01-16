#include<stdio.h>
int main()
{
    int n,x,temp;
    int ans=0;
    printf("enter the number:");
    scanf("%d",&n);
    while(x>0)
    {
        temp=x%10;
        ans=ans*10+temp;
        x=x/10;
    }
    return ans;
}