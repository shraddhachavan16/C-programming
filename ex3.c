#include<stdio.h>
int main()
{
    int n,j,i=1;
    printf("enter the value of n");
    scanf("%d",&n);
    while(n>=1)
    {
        j=1;
        while(j<=n)
        {
            printf("%d",j);
            j++;
        }
        printf("\n");
        n--;
    }
    return 0;
}