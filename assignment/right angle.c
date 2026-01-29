#include<stdio.h>
int main()
{
    int n,i=1;
    printf("entr the n");
    scanf("%d",&n);
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            printf("%d",j);
            j++;
        }
        prinf("\n");
        i++;
    }

}