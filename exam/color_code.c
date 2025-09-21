#include<stdio.h>
int main()
{
    char color;
    printf("enter a color code(R,G,B):");
    scanf("%c",&color);
    switch(color)
    {
        case 1:(color=='R')
                    printf("angry\n");
                    break;
        case 2:if(color=='G')
                    printf("happy\n");
                    break;
        case 3:if(color=='B')
                    printf("sad\n");
                    break;
        case 4:
                    printf("invalid color");
    }   
    return 0;
}