#include<stdio.h>
int main()
{
    int a,b,c,sum;
    printf("enter a three angle of triangle");
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;
    if(a>0 && b>0 && c>0 && sum==180)
        printf("triangle is valid");
    else
        printf("triangle is not valid");
    return 0;
}