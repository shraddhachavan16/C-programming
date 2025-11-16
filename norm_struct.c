#include<stdio.h>
int main()
{
    struct complex num;
    float norm;
    float num;
    printf("entr complex no");
    scanf("%d",&num);
    norm=sqrt(num.real*num.real+num.imag*num.imag);
    printf("norm=%2f\n",norm);
    return 0;
}