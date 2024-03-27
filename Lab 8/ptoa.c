#include <stdio.h>

int main()
{
    // Array of pointers
    int num1 = 10, num2 = 20, num3 = 30;
    int *arrPtr[3] = {&num1, &num2, &num3};

    printf("Array of pointers:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Value of num%d = %d\n", i + 1, *arrPtr[i]);
    }

    // Pointer to an array
    int arr[3] = {40, 50, 60};
    int *ptrToArr = arr;

    printf("\nPointer to an array:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Value of arr[%d] = %d\n", i, *(ptrToArr + 1));
    }

    return 0;
}