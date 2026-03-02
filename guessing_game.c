//Program for implementing numbers for guessing game
//NAME: ABDISAMAD ALI MOHAMUD
//REG NO:BCS-03-0001/2026

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess, attempts = 0;
    
    // Seed the random number generator
    srand(time(0));
    secret = (rand() % 20) + 1;

    printf("I'm thinking of a number between 1 and 20!\n");

    while (guess != secret) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secret) {
            printf("Too high!\n");
        } else if (guess < secret) {
            printf("Too low!\n");
        } else {
            printf("Congratulations! It took you %d attempts.\n", attempts);
        }
    }
    return 0;
}