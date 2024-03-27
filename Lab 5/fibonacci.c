// A program to print first n terms of fibonacci series

#include <stdio.h>

int main()
{
    int a = 0, b = 1, n;

    printf("Enter the number of terms you want to display: ");
    scanf("%d", &n);

    printf("%d\t", a);

    for (int i = 2; i <= n; i++)
    {
        printf("%d\t", b);
        b = a + b;
        a = b - a;
    }

    return 0;
}