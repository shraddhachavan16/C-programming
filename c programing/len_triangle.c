#include<stdio.h>
int main()
{
    float a,b,c;
    printf("enter the triangle of length:");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c && a+c>b && b+c>a)
        if(a=b=c)
        printf("is equilateral");
        else if(a=b) 
        printf("is isosceles");
        else 
        printf("is scalene");
    else
        printf("not valid triangle");
    return 0;
}