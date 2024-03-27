#include <stdio.h>

int add(int, int);
int sub(int, int);
int mul(int, int);
float quo(int, int);

int main()
{
    int num1, num2;

    printf("Enter two number: ");
    scanf("%d%d", &num1, &num2);

    printf("The sum is %d\n", add(num1, num2));
    printf("The difference is %d\n", sub(num1, num2));
    printf("The product is %d\n", mul(num1, num2));
    printf("The quotient is %f\n", quo(num1, num2));

    return 0;
}

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

float quo(int a, int b)
{
    return (float)a / b;
}