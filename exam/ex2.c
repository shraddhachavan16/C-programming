#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("enter the n elements");
    scanf("%d",&n);
    int*arr=(int)malloc(sizeof(int)*n);
    if(arr==NULL)
    {
        printf("memory allocation is failed....");
        exit(-1);
    }
    printf("enter array elements");
    for(int i=00;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int count;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
    }
    printf("number of good pairs=%d\n",count);
    free(arr);
    return 0;

}