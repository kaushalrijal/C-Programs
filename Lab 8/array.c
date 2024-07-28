#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50}, *p, i;

    p = arr; // Assigning the address of the array to the pointer

    // Accessing array elements using the pointer
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", *(p + i));
    }

    return 0;
}