#include<stdio.h>
int main()
{
    int num,sum=0;
    do
    {
        printf("enter a number(0 to stop)");
        scanf("%d",&sum);
        sum=sum+num;
    }while(num!=0);
        printf("%d\n",sum);
    return 0;

}