#include <stdio.h>

int main()
{
    FILE *source, *dest;
    char ch;

    // Open the source file in read mode
    source = fopen("source.txt", "r");
    if (source == NULL)
    {
        printf("Unable to open the source file.\n");
        return 1;
    }

    // Open the destination file in write mode
    dest = fopen("destination.txt", "w");
    if (dest == NULL)
    {
        printf("Unable to create the destination file.\n");
        return 1;
    }

    // Read characters from source file and write them to destination file
    ch = fgetc(source);
    while (ch != EOF)
    {
        fputc(ch, dest);
        ch = fgetc(source);
    }

    // Close the files
    fclose(source);
    fclose(dest);

    printf("File copied successfully.\n");

    return 0;
}