#include <stdio.h>
int main() {
    float temperature;
    printf("Enter a Temperature: ");
    scanf("%f", &temperature);
    (temperature >= 40) ?
        printf("Very Hot\n") :
        (temperature >= 30) ?
            printf("Hot\n") :
            (temperature >= 20) ?
                printf("Warm\n") :
                (temperature >= 10) ?
                    printf("Cool\n") :
                    (temperature >= 0) ?
                        printf("Cold\n") :
                        printf("Freezing \n");
    return 0;
} 
