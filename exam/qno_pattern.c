#include<stdio.h>
int main()
{
    int n,i=1;
    printf("enter the no of rows");
    scanf("%d",&n);
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            printf("%d",j);
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}