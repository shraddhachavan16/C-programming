#include<stdio.h>
int swap(int a,int b);
int main()
{
    int x=5,y=10;
    swap(x,y);
    printf("x=%d y=%d",x,y);
    return 0;
}
int swap(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;    
}