#include<stdio.h>
int main()
{
    int amount,discount;
    printf("enter the amount:");
    scanf("%d",&amount);
    if(amount<50)
        printf("discount  is 0");
    else if(amount>=50 && amount<=100)
       printf("discount is 10");
    else if(amount>=101 && amount<=200)
        printf("discount is 20");
    else if(amount>200)
        printf("discount  is 30");
        return 0;
}
