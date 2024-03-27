#include <stdio.h>

int main()
{
    char str1[50];
    printf("Enter a string: ");
    gets(str1);
    int len = 0;
    while (str1[len] != '\0')
        len++;

    printf("The length of the string is %d", len);
    return 0;
}