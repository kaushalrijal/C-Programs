#include <stdio.h>
#include <ctype.h>

int isAlphabetic(char *str) {
        if (!isalpha(*str)) {
            return 0; // Not alphabetic
        }
    return 1; // All characters are alphabetic
}

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);

    if (isAlphabetic(str)) {
        printf("The string consists of alphabetic characters only.\n");
    } else {
        printf("The string contains non-alphabetic characters.\n");
    }

    return 0;
}