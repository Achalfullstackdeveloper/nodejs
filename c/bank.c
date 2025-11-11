#include <stdio.h>

int main() {
    int choice;
    float balance = 0.0, amount;

    while (1) {
        printf("\nBank Management System\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);

            if (amount <= 0) {
                printf("Invalid amount! Deposit must be greater than zero.\n");
            } else {
                balance += amount;
                printf("Deposited: %.2f\n", amount);
            }
        } 
        else if (choice == 2) {
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);

            if (amount <= 0) {
                printf("Invalid amount! Withdrawal must be greater than zero.\n");
            } 
            else if (amount > balance) {
                printf("Insufficient balance! Transaction failed.\n");
            } 
            else {
                balance -= amount;
                printf("Withdrawn: %.2f\n", amount);
            }
        } 
        else if (choice == 3) {
            printf("Current Balance: %.2f\n", balance);
        } 
        else if (choice == 4) {
            printf("Exiting the system. Goodbye!\n");
            break;
        } 
        else {
            printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
