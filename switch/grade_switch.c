#include<stdio.h>
int main()
{
    char grade;
    printf("Enter the grade(A,B,C,D,E,F):");
    scanf("%c",&grade);
    switch(grade)
    {
        case 'A':
            printf("excellent");
            break;
        case 'B':
            printf(" very good");
            break;
        case 'C':
            printf("good");
            break;
        case 'D':
            printf("minimum");
            break;
        case 'E':
            printf("need improvement");
            break;
        case 'F':
            printf("fail");
            break ;
        default:
            printf("invalid grade");     
    }
        return 0;
}
