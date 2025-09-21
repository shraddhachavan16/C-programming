#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float d, r1, r2;

    printf("Enter a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = b * b - 4 * a * c;

    if (d >= 0) {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots: %.2f and %.2f\n", r1, r2);
    } else {
        printf("No real roots.\n");
    }

    return 0;
}
