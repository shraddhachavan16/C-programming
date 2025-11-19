#include<stdio.h>
int main()
{
    int n,num,max;
    printf("Enter no of integrs");
    scanf("%d",&n);
    printf("enter no 1");
    scanf("%d",&num);
    max=num;
    printf("after 1st i/p:%d/n",max);
    for(int i=2;i<=n;i++)
    {
        printf("enter a no%d",i);
        scanf("%d",&num);
        if(num>max)
            max=num;
        printf("after %dth input  : %d/n",i,max);
    }
    return 0;
}
