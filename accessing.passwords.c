//Program for prompting passwords
//NAME: ABDISAMAD ALI MOHAMUD
//REG NO:BCS-03-0001/2026

#include <stdio.h>

int main() {
    char password[10];

    do {
        printf("Enter password: ");
        scanf("%s", password);
    } while (strcmp(password, "1234") != 0); // Repeat if password is NOT "1234"

    printf("Access Granted\n");
    return 0;
}