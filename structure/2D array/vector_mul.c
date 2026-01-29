#include<stdio.h>

int main()
{
    int n;
    printf("Enter the size of matrix: ");
    scanf("%d", &n);

    int matrix[n][n];
    int vector[n];
    int ans[n];
    for(int i = 0; i < n; i++)
    {
        ans[i] = 0;
    }
    printf("Enter the elements of matrix:\n");
    for(int r = 0; r < n; r++)
    {
        for(int c = 0; c < n; c++)
        {
            scanf("%d", &matrix[r][c]);
        }
    }

    printf("Enter the elements of vector:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &vector[i]);
    }
    for(int r = 0; r < n; r++)
    {
        for(int c = 0; c < n; c++)
        {
            ans[r] += matrix[r][c] * vector[c];
        }
    }

    printf("Resultant vector:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d\n", ans[i]);
    }

    return 0;
}
