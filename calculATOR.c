#include <stdio.h>
int main() 
{
    int n, i;
    float expense, total = 0;

    printf("Enter number of days: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("Enter expense for day %d: ", i);
        scanf("%f", &expense);
        total += expense;
    }

    printf("\nTotal Expense = %.2f", total);
    printf("\nAverage Expense per day = %.2f\n", total / n);

    return 0;
}
