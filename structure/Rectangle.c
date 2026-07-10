#include<stdio.h>
struct Rectangle
{
    float length;
    float width;
};

int main()
{
    struct Rectangle r;
    float area;
    printf("enter length:");
    scanf("%f",&r.length);
    printf("enter width:");
    scanf("%f",&r.width);
    area = r.length * r.width;
    printf("area of rectangle: %f", area);
    return 0;
}