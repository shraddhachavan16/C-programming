#include<stdio.h>
int main()
{
    int a,b;
    char op;
    double ans=0;
    printf("enter a two number:");
    scanf("%d %d",&a,&b);
    printf("enter a operator(+, -, *, /):");
    scanf("%c",&op);
    switch(op)
    {
        case '+':
                ans=a+b;
                break;
        case '-':
                ans=a-b;
                break;
        case '*':
                ans=a*b;
                break;
        case '/':
                ans=b!=0?a/b:0;
                break;
        default:
                printf("invalid operation");
     }
    }