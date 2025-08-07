#include<stdio.h>
int main()
{
    float cp,sp;
    printf("enter a cp");
    scanf("%f",&cp);
    printf("enter a sp");
    scanf("%f",&sp);
    if(cp>sp)
        printf("loss is%f\n",cp-sp);
    else if(sp>cp)
        printf("profit is%f\n",sp-cp);
    else
        printf("no profit and loss");
    return 0;
}