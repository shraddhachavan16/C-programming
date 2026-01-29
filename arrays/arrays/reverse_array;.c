#include<stdio.h>
int main()
{
    int arr[10],n;
    int i,j;
    printf("enter n elements:");
    scanf("%d",&n);
    printf("enter array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int temp;
     i=n-1;
     j=0;
    while(j<i)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        j++;
        i--;
    }
    printf("Reversed array:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
     printf("\n");  
     return 0;
}