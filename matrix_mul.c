#include<stdio.h>
int main()
{
    int n;
    printf("entr the size of matrix:\n");
    scanf("%d",&n);
    int matrix[n][n];
    int ans[n];
    int vector[n];
    for(int i=0;i<n;i++)
    {
        ans[i]=0;
    }
    printf("entr the elemnts of matrix:\n");
    for(int r=0;r<n;r++)
    {
        for(int c=0;c<n;c++)
        {
            scanf("%d",&matrix[r][c]);
        }
    }
    printf("entr the element of matrix:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &vector[i]);
    }
    for(int r=0;r<n;r++)
    {
        for(int c=0;c<n;c++)
        {
            ans[c]+=vector[c]*matrix[r][c];
        }
    }
    printf("Resultant vector:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d\n", ans[i]);
    }

    return 0;
}
