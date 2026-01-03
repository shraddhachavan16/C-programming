#include <stdio.h>
struct Complex 
{
    float real;
    float imag;
};

int main() 
{
    struct Complex c;
    printf("Enter real part: ");
    scanf("%f", &c.real);
    printf("Enter imaginary part: ");
    scanf("%f", &c.imag);
    printf("\nGiven Complex Number = %.2f %+.2fi\n", c.real, c.imag);
    printf("Conjugate = %.2f %+.2fi\n", c.real, -c.imag);

    return 0;
}
