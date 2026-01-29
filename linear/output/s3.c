        #include <stdio.h>

        struct Item {
            int weight;
            int cost;
            float profit;
            float ratio;
        };

        int main() {
            FILE *in, *out;
            int n = 0;
            float capacity, totalProfit = 0.0;

            struct Item items[50];

            in = fopen("input.txt", "r");
            if (in == NULL) {
                printf("File not found! Run P1 first.\n");
                return 1;
            }

            char temp[100];
            fgets(temp, 100, in); // Skip header

            while (n < 50 && fscanf(in, "%d %d %f %f", &items[n].weight, &items[n].cost,
                        &items[n].profit, &items[n].ratio) == 4) {
                n++;
            }
            fclose(in);

            printf("Enter knapsack capacity: ");
            scanf("%f", &capacity);

            out = fopen("output.txt", "w");
            fprintf(out, "Selected Items (Weight - Profit):\n");

            for (int i = 0; i < n; i++) {
                if (capacity >= items[i].weight) {
                    capacity -= items[i].weight;
                    totalProfit += items[i].profit;
                    fprintf(out, "%d\t%.2f\n", items[i].weight, items[i].profit);
                } else {
                    float fraction = capacity / items[i].weight;
                    totalProfit += items[i].profit * fraction;
                    fprintf(out, "%.2f\t%.2f (Fraction %.2f)\n", 
                            capacity, items[i].profit * fraction, fraction);
                    break;
                }
            }

            fprintf(out, "\nTotal Profit: %.2f\n", totalProfit);
            fclose(out);

            printf("Knapsack selection saved in 'output.txt'\n");
            return 0;
        }
