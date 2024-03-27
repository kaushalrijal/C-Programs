#include <stdio.h>

int fibonacci(int);

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("The %dth fibonacci number is %d", n, fibonacci(n));

    return 0;
}

int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}