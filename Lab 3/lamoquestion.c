#include <stdio.h>

int main()
{
    int n, isPrime = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("%d", n);
    }
    else if (n == 1)
    {
        printf("1 is neither prime nor composite");
    }
    else if (n == 2)
    {
        printf("2 is the smallest and only even prime number");
    }
    else
    {
        for (int i = 2; i < (n / 2); i++)
        {
            if (n % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
        {
            printf("%d is a prime number.", n);
        }
        else
        {
            printf("%d is a composite number.\n", n);
            if (n % 2 == 0)
            {
                printf("%d is an even number.", n);
            }
            else
            {
                printf("%d is an odd number.", n);
            }
        }
    }

    return 0;
}