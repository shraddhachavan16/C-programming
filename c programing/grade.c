#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5,total;
    float percentage;
    char grade;
    printf("enter a marks of  5 subject\n");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    total=m1+m2+m3+m4+m5;
    percentage=total/5.0;
    if(percentage>=90)
        grade='A';
    else if(percentage>=80)
        grade='B';
    else if(percentage>=70)
        grade='C';
    else if(percentage>=60)
        grade='D';
    else if(percentage>=50)
        grade='E';
    else
        grade='F';
    printf("total%d\n",total);
    printf("percentage%.2f\n",percentage);
    printf("grade%c\n",grade);
    return 0;
}