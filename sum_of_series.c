#include<stdio.h>
int main()
{
    int n,i=1;
    double sum=0.0;
    printf("enter a value of n :");
    scanf("%d",&n);
    while(i<=n)
    {
        sum+=1.0 /i;
        i++;
    }
    printf("Sum= %f\n", sum);
    return 0;
}