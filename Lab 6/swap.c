#include <stdio.h>

void Swap(int *, int *);

int main()
{

    int a, b;
    printf("Enter two number: ");
    scanf("%d%d", &a, &b);

    printf("Before swapping a=%d b=%d\n", a, b);
    Swap(&a, &b);
    printf("After swapping a=%d b=%d", a, b);
    return 0;
}

void Swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}