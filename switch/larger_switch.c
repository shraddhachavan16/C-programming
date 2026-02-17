#include<stdio.h>
int main()
{
    int num,check;
    printf("Enter a number:");
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
            printf("Small\n");
            break;
        case 2:
            printf("Equal\n");
            break;
        case 3:
            printf("Larger\n");
            break;
    }
        return 0;
}
