#include <stdio.h>

struct Item {
    int weight;
    float cost, profit, ratio;
};

int main() {
    int n, i, j, max;
    float sp;

    printf("Enter number of items: ");
    scanf("%d", &n);

    printf("Enter selling price (SP): ");
    scanf("%f", &sp);

    struct Item a[n];

    printf("Enter weight and cost price of each item:\n");
    for (i = 0; i < n; i++) {
        scanf("%d %f", &a[i].weight, &a[i].cost);
        a[i].profit = sp - a[i].cost;
        a[i].ratio = a[i].profit / a[i].weight;
    }

    // Selection sort (descending by ratio)
    for (i = 0; i < n - 1; i++) {
        max = i;
        for (j = i + 1; j < n; j++) {
            if (a[j].ratio > a[max].ratio)
                max = j;
        }
        if (max != i) {
            struct Item temp = a[i];
            a[i] = a[max];
            a[max] = temp;
        }
    }

    printf("\nSorted items (Weight, Cost, Profit, Profit/Weight):\n");
    for (i = 0; i < n; i++)
        printf("%d %.2f %.2f %.2f\n", a[i].weight, a[i].cost, a[i].profit, a[i].ratio);

    return 0;
}
