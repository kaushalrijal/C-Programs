#include <stdio.h>

int main()
{
    int i = 10;
    float f = 4.2;
    char c = 'k';

    printf("i=%d\tf=%f\tc=%c\n", i, f, c);

    printf("Size of i = %d\n", sizeof(i));
    printf("Size of f = %d\n", sizeof(f));
    printf("Size of c = %d\n", sizeof(c));
    return 0;
}