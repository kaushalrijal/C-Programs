// A program to find the sum of the series 1 + 1/2! + 1/3! + ... + 1/n!

#include <stdio.h>
#include <math.h>

int main()
{
    int n, fact = 1;
    float sum = 0;

    printf("Enter the values of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        fact *= i;
        sum += (float)1 / fact;
    }

    printf("The sum of the first %d terms of the series is %.2f", n, sum);

    return 0;
}