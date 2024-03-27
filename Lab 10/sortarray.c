//  A program to input array of strings and also display the strings in alphabetical order

#include <stdio.h>
#include <string.h>

void sort(char str[100][50], int size)
{
    int i, j;
    char temp[50];
    for (i = 0; i < size - 1; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (strcmp(str[i], str[j]) > 0)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }
}

int main()
{
    char str[100][50];
    int size, i;

    // To input words
    printf("Enter the size of array: ");
    scanf("%d", &size);
    printf("Enter %d words: ", size);
    for (int i = 0; i < size; ++i)
    {
        scanf("%s", str[i]);
    }

    sort(str, size);

    printf("The elements in sorted order are: \n");

    for (i = 0; i < size; i++)
    {
        printf("%s\n", str[i]);
    }
}