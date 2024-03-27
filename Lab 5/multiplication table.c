// A program to display the multiplication table of any number entered by the user

#include <stdio.h>

int main()
{

    int num, product;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= 10; i++)
    {
        product = num * i;
        printf("%d X %d = %d\n", num, i, product);
    }

    return 0;
}