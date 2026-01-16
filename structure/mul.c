#include<stdio.h>
struct mul
{
    int a;
    int b;
};
int main()
{
    struct mul x;
    printf("entr first number:");
    scanf("%d",&x.a);
    printf("entr second number");
    scanf("%d",&x.b);
    int product=x.a*x.b;
    printf("multiplication=%d",product);
    return 0;
}