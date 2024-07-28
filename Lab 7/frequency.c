// A program to count the frequency of elements in an array
#include <stdio.h>

void input(int a[], int *size)
{
    int i;
    printf("Enter the size of array: ");
    scanf("%d", size);
    printf("Enter %d elements: ", *size);
    for (i = 0; i < *size; i++)
    {
        scanf("%d", &a[i]);
    }
}

int main()
{
    int a[100], size, count, freq[100];
    input(a, &size);
    for (int i = 0; i < size; i++)
    {
        count = 1;
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] == a[j])
            {
                count++;
                freq[j] = -1;
            }
        }
        if (freq[i] != -1)
        {
            freq[i] = count;
            printf("Element: %d\tFrequency: %d\n", a[i], freq[i]);
        }
    }
    return 0;
}