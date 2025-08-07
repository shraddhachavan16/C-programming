#include<stdio.h>
int main()
{
    int a,b,result;
    printf("enter a two integer");
    scanf("%d %d",&a,&b);
    result=a+b;
    printf("addition is %d\n",a+b);
    result=a-b;
    printf("substraction is %d\n",a-b);
    result=a*b;
    printf("multiplication is %d\n",a*b);
    return 0;

}