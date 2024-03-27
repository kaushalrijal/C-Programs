#include <stdio.h>

void print(int arr[])
{
    int n = sizeof(*arr) / sizeof(arr[0]);
    printf("Array Length: %d\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    print(arr);

    while (1)
    {
        eat();
        // sleep();
        code();
    }

    return 0;
}