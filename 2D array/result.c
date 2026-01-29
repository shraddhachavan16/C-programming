#include <stdio.h>
int main() 
{
    int n;
    printf("Enter the size of matrix: ");
    scanf("%d", &n);
    int matrix[n][n];
    int array[n];
    int result[n];
    printf("Enter the elements of %d x %d matrix:\n", n, n);
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < n; c++) 
        {
            scanf("%d", &matrix[r][c]);
        }
    }
    printf("Enter the elements of array of size %d:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < n; i++) 
    {
        result[i] = 0;
        for (int j = 0; j < n; j++) 
        {
            result[i] += matrix[i][j] * array[j];
        }
    }
    printf("Resultant array:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", result[i]);
    }
    printf("\n");
    return 0;
}
