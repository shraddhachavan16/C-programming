#include <stdio.h>
int sumdigits(int n);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Sum of digits = %d", sumdigits(num));
    return 0;
}

int sumdigits(int n)
{
    int sum = 0;
    while (n != 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}
