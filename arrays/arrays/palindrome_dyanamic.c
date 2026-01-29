#include<stdio.h>
int main()
{
    int n;
    int i,j,flag=1;
    printf("enter the n elements");
    scanf("%d",&n);
    int*arr=(int*)malloc(sizeof(int)*n);
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
        printf("array is palindrome");
    else
        printf("array is not palindrome");

    free(arr);
    return 0;
    }
