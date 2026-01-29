#include<stdio.h>
int main()
{
    int f1=0,f2=1,f3;
    int n,i=1;
    printf("enter a number:");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\n",f1);
        f3=f1+f2;
        f1=f2;
        f2=f3;
        i++;
    }
    return 0;
}