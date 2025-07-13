#include <stdio.h>
int main()
{
    int A;
    printf("Enter a Marks:");
    scanf("%d", &A);

    if (A >= 86 && A <= 100)
    {
        printf("GRADE IS A ");
    }
    else if (A >= 61 && A <= 85)
    {
        printf("GRADE IS B+ ");
    }
    else if (A >= 41 && A <= 60)
    {
        printf("GRADE  IS B ");
    }
    else if (A >= 31 && A <= 40)
    {
        printf("GRADE  IS C ");
    }
    else
    {
        printf("FAIL");
    }
    return 0;
}
