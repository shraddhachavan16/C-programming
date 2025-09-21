#include<stdio.h>
int main()
{
    int n;
    printf("enter a no");
    scanf("%d",&n);
    for( int i=0;i<n;i++)
    {
        if(i%4==0)
            continue;
        else
            printf("%d\n",i);
    }
    return 0;
}