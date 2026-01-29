#include<stdio.h>
int main()
{
    char ch;
    printf("enter a character:");
    scanf("%c",&ch);
    if ((ch >='A' && ch <='Z')||(ch >='a' && ch <='z'))
        printf(" it is aplhabet");
    else if (ch >= '0' && ch <='9')
        printf("it is digit");
    else
        printf("it is special character");
    return 0;
}