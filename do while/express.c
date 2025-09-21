#include<stdio.h>
int main()
{
    int x;
    int square,result;
    printf("enter an integer x:");
    scanf("%d",&x);
    square=x*x;
    result=square+2*x;
    printf("%d\n",square);
    printf("%d\n",result);
}