#include <stdio.h>

void input(int array[], int *size)
{
    int i;
    printf("Enter the size of your array: ");
    scanf("%d", size);
    printf("Enter %d elements: ", *size);
    for (i = 0; i < *size; i++)
    {
        scanf("%d", &array[i]);
    }
}

void minmax(int array[], int size, int *min, int *max)
{
    int i;
    *max = array[0];
    *min = array[0];

    for (i = 1; i < size; i++)
    {
        if (array[i] > *max)
        {
            *max = array[i];
        }
        if (array[i] < *min)
        {
            *min = array[i];
        }
    }
};

int main()
{
    int arr[5], size, min, max;

    input(arr, &size);

    minmax(arr, size, &min, &max);

    printf("Maximum = %d\tMinimum = %d", max, min);

    return 0;
}
