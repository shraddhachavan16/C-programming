#include<stdio.h>
int main()
{
    int x;
    int square,result;
    printf("enter an integr:");
    scanf("%d",&x);
    square=x*x;
    result=x*x+2*x;
    printf("X*x=%d\n",square);
    printf("x*x+2*x=%d\n",result);
    return 0;
}