#include <stdio.h>
#include <math.h>

void adjoint(int size, float matrix[][size], float adjoint_matrix[][size]);
float determinant(int size, float arr[][size]);
void matrix_inverse(int size, float matrix[][size], float inverse_matrix[][size]);

int main(void)
{
    int size;
    printf("Enter the size of matrix you want to create: ");
    scanf("%d", &size);
    float original[size][size];
    float adjointMat[size][size];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("Enter the (%d, %d) element of the matrix: ", i, j);
            scanf("%f", &original[i][j]);
        }
    }
    // FILE *ptr = freopen("Self.txt", "w", stdout);
    printf("\nThe matrix you entered is :\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%f ", original[i][j]);
        }
        printf("\n");
    }
    adjoint(size, original, adjointMat);
    printf("\nThe adjoint of the matrix is :\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%f ", adjointMat[i][j]);
        }
        printf("\n");
    }
    printf("\nThe inverse of the matrix is :\n");
    matrix_inverse(size, original, adjointMat);
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%f ", adjointMat[i][j]);
        }
        printf("\n");
    }
    // fclose(ptr);
    return 0;
}

void adjoint(int size, float original_matrix[][size], float adjoint_matrix[][size])
{
    float temp[size - 1][size - 1];
    int a, b;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            a = 0, b = 0;
            for (int row = 0; row < size; row++)
            {
                for (int column = 0; column < size; column++)
                {
                    if (row != i && column != j)
                    {
                        temp[a][b] = original_matrix[row][column];
                        ++b;
                        (b == (size - 1)) ? (++a, b = 0) : (b = b);
                    }
                }
            }
            adjoint_matrix[j][i] = pow(-1, i + j) * determinant(size - 1, temp);
        }
    }
}

float determinant(int size, float arr[][size])
{
    float value_of_determinant = 0.0;
    int a, b;
    if (size == 1)
    {
        return arr[0][0];
    }
    else
    {
        float helpPtr[size - 1][size - 1]; // Creating an Array to store parsed elements

        for (int column = 0; column < size; column++)
        {
            // Filling the parsed array
            a = 0, b = 0;
            for (int i = 1; i < size; i++)
            {
                for (int j = 0; j < size; j++)
                {
                    if (j != column)
                    {
                        helpPtr[a][b] = arr[i][j];
                        b++;
                        (b == (size - 1)) ? (a++, b = 0) : (b = b); // For iteration of the parsed array
                    }
                }
            }
            // Filling completed
            value_of_determinant += pow(-1, column) * arr[0][column] * determinant(size - 1, helpPtr);
        }
    }
    return value_of_determinant;
}

void matrix_inverse(int size, float matrix[][size], float inverse_matrix[][size])
{
    adjoint(size, matrix, inverse_matrix);
    float value_of_determinant = determinant(size, matrix);
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            inverse_matrix[i][j] /= value_of_determinant;
        }
    }
}