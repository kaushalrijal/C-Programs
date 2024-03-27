// A program to print patterns

#include <stdio.h>

int main()
{
    int rows, i, j, k;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    //  A right angled triangle of numbers
    printf("A pattern of right angled numbers\n");
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    // Inverted right angle triangle of numbers
    printf("A pattern of inverted number triangle\n");
    for (i = rows; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    // Centred triangle with stars
    printf("A pattern of isoceles triangle made up of stars\n");
    for (i = 0; i < rows; i++)
    {
        for (k = rows - 1; k >= i; k--)
        {
            printf(" ");
        }
        for (j = 1; j <= 2 * i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    //  A triangle with consecutive numbers
    printf("A right angled triangle of consecutive numbers \n");
    int l = 0;
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d\t", l);
            l++;
        }
        printf("\n");
    }

    // An inverted triangle with numbers in forward and reverse
    printf("A right angled triangle with numbers in forward and reverse\n");
    for (i = rows; i >= 1; i--)
    {
        for (j = 0; j <= rows - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        for (j = i - 1; j >= 1; j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    // An inverted triangle with numbers in reverse
    printf("An inverted equilateral triangle of numbers\n");
    for (i = 1; i <= rows; i++)
    {
        for (j = rows; j >= i; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}