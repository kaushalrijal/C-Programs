// A program to determine whether a number is a palindrome or not

#include <stdio.h>

int main()
{
    int num, original, reversed = 0;

    printf("enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0)
    {
        reversed *= 10;
        reversed += num % 10;

        num /= 10;
    }

    (original == reversed) ? printf("Palindrome.") : printf("Not a palindrome.");

    return 0;
}