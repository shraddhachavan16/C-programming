#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("enter the n number");
    scanf("%d",&n);
    int*arr=(int*)malloc(sizeof(int)*n);
    if(arr==NULL)
    {
        printf("memory allocation is failed...");
        exit(-1);
    }
    printf("enter array elements");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);

    int evencnt=0,oddcnt=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            arr[i]=0;
            evencnt++;
        }
        else{
            arr[i]=1;
            oddcnt++;
        }
        for(i=0;i<n;i++)
        {
            if(i<evencnt)
            {
                arr[i]=0;
            }
            else
                arr[i]=1;
            }
        }
        printf("asending o")
        free(arr);
       return 0;
}

    