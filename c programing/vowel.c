#include<stdio.h>
int main()
{
        char ch;
        printf("enter a charcter:");
        scanf("%c",&ch);
        if((ch>='a' && ch<='z')||(ch>='A' && ch<='z'))
        {
             if (ch == 'a'||ch == 'e'||ch == 'i'||ch == 'o'||ch == 'u'||
                ch == 'A'||ch == 'E'||ch == 'I'||ch == 'O'||ch =='U')
                printf("is vowel");
            else
               printf("is consonanant");
        }
        else
            {
            printf("not an alphabet");
            }
        return 0;
}

