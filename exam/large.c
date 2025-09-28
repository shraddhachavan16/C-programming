#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n=0;
    printf("Enter the elements");
    scanf("%d",&n);
    int*arr=(int*)malloc(sizeof(int)*n);
    if(arr==NULL)
    {
        printf("memory aloction is failed");
        return -1;
    }
    printf("enter array elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int largest=arr[0];
    int smallest=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>smallest)
        {
            largest=arr[i];
        }
        if(arr[i]<largest)
        {
            smallest=arr[i];
        }
        printf("largest=%d\n",largest);
        printf("smallest=%d\n",smallest);
    }
    free(arr);
    return 0;
}