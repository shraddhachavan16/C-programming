#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter a negative integer: ");
    scanf("%d", &n);
    if (n >= 0) {
        printf("Please enter a negative integer.\n");
        return 1; 
    }
    i = n;
    while (i <= 0)
    {
        if (i % 3 == 0 && i % 5 == 0)
            printf("%d:epic combo\n",i);
        else if (i % 2 == 0 && i % 3 == 0)
            printf("%d:fizztwos\n",i);
        else if (i % 5 == 0)
            printf("%d:buzz deep\n",i);
        else if (i % 3 == 0)
            printf("%d: fizz\n",i);
        else
            printf("%d:chill\n",i);
        i++;
    }
    return 0;
}
