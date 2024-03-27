#include <stdio.h>

int main()
{
    // Variables declaration
    char name[30];
    char address[50];

    // Input name from the user
    puts("Enter your name: ");
    gets(name);

    // Input address from the user
    puts("Enter your address: ");
    gets(address);

    // Display name and address using unformatted I/O
    puts("\nYour name: ");
    puts(name);
    puts("\nYour address: ");
    puts(address);

    return 0;
}
