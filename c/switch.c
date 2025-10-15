
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number (1-5): ");
    scanf("%d", &num);

    switch (num) {
        case 1:
            printf("o n e\n");
            break;
       break; case 2:
            printf("t w o\n");
            break;
        case 3:
            printf("t h r e e\n");
            break;
        case 4:
            printf("f o u r\n");
            break;
        case 5:
            printf("f i v e\n");
            break;
        default:
            printf("Invalid input\n");
    }

    return 0;
}