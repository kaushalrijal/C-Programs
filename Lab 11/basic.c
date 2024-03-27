#include <stdio.h>

int main()
{
    FILE *f;
    char ch;
    f = fopen("file.txt", "w");
    if (f == NULL)
    {
        printf("Error opening file.");
    }
    else
    {
        fprintf(f, "I am the great.");
    }
    fclose(f);
    f = fopen("file.txt", "r");
    if (f == NULL)
    {
        printf("Sorry the file couldn't be opened");
    }
    else
    {
        do
        {
            putchar(ch);
            ch = fgetc(f);
        } while (ch != EOF);
    }
    fclose(f);
}