#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n=0;
    printf("enter the number of elements:");
    scanf("%d",&n);
    int*arr=(int*)malloc(sizeof(int)*n);
    if(arr==NULL)
    {
        printf("memory allocation is failed...");
        return -1;
    }
    printf("enter array elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int neg=0,pos=0,zero=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
            pos++;
        else if(arr[i]<0)
            neg++;
        else
            zero++;
    }
    printf("positive=%d\t negative=%d\t zero=%d\n",pos ,neg,zero);

    int i=0;
    while(i<n)
    {
        int j=i+1;
        while(j<n)
        {
            if(arr[i]+arr[j]>0)
            {
                printf("%d %d\n",arr[i],arr[j]);
            }
            j++;
        }
        i++;
    }
    free(arr);
    return 0;
}