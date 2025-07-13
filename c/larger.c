#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    if (a > b) {
        printf("a is largest: %d\n", a);
    } else if (b > a) {
        printf("b is largest: %d\n", b);
    } else {
        printf("Both numbers are equal: %d\n", a);
    }

    return 0;
}
