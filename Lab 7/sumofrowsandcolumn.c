#include <stdio.h>

void input(int matrix[][100], int row, int col)
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
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

void sum(int matrix[][100], int row, int col)
{
    int i, j, sum = 0;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            sum += matrix[i][j];
        }
        printf("The sum of row %d is %d\n", i, sum);
        sum = 0;
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            sum += matrix[j][i];
        }
        printf("The sum of column %d is %d\n", i, sum);
        sum = 0;
    }
}

int main()
{
    int mat[100][100], row, column, i, j;

    printf("Enter the dimensions of the matrix(row and column): ");
    scanf("%d%d", &row, &column);

    input(mat, row, column);

    printf("The array is: \n");
    print(mat, row, column);

    sum(mat, row, column);
    return 0;
}
