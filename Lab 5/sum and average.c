// A program to find the sum and average of 10 numbers uisng for loops

#include <stdio.h>

int main()
{
    int num, sum = 0;
    float avg;

    for (int i = 0; i < 10; i++)
    {
        i == 0 ? printf("Enter a number: ") : printf("Enter another number: ");
        scanf("%d", &num);
        sum += num;
    }

    avg = (float)sum / 10;

    printf("Sum = %d\tAverage = %.2f", sum, avg);

    return 0;
}