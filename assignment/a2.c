#include<stdio.h>
int main()
{
    int a,b,ans;
    printf("enter the two number:");
    scanf("%d%d",&a,&b);
    ans=a+b;
    printf("addition=%d\n",ans);
    ans=a-b;
    printf("substraction=%d\n",ans);
    ans=a/b;
    if(b!=0)
        //ans=a/b;
        printf("division=%d\n",ans);
    else
        printf("division not possible");
    return 0;
}