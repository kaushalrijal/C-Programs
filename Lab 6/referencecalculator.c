#include <stdio.h>

void calculator(float, float, float *, float *, float *, float *);

int main()
{
    float num1, num2, sum, diff, prod;
    float quo;

    printf("Enter the values of a and b: ");
    scanf("%f%f", &num1, &num2);

    calculator(num1, num2, &sum, &diff, &prod, &quo);

    printf("Sum = %.2f\nDifference = %.2f\nProduct = %.2f\nQuotient = %.2f", sum, diff, prod, quo);
    return 0;
}

void calculator(float a, float b, float *sum, float *difference, float *product, float *quotient)
{
    *sum = a + b;
    *difference = a - b;
    *product = a * b;
    *quotient = (float)a / b;
}