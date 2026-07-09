#include <stdio.h>

struct Car
{
    char company[30];
    char model[30];
    int year;
    float price;
};

int main()
{
    struct Car c;

    printf("Enter Company Name: ");
    scanf("%s", c.company);

    printf("Enter Model Name: ");
    scanf("%s", c.model);

    printf("Enter Manufacturing Year: ");
    scanf("%d", &c.year);

    printf("Enter Price: ");
    scanf("%f", &c.price);

    printf("\n----- Car Details -----\n");
    printf("Company : %s\n", c.company);
    printf("Model   : %s\n", c.model);
    printf("Year    : %d\n", c.year);
    printf("Price   : %.2f\n", c.price);


}