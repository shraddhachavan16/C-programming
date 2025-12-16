#include<stdio.h>
int largest(int n1,int n2)
{
    if(n1>n2)
        printf("no is larger");
    else
        printf("no is smaller");
}
int main()
{
    int n1,n2;
    printf("enter the two  no:");
    scanf("%d %d",&n1, &n2);
    largest(n1,n2);
    return 0;
}