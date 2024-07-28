// A program to read two values from user in main and perform addition, subtraction, multiplication and division in a function calculator() by using concept of passing by reference
#include <stdio.h>

int calculator(int, int, int *, int *, int *, float *);

int main()
{
    int a, b, sum, diff, prod;
    float quo;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    calculator(a, b, &sum, &diff, &prod, &quo);

    printf("Sum = %d\tDifference = %d\tProduct = %d\tQuotient = %f", sum, diff, prod, quo);
    return 0;
}

int calculator(int n1, int n2, int *sum, int *diff, int *prod, float *quo)
{
    *sum = n1 + n2;
    *diff = n1 - n2;
    *prod = n1 * n2;
    *quo = (float)n1 / n2;
}