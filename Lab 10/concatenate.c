#include <stdio.h>

void concatenate(char str1[], char str2[])
{
    int len = 0, i = 0;
    while (str1[len] != '\0')
        len++;

    while (str2[i] != '\0')
    {
        str1[len + i] = str2[i];
        i++;
    }
    str1[len + i] = '\0';
}

int main()
{
    char str1[50], str2[50];
    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);

    concatenate(str1, " ");
    concatenate(str1, str2);

    printf("str1 = %s", str1);
    return 0;
}