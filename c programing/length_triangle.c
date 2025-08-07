#include<stdio.h>

int main() 
{
    float a, b, c;
    printf("Enter three sides of the triangle:\n");
    scanf("%f %f %f", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a)
        printf("valid triangle");
    else
        printf("not valid triangle");
    else if (a=b=c ||a=c ||a!=b!=c)
            printf("eqilateral triangle\n");
        else
            printf("Isosceles triangle\n");
        else
            printf("Scalene triangle\n");
    else 
        printf("Not a valid triangle\n");

    return 0;
}

