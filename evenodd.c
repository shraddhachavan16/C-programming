#include <stdio.h>
void evenOdd(int n);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    evenOdd(num); 
    return 0;
}

void evenOdd(int n)
{
    if(n % 2 == 0)
        printf("Number is Even");
    else
        printf("Number is Odd");
}
