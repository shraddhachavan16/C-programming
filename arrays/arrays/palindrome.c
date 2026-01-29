#include<stdio.h>
int main()
{
    int arr[6],n;
    int i=0;
    int j=n-1;
    int flag=1;
    printf("enter the n elements");
    scanf("%d",&n);
    printf("enter array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    while(i<j)
    {
        if(arr[i]!=arr[j])
        {
            printf("not palindrome");
            exit(0);
        }
        i++;
        j--;
    }
    printf("palindrome");
    return 0;
}