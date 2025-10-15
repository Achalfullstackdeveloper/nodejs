
#include <stdio.h>

int main()
{
    int hour;
    printf("Enter the hour : ");
    scanf("%d", &hour);

    switch (hour)
    {
    case (hour > 5 && hour < 11):
        printf("Good Morning\n");
        break;
    case (hour > 12 && hour < 17):
        printf("Good Afternoon\n");
        break;
    case (hour > 18 && hour < 21):
        printf("Good Evening\n");
        break;
    case (hour > 22 && hour < 23 || hour > 0 && hour < 4):
        printf("Good Night\n");
        break;
    default:
        printf("Invalid hour\n");
    }
    return 0;
}