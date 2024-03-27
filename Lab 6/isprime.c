#include <stdio.h>

int isPrime(int);

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("The number you entered is %s", isPrime(n) == 1 ? "a prime number" : "not a prime number");

    return 0;
}

int isPrime(int n)
{
    for (int i = 2; i <= (n / 2); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}