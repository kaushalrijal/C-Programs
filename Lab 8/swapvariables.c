#include <stdio.h>

int main()
{

    int a, b;

    printf("Enter the values of a and b: ");
    scanf("%d %d", &a, &b);

    // before swapping
    printf("Before swapping a=%d\tb=%d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    // after swapping
    printf("After swapping a=%d\tb=%d", a, b);

    return 0;
}