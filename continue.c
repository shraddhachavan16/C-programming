#include <stdio.h>

int main() {
    int N, i;

    printf("Enter a number N: ");
    scanf("%d", &N);

    for (i = N; i >= 1; i--) {
        if (i % 4 != 0 || i % 6 != 0)
            continue;

        printf("%d\n", i);
        break;
    }

    return 0;
}
