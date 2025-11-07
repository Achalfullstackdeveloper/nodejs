#include <stdio.h>
void numberToRoman(int number)
{
    int values[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char roman[13][3] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    for (int i = 0; i < 13; i++)
    {
        int value = number / values[i];
        for (int j = 0; j < value; j++)
        {
            printf("%s", roman[i]);
        }
        number = number % values[i];
    }
}
int main()
{
    for (int number = 1; number <= 20; number++)
    {
        numberToRoman(number);
        printf("\n");
    }
    return 0;
}
// check 
