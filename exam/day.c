#include<stdio.h>
int main()
{
    int i, day,n;
    printf("enter number of day");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&day);
        switch(day)
        {
            case 1:printf("monday\n");
                    break;
            case 2:printf("tuesday\n");
                    break;
            case 3:printf("wednesday\n");
                    break;
            case 4:printf("thrusday\n");
                    break;
            case 5:printf("friday\n");
                    break;
            case 6:printf("saturday\n");
                    break;
            case 7:printf("sunday\n");
                    break;
            default:printf("invalid day\n");
        }
    }
        return 0;
}
    

