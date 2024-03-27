// A program to sort array in descending order

#include <stdio.h>

int main()
{
    int array[100], n, i, j, temp;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < n; i++)
    {

        for (j = i + 1; j < n; j++)
        {
            if (array[i] < array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    printf("The numbers in descending order are:\n");

    for (int k = 0; k < n; k++)
    {
        printf("%d\t", array[k]);
    }
    return 0;
}