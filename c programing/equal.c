#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a two integer:");
    scanf("%d %d",&a,&b);
    if(a==0)
        printf("number is equal");
    else if(a>0)
        printf("%d is larger",a);
    else
        printf("%d is larger",b);
        return 0;

}