#include <stdio.h>

int main()
{

    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("%d is the smaller number.", ((a > b) ? b : a));

    return 0;
}