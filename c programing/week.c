#include<stdio.h>
int main()
{
    int weekday;
    printf("enter the week(1-7):");
    scanf("%d",&weekday);
    switch(weekday)
    {
        case 1:
            printf("monday\n");
            break;
        case 2:
            printf("tuesday\n");
            break;
        case 3:
            printf("wednesday\n");
            break;
        case 4:
            printf("thrusday\n");
            break;
        case 5:
            printf("friday\n");
            break;
        case 6:
            printf("saturday\n");
            break;
        case 7:
            printf("sunday");
            break;
        default:
        printf("invalid choice");
        return 0;
    }
}