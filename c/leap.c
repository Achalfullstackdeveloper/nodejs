#include<stdio.h>

int main() {
    int number ;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    (number % 4 == 0) ? printf("Year  %d is leap year.\n", number) : printf("year %d is not leap year.\n",number);
    
    return 0;
}