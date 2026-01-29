#include<stdio.h>
int main()
{
    int arr[100],n;
    int i,j,flag=1;
    printf("enter the n elements");
    scanf("%d",&n);
    printf("enter array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    i=0;
    j=n-1;
    while(i<j)
    {
        if(arr[i]!=arr[j])
        {
        flag=0;
        break;
        }
        i++;
        j--;
    }

    if(flag==1)
        printf("array is palindrome\n");
    else
        printf("array is not palindrome\n");

        return 0;

}