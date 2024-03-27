#include <stdio.h>

int main()
{
    char str[50];
    int i, begin, end, flag = 1;
    printf("Enter a word: ");
    scanf("%s", str);

    i = 0;
    while (str[i] != '\0')
        i++;

    end = i - 1;
    for (begin = 0; begin < end / 2; begin++)
    {
        if (str[begin] != str[end - begin])
            flag = 0;
    }

    flag ? printf("Palindrome") : printf("Not a palindrome");
    return 0;
}