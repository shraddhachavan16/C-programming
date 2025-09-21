#include<stdio.h>
int main()
{
    int has_horn,can_fly;
    printf("has horn?(1/0):");
    scanf("%d",&has_horn);
    printf("can fly?(1/0):");
    scanf("%d",&can_fly);
    if(has_horn==1) 
    {
        if(can_fly==0)
        printf("unicorn\n");
    else
        printf("alicorn\n");
    }else
    {
        if(can_fly==1)
            printf("pegaus\n");
        else
            printf("horse\n");
    }
    return 0;
}