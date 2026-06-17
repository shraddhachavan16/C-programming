#include<stdio.h>
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    if(n & 1)
    {
        printf("the number is odd");
    }
    else
    {
        printf("the number is even");
    }
}