#include <stdio.h>
#include <conio.h>

int main()
{

    char ch;

    puts("Enter a character: ");
    ch = getche();

    puts("\nThe character is: ");
    putchar(ch);

    puts("\nIt's ASCII value is: ");
    printf("%d", ch);
    return 0;
}