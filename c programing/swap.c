#include<stdio.h>
int main()
{
    int a,b, temp;
    printf("enter a two integer:");
    scanf("%d %d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("after the swapping:%d and %d\n",a,b);
    return 0;
}