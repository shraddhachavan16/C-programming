#include<stdio.h>
int main()
{
    int n;
    printf("enter the n number ");
    scanf("%d",&n);
    int i=0,j;
    while(i<n)
    {
        j=1;
        while(j<n-i)
        {
            printf("%d",j);
            j++;
        }
        printf("\n");
        i++;
    }
}