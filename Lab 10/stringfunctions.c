// A program to illustrate the use of string functions

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Hello", str2[] = "World", str3[50];
    int l1, l2;
    l1 = strlen(str1);
    printf("Length of str1 = %d\n", l1);
    strcpy(str3, str1);
    printf("str3 = %s\n", str3);
    strcat(str3, " ");
    strcat(str3, str2);
    printf("After concatenation: %s\n", str3);
    strrev(str3);
    printf("The reverse of the string is: %s\n", str3);
    if (strcmp(str1, "Hello") == 0)
        printf("Equal");
    else
        printf("Not Equal");
    return 0;
}