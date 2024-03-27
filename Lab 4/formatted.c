// A program to be familiar with formatted and unformatted i/o

#include <stdio.h>

int main()
{
    int a = 15, c = 35;
    float b = 20.43;

    printf("A = %6d|%-6d|%6d|%-6d|%6d|%-6d|%6d|%-6d|%6d|%-6d|\n", a, a, a, a, a, a, a, a, a, a);
    printf("B = %6.2f|%-6.2f|%6.2f|%-6.2f|%6.2f|%-6.2f|%6.2f|%-6.2f|%6.2f|%-6.2f|\n", b, b, b, b, b, b, b, b, b, b);
    printf("C = %6d|%-6d|%6d|%-6d|%6d|%-6d|%6d|%-6d|%6d|%-6d|\n", c, c, c, c, c, c, c, c, c, c);

    return 0;
}