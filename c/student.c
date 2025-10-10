#include <stdio.h>

int main() {
    char firstName[25], email[30], gender[10], course[20];
    int age;

    printf("Enter your first name: ");
    scanf("%s", firstName); 

    printf("Enter your email: ");
    scanf("%s", email);  // email is a string

    printf("Enter your gender: ");
    scanf("%s", gender);

    printf("Enter your course: ");
    scanf("%s", course);

    printf("Enter your age: ");
    scanf("%d", &age);  // age is an integer

    // Output
    printf("\n--- Student Information ---\n");
    printf("Your name is: %s\n", firstName);
    printf("Your email is: %s\n", email);
    printf("Your gender is: %s\n", gender);
    printf("Your course is: %s\n", course);
    printf("Your age is: %d\n", age);

    return 0;
}
