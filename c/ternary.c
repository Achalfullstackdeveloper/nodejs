#include<stdio.h>

int main() {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    (number % 2 == 0) ? printf("Number %d is even.\n", number) : printf("Number %d is odd.\n", number);
    
    return 0;
}
