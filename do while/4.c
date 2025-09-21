#include <stdio.h>
int main() 
{
    int num, i, j, sum;
    for (num = 1; num <= 1000; num++)
     {
        sum = 0;
        for (i = 1; i < num; i++) 
        {
            if (num % i == 0) 
            {
                sum = sum + i;
            }
        }
        if (sum == num)
         {
            printf("%d is a perfect number\n", num);
        }
    }

    return 0;
}
