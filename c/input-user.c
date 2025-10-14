#include <stdio.h>
#include <string.h>
 
int main()
{
    char email[25] ;
    char username[25] ;
    char password[25] ;
 
    char enteremail[25], enterusername[25], enterpassword[25];
 
    printf("Enter Username: ");
    scanf("%24s", enterusername);
 
    printf("Enter Password: ");
    scanf("%24s", enterpassword);
 
    if (strcmp(username, "username") == 0 || strcmp(username, "samiksha123@gmail.com")==0 && strcmp(password, "password") == 0)
    {
        printf("Login Successful\n");
    }
    else
    {
        printf("Invalid Input! \nTry Again...\n");
    }
    return 0;
}
 
 