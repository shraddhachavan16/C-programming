#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n=0;
    printf("enter the number of elements:");
    scanf("%d",&n);
    int*arr=(int)malloc(sizeof(int)*n);
    if(arr==NULL)
    {
        printf("memory alloction is failed....");
        return -1;
    }
    printf("enter the elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int pos=0,neg=0,zero=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
            pos++;
        else if(arr[i]<0)
            neg++;
        else
            zero++;
    }
    printf("positive=%d\t negative=%d\t zero=%d\n",pos,neg,zero);

    int i,j;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]>0)
            {
                printf("%d %d\n",arr[i],arr[j]);
            }
        }
    }
    free(arr);
    return 0;
}