#include <stdio.h>
int main()
{
    int age = 12;
    int height = 140;
    int inputone, inputtwo;
    printf("Enter the age: ");
    scanf("%d", &inputone);

    printf("Enter the  height: ");
    scanf("%d", &inputtwo);

    if (inputone >= age  &&  inputtwo >= height )
    {
        printf("Get a chance to ride a coller coaster");
    }
    else
    {
        printf(" will not be able to  ride");
    }
}