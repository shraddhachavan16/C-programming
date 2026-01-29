#include <stdio.h>

struct Item {
    int weight;
    int cost;
    float profit;
    float ratio;  // profit/weight
};

int main() {
    int n, SP;
    struct Item items[50];
    FILE *out;

    printf("Enter number of items: ");
    scanf("%d", &n);
    printf("Enter Selling Price (SP): ");
    scanf("%d", &SP);

    printf("Enter weight and cost of each item:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &items[i].weight, &items[i].cost);
        items[i].profit = SP - items[i].cost;
        items[i].ratio = items[i].profit / items[i].weight;
    }

    // Selection Sort by profit/weight ratio
    for (int i = 0; i < n - 1; i++) {
        int max = i;
        for (int j = i + 1; j < n; j++) {
            if (items[j].ratio > items[max].ratio)
                max = j;
        }
        struct Item temp = items[i];
        items[i] = items[max];
        items[max] = temp;
    }

    // Write sorted items to file
    out = fopen("sorted_items.txt", "w");
    fprintf(out, "Weight\tCost\tProfit\tProfit/Weight\n");
    for (int i = 0; i < n; i++) {
        fprintf(out, "%d\t%d\t%.2f\t%.2f\n", items[i].weight, items[i].cost,
                items[i].profit, items[i].ratio);
    }
    fclose(out);

    printf("\nSorted list saved in 'sorted_items.txt'\n");
    return 0;
}
