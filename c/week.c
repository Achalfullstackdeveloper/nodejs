#include<stdio.h>
#include<string.h>
int main (){
    char day6[25] = "Saturday";
    char day7[25] = "Sunday";

    char inputone[25];
      printf("Enter the  days: ");
    scanf("%s", inputone);

   
    if (strcmp(inputone, day6) == 0 || strcmp(inputone, day7) == 0)
    {
        printf("Weekened\n");
    }
    else
    {
        printf("Week\n");
    }
}

