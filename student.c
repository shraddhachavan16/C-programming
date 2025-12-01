#include <stdio.h>

// define structure
struct Student {
    int roll;
    char name[30];
    float marks;
};

int main() {
    struct Student s;   // structure variable

    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    printf("Enter name: ");
    scanf("%s", s.name);    // no & for string

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printf("\n--- Student Details ---\n");
    printf("Roll  : %d\n", s.roll);
    printf("Name  : %s\n", s.name);
    printf("Marks : %.2f\n", s.marks);

    return 0;
}
