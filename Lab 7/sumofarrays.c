#include <stdio.h>

int main()
{
    int i, array1[5] = {6, 9, 4, 2, 0}, array2[5] = {1, 0, 2, 3, 4}, sum[5];

    for (i = 0; i < 5; i++)
    {
        sum[i] = array1[i] + array2[i];
    }

    for (i = 0; i < 5; i++)
    {
        printf("%d\t", array1[i]);
    }
    printf("\n");
    printf("+");
    printf("\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", array2[i]);
    }
    printf("\n");
    printf("----------------------------------\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", sum[i]);
    }

    return 0;
}