// A program to find sum and difference of two numbers using pointers.
#include <stdio.h>

int main()
{
    int a, b, *p1, *p2, sum, diff;
    p1 = &a;
    p2 = &b;

    printf("Enter two numbers: ");
    scanf("%d%d", p1, p2);

    sum = *p1 + *p2;
    diff = *p1 - *p2;

    printf("Sum = %d\tDifference = %d", sum, diff);
    return 0;
}