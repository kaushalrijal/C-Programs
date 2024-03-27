#include <stdio.h>

int main()
{
    int numbers[100], sum = 0, n;
    float average;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < n; i++)
    {
        sum += numbers[i];
    }

    average = (float)sum / n;

    printf("Sum = %d\tAverage = %.2f", sum, average);
    return 0;
}