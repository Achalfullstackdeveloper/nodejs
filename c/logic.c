
#include <stdio.h>
#include <string.h>

int main()
{
    char email[25] = "achalp@gmail.com";
    char username[25] = "achalp";
    char password[25] = "1234";

    char input_email[25], input_username[25], input_password[25];

    printf("Enter the email: ");
    scanf("%s", input_email);

    printf("Enter the username: ");
    scanf("%s", input_username);

    printf("Enter the password: ");
    scanf("%s", input_password);

    if (strcmp(input_email, email) == 0 || strcmp(input_username, username) == 0 && strcmp(input_password, password) == 0)
    {
        printf("Login Success\n");
    }
    else
    {
        printf("Invalid credentials\n");
    }
}
