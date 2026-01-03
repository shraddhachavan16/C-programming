#include<stdio.h>
int add(int a,int b)
{
    return a+b;
}
int main()
{
    int x,y;
    printf("enter two no:");
    scanf("%d %d",&x,&y);
    int result=add(x,y);
    printf("Sum = %d", result);
    return 0;
}

