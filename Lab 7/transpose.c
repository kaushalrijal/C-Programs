#include <stdio.h>

void input(int matrix[][100], int row, int column)
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("Enter the element[%d][%d]", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void print(int mat[][100], int row, int column)
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

void transpose(int matrix[][100], int trans[100][100], int row, int column)
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            trans[j][i] = matrix[i][j];
        }
    }
}

int main()
{
    int matrix[100][100], trans[100][100], row, column, i, j;

    printf("Enter the dimensions of matrix(row and column): ");
    scanf("%d%d", &row, &column);

    input(matrix, row, column);
    printf("Matrix: \n");

    print(matrix, row, column);

    transpose(matrix, trans, row, column);

    printf("Transpose: \n");

    print(trans, column, row);
    return 0;
}
