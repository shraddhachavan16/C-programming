#include <stdio.h>

int main() {
    int start, end, num, temp, digits, sum, digit, i, power;

    printf("Enter start of range: ");
    scanf("%d", &start);
    printf("Enter end of range: ");
    scanf("%d", &end);

    printf("Armstrong numbers between %d and %d:\n", start, end);

    for (num = start; num <= end; num++) {
        temp = num;
        digits = 0;

        // Count digits
        while (temp > 0) {
            digits++;
            temp = temp / 10;
        }

        temp = num;
        sum = 0;

        while (temp > 0) {
            digit = temp % 10;
            power = 1;

            // Calculate digit^digits
            for (i = 0; i < digits; i++) {
                power = power * digit;
            }

            sum = sum + power;
            temp = temp / 10;
        }

        if (sum == num) {
            printf("%d\n", num);
        }
    }

    return 0;
}
