#include<stdio.h>
int main()
{
    char ch;
    printf("enter a charcter:");
    scanf("%c",&ch);
    if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
        printf("It is an alphabet",ch);
    else
        printf("It is not alphabet",ch);
    return 0;
}