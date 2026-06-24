#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter string: ");
    scanf("%s", str);

    if(strlen(str) == 4)
        printf("true");
    else
        printf("false");

    return 0;
}