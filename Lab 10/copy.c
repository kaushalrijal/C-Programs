#include <stdio.h>

void copy(char str1[], char str2[])
{
    int i = 0;
    while (str2[i] != '\0')
    {
        str1[i] = str2[i];
        i++;
    }
    str1[i] = '\0';
}

int main()
{
    char str1[50], str2[50];
    printf("Enter a string: ");
    scanf("%s", str1);

    copy(str2, str1);

    printf("str2 = %s", str2);

    return 0;
}