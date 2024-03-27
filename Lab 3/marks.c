/*
WAP in C to input marks of five subjects C-programming, Physics, Maths, Applied Mechanics and Basic electrical. Display whether the student passed or failed. Take F.M=100 and P.M.=40 For passed students calculate percentage and grade according to following:
Percentage >= 90% : A Percentage >=80% : B Percentage >= 70% : C Percentage >= 60% : D Percentage >= 40% : E
*/

#include <stdio.h>

int main()
{
    int c, physics, math, applied, electrical;
    float percentage;
    char grade;

    printf("Enter the marks in C, Physics, Maths, Applied Mechanics and Basic Electrical: ");
    scanf("%d%d%d%d%d", &c, &physics, &math, &applied, &electrical);

    if (c < 40 || physics < 40 || math < 40 || applied < 40 || electrical < 40)
    {
        printf("Padhna bas bhai\n");
    }
    else
    {
        printf("Congratulations, you passed!\n");

        percentage = (float)(c + physics + math + applied + electrical) * 100 / 500;
        printf("Your percentage is %.2f.\n\%", percentage);
        if (percentage >= 90)
        {
            grade = 'A';
        }
        else if (percentage >= 80)
        {
            grade = 'B';
        }
        else if (percentage >= 70)
        {
            grade = 'C';
        }
        else if (percentage >= 60)
        {
            grade = 'D';
        }
        else
        {
            grade = 'E';
        }

        printf("Grade = %c", grade);
    }
    return 0;
}
