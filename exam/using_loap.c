#include<stdio.h>
int main()
{
    int i,n=5;
    printf("enter the n number:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==1)
            printf("no is odd\n");
        else if(i%2==0 && i%4==0)
            printf("no is even and multiple of 4\n");
        else if(i%2==0 && i%4!=0)
            printf("no is even and not multiple of 4\n");
        else
            printf("no is even\n");    
    }
    return 0;
}
