#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n, i;
    int sum = 0, max;

    printf("Enter the number of elements: ");
    scanf("%d", &n); 
    arr = (int *)calloc(n, sizeof(int));

    if (arr == NULL)
     {
        printf("Memory allocation failed!\n");
        return 1;
    }

    
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) 
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    max = arr[0]; 
    for (i = 0; i < n; i++) {
        sum += arr[i];
        if (arr[i] > max)
            max = arr[i];
    }


    printf("Sum of elements = %d\n", sum);
    printf("Maximum element = %d\n", max);
    free(arr);

    return 0;
}
