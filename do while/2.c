#include <stdio.h>

int main() {
    int x, y;
    int x2, x3, y3;
    int result;

    // Input
    printf("Enter two integers (x and y): ");
    scanf("%d %d", &x, &y);

    x2 = x * x;
    x3 = x * x * x;
    y3 = y * y * y;

    // Expression: x^3 + 3x^2 + 4x - y^3
    result = x3 + 3 * x2 + 4 * x - y3;

    // Output
    printf("Result: %d\n", result);

    return 0;
}
