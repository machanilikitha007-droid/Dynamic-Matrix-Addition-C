#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **matrix1, **matrix2, **result;
    int rows, cols;
    int i, j;

    printf("===== Dynamic Matrix Addition =====\n");

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    if (rows <= 0 || cols <= 0)
    {
        printf("Invalid matrix size!\n");
        return 1;
    }

    matrix1 = malloc(rows * sizeof(int *));
    matrix2 = malloc(rows * sizeof(int *));
    result = malloc(rows * sizeof(int *));

    if (matrix1 == NULL || matrix2 == NULL || result == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (i = 0; i < rows; i++)
    {
        matrix1[i] = malloc(cols * sizeof(int));
        matrix2[i] = malloc(cols * sizeof(int));
        result[i] = malloc(cols * sizeof(int));

        if (matrix1[i] == NULL || matrix2[i] == NULL || result[i] == NULL)
        {
            printf("Memory allocation failed!\n");
            return 1;
        }
    }

    printf("\nEnter elements of Matrix 1:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("Matrix1[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("\nEnter elements of Matrix 2:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("Matrix2[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("\n===== Result Matrix =====\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d ", result[i][j]);
        }

        printf("\n");
    }

    for (i = 0; i < rows; i++)
    {
        free(matrix1[i]);
        free(matrix2[i]);
        free(result[i]);
    }

    free(matrix1);
    free(matrix2);
    free(result);

    printf("\nMemory released successfully.\n");

    return 0;
}
