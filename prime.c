#include <stdio.h>
int main()
 {
    int num, i = 2;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num <= 1)
    {
        printf("Not prime or composite.\n");
        return 0;
    }

    while (i < num) 
    {
        if (num % i == 0) 
        {
            printf("Composite number.\n");
            return 0;
        }
        i++;
    }

    printf("Prime number.\n");
    return 0;
}
