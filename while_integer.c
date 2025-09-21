    #include<stdio.h>
int main()
{
    int n,i=1,sum=0;
    printf("enter a number:");
    scanf("%d",&n);
    while(i <= n)
    {
        sum+=i;
        i++;
    }
        printf("sum of all integer%d\n",i);
        return 0;

}