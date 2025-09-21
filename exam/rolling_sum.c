#include<stdio.h>
int main()
{
    int num,sum=0;
    printf("enter number(-1) to stop:");
    scanf("%d",&num);
    while(1)
    {
        if(num==-1)
            break;
            sum=sum+num;
        if(num%13==0)
            sum=0;
        printf("sum=%d\n",sum);
    }
    return 0;
}