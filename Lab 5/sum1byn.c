// A program to display the sum of the series 1 + 1/2 + 1/3 + ... + 1/n

#include <stdio.h>

int main()
{

    int n;
    float sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum += (float)1 / i;
    }

    printf("The sum of first %d terms of the series is %f", n, sum);

    return 0;
}