#include<stdio.h>
int main()
{
    int n,i=0;
    printf("enter the n");
    scanf("%d",&n);
    while(i<=n)
    {
         int j=1;
        while(j<=n-i)
        {
            printf("%d",j);
            j++;
        }
    }
    printf("\n");
    i++;
}