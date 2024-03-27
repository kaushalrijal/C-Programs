#include <stdio.h>

int main()
{
    int n;
    char sign[10];

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n > 0)
    {
        printf("Postiive");
    }
    else if (n == 0)
    {
        printf("Zero");
    }
    else
    {
        printf("Negative");
    }

    return 0;
}