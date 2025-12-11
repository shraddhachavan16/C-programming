#include<stdio.h>
int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}
int main()
{
    int a,b;
    printf("enter the two numbers:");
    scanf("%d%d",&a,&b);
    printf("Maximum = %d\n", max(a ,b));
    return 0;

}