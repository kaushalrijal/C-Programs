#include <stdio.h>

void input(int mat[][100], int row, int column)
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("Enter the element[%d][%d]", i, j);
            scanf("%d", &mat[i][j]);
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

void mul(int mat1[][100], int mat2[][100], int mat[][100], int row1, int column1, int row2, int column2)
{
    int i, j, k;
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < column2; j++)
        {
            mat[i][j] = 0;
            for (k = 0; k < column1; k++)
            {
                mat[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main()
{
    int row1, column1, row2, column2, i, j;
    int matrixA[100][100], matrixB[100][100], matrixProduct[100][100];
    printf("Enter the dimensions of matrix A (row and column): ");
    scanf("%d%d", &row1, &column1);
    printf("Enter the dimensions of matrix B (row and column): ");
    scanf("%d%d", &row2, &column2);

    if (row1 == column2 && row2 == column1)
    {
        printf("The matrix multiplication can be performed\n");
        printf("Input matrix A:\n");
        input(matrixA, row1, column1);
        printf("Input matrix B :\n");
        input(matrixB, row2, column2);
        mul(matrixA, matrixB, matrixProduct, row1, column1, row2, column2);
        printf("The product of the matrices is:\n");
        print(matrixProduct, row1, column2);
    }
    else
    {
        printf("Sorry matrix multiplication can't be done for matrices of given dimensions.");
    }

    return 0;
}
