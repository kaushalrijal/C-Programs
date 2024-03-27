// A program to write the number in reverse order

#include <stdio.h>

int main()
{
    int original, reversed = 0;

    printf("Enter a number: ");
    scanf("%d", &original);

    while (original != 0)
    {
        reversed = reversed * 10 + (original % 10);
        original /= 10;
    }

    printf("Reversed order = %d", reversed);

    return 0;
}