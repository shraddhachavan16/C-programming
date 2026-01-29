#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("enter the two number:");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("swapping a=%d and b=%d\n",a,b);
    return 0;
}