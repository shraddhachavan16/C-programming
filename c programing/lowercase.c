#include<stdio.h>
int main()
{
    char ch;
    printf("enter a character:");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
        printf(" it is in uppercase");
    else if(ch>='a' && ch<='z')
        printf("it is in lowecase");
    else
        printf("it is not alphabet");
    return 0;
}