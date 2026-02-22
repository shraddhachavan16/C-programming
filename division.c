#include<stdio.h>
int main()
{
    int a,b,queotient,remainder;
    printf("enter an integer:");
    scanf("%d%d",&a,&b);
    if(a!=b)
    {
        queotient=a/b;
        remainder=a%b;
        printf("queotient=%d\n",queotient);
        printf("remainder=%d\n",remainder);
    }else{
        printf("both numbers are equal\n");
    }
    return 0;
}