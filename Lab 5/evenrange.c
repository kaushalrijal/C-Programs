// A program to count and display even numbers between a range of numbers provided by the user

#include <stdio.h>

int main()
{
    int a, b;
    int count = 0;

    printf("Enter the lower and upper values: ");
    scanf("%d%d", &a, &b);

    for (int i = a+1; i < b; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\t", i);
            count++;
        }
    }
    printf("\nThe count of even numbers is %d", count);

    return 0;
}