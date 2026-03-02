//Program for ATM cash withdrawal system
//NAME: ABDISAMAD ALI MOHAMUD
//REG NO:BCS-03-0001/2026

#include <stdio.h>

int main() {
    float balance, withdrawal;
    
    printf("Enter initial account balance: ");
    scanf("%f", &balance);

    while (balance > 0) {
        printf("Enter amount to withdraw: ");
        scanf("%f", &withdrawal);
        
        balance -= withdrawal;
        printf("Remaining balance: %.2f\n", balance);
    }

    printf("Account empty or overdrawn. Session ended.\n");
    return 0;
}