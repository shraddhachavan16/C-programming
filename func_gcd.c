#include <stdio.h>
int gcd(int a, int b);
int main()
 {
    int x = 12, y = 18;
    printf("GCD = %d", gcd(x, y));
    return 0;
}

int gcd(int a, int b) 
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
