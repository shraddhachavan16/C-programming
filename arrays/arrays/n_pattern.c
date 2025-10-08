#include<stdio.h>
int main()
{
    int n,i=0,j;
    printf("enter the n element:");
    scanf("%d",&n);
    while(i<n)
    {
        j=1;
        while(j<(n-i))
        {
            printf("%d",j);
            j++;
        }
         printf("\n");
        i++;
    }
}