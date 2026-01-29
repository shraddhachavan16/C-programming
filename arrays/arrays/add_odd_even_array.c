#include<stdio.h>
int main()
{
    int arr[5],i,ans_o=0,ans_e=0;
    printf("enter the  5 number:\n");
    for(i=0;i<5;i++)
    {
    scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
        if(i%2==0)
            ans_e=ans_e+arr[i];
        else
            ans_o=ans_o+arr[i];
        printf("odd=%d,even=%d",ans_o,ans_e);
    }
}