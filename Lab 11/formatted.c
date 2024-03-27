#include <stdio.h>

int main()
{
    FILE *src, *dest;
    char text[50];

    // Open source file to write
    src = fopen("source.txt", "w");
    if (src == NULL)
    {
        printf("Error Opening File");
        return 1;
    }
    printf("Enter something to write to file: ");
    scanf("%s", text);
    fprintf(src, "%s", text);
    fclose(src);

    // Read from source file and write to destination file
    src = fopen("source.txt", "r");
    dest = fopen("destination.txt", "w");
    fscanf(src, "%s", &text);
    fprintf(dest, "%s", text);
    fclose(src);
    fclose(dest);
    return 0;
}