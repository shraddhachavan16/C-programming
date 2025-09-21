#include<stdio.h>
int main()
{
    int n,cnt;
    printf("enter a number");
    scanf("%d",&n);
    while(n>0)
    {
        n=n/10;
        cnt++;
    }
    printf("cnt=%d",cnt);
}