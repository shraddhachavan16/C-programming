#include<stdio.h>
int main()
{
    int n;
    printf("enter the n");
    scanf("%d",&n);
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            if(i%2==1)
                printf("#");
            else
                printf("*");
            j++;
         
        }
        printf("\n");
        i++;
    }
    return 0;
}