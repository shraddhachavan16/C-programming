#include<stdio.h>
    struct add
    {
        int a;
        int b;
    };
int main()
{
        struct add x;
    printf("entr first number:");
    scanf("%d",&x.a);
    printf("entr second number:");
    scanf("%d",&x.b);
    int sum=x.a+x.b;
    printf("addition=%d\n",sum);
    return 0;
}
