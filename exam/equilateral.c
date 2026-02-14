#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three angles:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>0 && b>0 && c>0 &&(a+b+c==180))
        printf("Triangle is valid\n");
    else
        printf("Triangle is not valid\n");
    return 0;
}