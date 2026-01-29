#include<stdio.h>
int min(int a,int b)
{
    if(a<b)
        return a;
    else
        return b;
}
int main()
{
    int a,b;
    printf("enter the two number:");
    scanf("%d %d",&a,&b);
    printf("Minimum = %d\n", min(a ,b));
    return 0;

}
