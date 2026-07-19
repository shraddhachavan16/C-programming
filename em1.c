#include <stdio.h>

struct Student {
    int roll;
    char name[30];
};

void display(struct Student *s) {
    printf("\nRoll = %d", s->roll);
    printf("\nName = %s", s->name);
}

int main() {

    struct Student s;

    printf("Enter Roll: ");
    scanf("%d",&s.roll);

    printf("Enter Name: ");
    scanf("%s",s.name);

    display(&s);

  
}