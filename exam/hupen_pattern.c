#include<stdio.h>
int main()
{
    int i,n=5;
    printf("enter the integer");
    scanf("%d",&i);
    while(i>0)
    {
        printf("%d-",i);
        i--;
    }
    printf("\n");
}