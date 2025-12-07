#include<stdio.h>
struct diff
{
    int a;
    int b;
};
int main()
{
    struct diff y;
    printf("entr the first number:");
    scanf("%d",&y.a);
    printf("entr second number:");
    scanf("%d",&y.b);
    int sub=y.a-y.b;
    printf("substrction=%d\n",sub);
    return 0;
}