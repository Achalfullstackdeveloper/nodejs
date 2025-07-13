#include <stdio.h>
#include <string.h>

int main()
{
    char member[25] = "Shreya"; 
    char username[25]="Achal"; 
    int totalamount;  
    int discount;


    printf("Enter the Username: ");
    scanf("%s", username);

    printf("Enter the Total Amount: ");
    scanf("%d", &totalamount);


    if (totalamount >= 5000 && strcmp(username, member) == 0)
    {
        discount = totalamount * 30 / 100;
    }
    else
    {
        discount = totalamount * 5 / 100;
    }

    
    printf("Total Amount: %d\n", totalamount);
    printf("Discount Applied: %d\n", discount);
    printf("Final Price: %d\n", totalamount - discount);

    return 0;
}
