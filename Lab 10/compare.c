// A program to compare two strings

#include <stdio.h>

int compare(char str1[], char str2[])
{
    int i = 0;
    while (str1[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            return 0;
        }
        i++;
    }
    return 1;
}

int main()
{
    char str1[50], str2[50];
    printf("Enter a string: ");
    gets(str1);
    printf("Enter another string: ");
    gets(str2);

    printf("The strings are %s", compare(str1, str2) ? "same" : "different");

    return 0;
}