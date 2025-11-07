#include <stdio.h>
void numberToRoman(int number, char input[16])
{
    int values[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char roman[13][3] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    char output[10] = "";
    for (int i = 0; i < 13; i++)
    {
        int value = number / values[i];
        for (int j = 0; j < value; j++)
        {
            if(strcmp(input, roman[i])==0){
                  strcat(output, roman[i]);
        
            }

          
        }
        number = number % values[i];
    }
}
int a = 10;
int main()
{
    char input[16];
    printf("Enter a roman number : ");
    scanf("%s", input);
    for (int number = 16; number <= 20; number++)
    {
        numberToRoman(number, input);
        printf("\n");
    }
    printf("%d",a);
    return 0;
}
