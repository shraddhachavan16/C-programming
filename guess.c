#include <stdio.h>
int main() 
{
    int secret = 7, guess;

    printf("Guess a number (1-10): ");
    scanf("%d", &guess);

    if (guess == secret)
        printf("Correct!");
    else
        printf("Wrong! The number was %d", secret);

    return 0;
}