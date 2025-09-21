#include<stdio.h>
int main()
{
   int days,month,year;
   printf("enter month number(1-12):");
   scanf("%d",&month);
   printf("enter the year:");
   scanf("%d",&year);
   switch(month)
   {
    case 1:case 3:case 5:case 7:case 8: case 10: case 12:
            days=31;
            break;
    case 4:case 6:case 9:case 11:
            days =30;
            break;
    case 2:
        if((year%400==0)|| (year%4==0 && year%100!=0))
            days =29;
        else
            days= 28;
        break;
    default:
        printf("invalid choice");
        break;
    return 1;
   }
   printf("number of days=%d\n",days);
   return 0;
}