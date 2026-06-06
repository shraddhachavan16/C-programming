#include<stdio.h>
int main()
{
    int n1=220,n2=284;
    int sum1,sum2;
    for(int i=1;i<n1;i++)
    {
        if(n1%i==0)
        {
            sum1=sum1+i;
        }
        for(int i=1;i<n2;i++)
        {
            if(n2%i==0)
            {
                sum2=sum2+i;
            }
            if(sum1==n2 && sum2==n1)
                printf("Amicable number");
            else
                printf("not Amicable");
        }
    }
     
}