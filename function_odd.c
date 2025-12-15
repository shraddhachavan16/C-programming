#include<stdio.h>
void evenodd(int n)
{
    if(n%2==0)
        printf("even number:");
    else
        printf("odd number");
}
int main()
{
    int n;
    printf("enter number:");
    scanf("%d",&n);
    evenOdd(n);
    return 0;
}
