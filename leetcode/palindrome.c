#include<stdio.h>
int main()
{
    int MAX=MAX/10,MIN=MIN/10;
    int ans=0;
    int x=0;
    while(x!=0)
    {
        if(MAX<ans||MIN>ans)
        {
            ans=ans*10+(x%10);
            x=x/10;
        }
        printf(ans);
}
}