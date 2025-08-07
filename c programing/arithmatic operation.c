#include<stdio.h>
int main()
{
    int a,b;
    char op;
    printf("enter a two number:");
    scanf("%d%d",&a,&b);
    printf("enter a operator(+, -, *, /)\n ");
    scanf("%c",&op);
    switch(op)
    {
        case '+':
                printf("ans:%d",a+b);
                break;
        case '-':
                printf("ans:%d",a-b);
                break;
        case '*':
                printf("ans:%d",a*b);
                break;
        case '/':
            if(b!=0)
                printf("ans:%d",a/b);
            else
                printf("zero");
                break;
        default:
                printf("invalid operator");
     }
    return 0;
    }