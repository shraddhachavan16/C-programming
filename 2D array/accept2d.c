#include<stdio.h>
int main()
{
    int n;
    int arr[n][n];
    int row=0;
    int col=0;
    printf("enter the n");
    scanf("%d",&n);
    printf("enter the element of array");
    for(row=0;row<n;row++)
    {
        for(col=0;col<n;col++)
        {
            scanf("%d",&arr[row][col]);
        }
        printf("\n");
        return 0;
    }
}