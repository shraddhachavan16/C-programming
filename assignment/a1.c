#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the two integr:");
    scanf("%d%d",&a,&b);
    printf("addition=%d\n",a+b);
    printf("substraction=%d\n",a-b);
    if(b!=0)  
        printf("division=%d\n",a/b);
    else
        printf("diviosion is zero");
}