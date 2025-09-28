#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int* arr = (int*)malloc(sizeof(int) * n);
    if (arr == NULL)
    {
        printf("Memory allocation failed.\n");
        return -1;
    }

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        int isRepeated = 0;

        
        for (int k = 0; k < i; k++)
        {
            if (arr[i] == arr[k])
            {
                isRepeated = 1;
                break;
            }
        }

        if (isRepeated)
            continue;

        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }

        printf("Element %d occurs %d times\n", arr[i], count);
    }

    free(arr);
    return 0;
}
