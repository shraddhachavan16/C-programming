#include<stdio.h>
int main()
{
    int num,check;
    printf("enter a number:");
    scanf("%d",&num);
    if(num<10)
        check=1;
    else if(num==10)
        check=2;
    else
        check=3;
    switch(check)
    {
        case 1:
            printf("small\n");
            break;
        case 2:
            printf("equal\n");
            break;
        case 3:
            printf("larger\n");
            break;
    }
        return 0;
}