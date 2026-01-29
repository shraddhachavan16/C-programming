#include <stdio.h>
int main()
 {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number < 100) 
        printf("small\n");
     else if (number >= 100 && number <= 200) 
        printf("large\n");
     else if (number >= 201 && number <= 300) 
        printf("bigger\n");
     else if (number >= 301 && number <= 400) 
        printf("largest\n");
    else 
        printf("very large\n");
        return 0;
}
