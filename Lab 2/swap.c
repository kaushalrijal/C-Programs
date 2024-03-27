#include <stdio.h>

int main()
{
    int a = 5, b = 3;
    printf("Before swapping: a=%d\tb=%d", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping: a=%d\tb=%d", a, b);
    return 0;
}