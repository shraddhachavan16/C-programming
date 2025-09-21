#include<stdio.h>
int main()
{
    int num,i=1,sum=0;
    printf("enter a number");
    scanf("%d",&num);
    while(i<=num)
    {
        sum+=i*i;
        i++;
    }
    printf("sum of=%d\n",sum);
    return 0;

}