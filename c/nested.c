#include <stdio.h>

int main()
{
    int amount;
    int balance;

    printf("Enter an amount: ");
    scanf("%d", &amount);

    printf("Enter your balance: ");
    scanf("%d", &balance);

     if (amount > balance) {
        printf("Insufficient Funds.");
    }
    else if (amount % 100 != 0) {
        printf("Amount should be a multiple of 100.");
    }
    else {
        printf("Transaction Successful.");
    }

    return 0;
}
