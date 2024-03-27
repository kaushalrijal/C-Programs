#include <stdio.h>

int factorial(int);
int power(int, int);

int main()
{
    int i, x, n;
    float sum = 0;

    printf("Enter the values of x and n: ");
    scanf("%d %d", &x, &n);

    for (i = 1; i <= n; i++)
    {
        sum += (float)power(x, i) / factorial(i);
    }

    printf("The sum of the series is %f", sum);

    return 0;
}

int power(int x, int n)
{
    int prod = 1;
    for (int i = 1; i <= n; i++)
    {
        prod *= x;
    }
    return prod;
}

int factorial(int n)
{
    int fact = 1;
    for (int i = n; i >= 1; i--)
    {
        fact *= i;
    }
    return fact;
}