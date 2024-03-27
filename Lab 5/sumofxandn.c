// A program to find the sum of the series x + x^2/2 + x^3/3 + ... + x^n/n

#include <stdio.h>
#include <math.h>

int main()
{
    int x, n, i, fact = 1;
    float sum = 0;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        fact *= i;
        sum += (float)(pow(x, i)) / fact;
    }

    printf("The sum of first %d terms of the series is %f", n, sum);

    return 0;
}