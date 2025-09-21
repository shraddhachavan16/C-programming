#include <stdio.h>

int main() {
    char color;

    printf("Enter a color code (B, G, R): ");
    scanf("%c", &color);

    if (color == 'B') {
        printf("Mood: Calm\n");
    } else if (color == 'G') {
        printf("Mood: Fresh\n");
    } else if (color == 'R') {
        printf("Mood: Energetic\n");
    } else {
        printf("Invalid color code.\n");
    }

    return 0;
}
