
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, *arr, *pos, *neg;
    int p = 0, q = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));
    pos = (int *)malloc(n * sizeof(int));
    neg = (int *)malloc(n * sizeof(int));

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < n; i++) {
        if(arr[i] >= 0)
            pos[p++] = arr[i];
        else
            neg[q++] = arr[i];
    }

    printf("\nPositive numbers:\n");
    for(i = 0; i < p; i++)
        printf("%d ", pos[i]);

    printf("\nNegative numbers:\n");
    for(i = 0; i < q; i++)
        printf("%d ", neg[i]);

    free(arr);
    free(pos);
    free(neg);

    return 0;
}
