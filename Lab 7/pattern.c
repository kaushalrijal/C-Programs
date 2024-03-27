#include <stdio.h>

int main()
{
    int i, j;
    char word[] = "Programming";
    int size = sizeof(word) - 2;
    for (i = -1; i < size / 2; i++)
    {
        for (j = i + 1; j < size - i; j++)
        {
            printf("%c", word[j]);
        }
        printf("\n");
    }
    return 0;
}