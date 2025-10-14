#include <stdio.h>

int getGrade(int marks)
{
    if (marks >= 86 && marks <= 100)
    {
        printf("GRADE IS A\n");
    }
    else if (marks >= 70 && marks <= 85)
    {
        printf("GRADE IS B+\n");
    }
    else if (marks >= 61 && marks <= 69)
    {
        printf("GRADE IS B\n");
    }
    else if (marks >= 45 && marks <= 60)
    {
        printf("GRADE IS C\n");
    }
    else if (marks >= 33 && marks <= 44)
    {
        printf("GRADE IS D\n");
    }
    else
    {
        printf("FAIL\n");
    }
    return 0;
}

int getMarks(int obtainedMarks, int totalMarks)
{
    int marks = (obtainedMarks * 100) / totalMarks;
    printf("Percentage: %d%%\n", marks);
    return marks;
}

int main()
{
    int obtainedMarks, totalMarks, marks;

    printf("Enter obtained marks: ");
    scanf("%d", &obtainedMarks);

    printf("Enter total marks: ");
    scanf("%d", &totalMarks);

    marks = getMarks(obtainedMarks, totalMarks); 
    getGrade(marks); 
}
