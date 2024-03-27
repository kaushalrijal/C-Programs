#include <stdio.h>

int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    if (c >= 'A' && c <= 'Z')
    {
        printf("%c is an uppercase alphabet.", c);
    }
    else if (c >= 'a' && c <= 'z')
    {
        printf("%c is a lowercase alphabet.", c);
    }
    else
    {
        printf("%c is not an alphabet.", c);
    }

    return 0;
}