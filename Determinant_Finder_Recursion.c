/*
**AUTHOR : NEERAJ KUMAR
**PURPOSE : PRACTICAL PROGRAM
**DATE : 20/01/2021
**TIME : 06:00 PM
*/
// THIS PROGRAM WILL CALCULATE THE DETERMINANT OF SQUARE MATRIX OF ANY SIZE
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float determinant(int size, float arr[size][size]);

int main(void)
{
    int size;
    printf("Enter the size of square matrix you want to create: ");
    scanf("%d", &size);
    float array_three_dimension[size][size], determinant_value;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("Enter the (%d, %d) element of the matrix: ", i, j);
            scanf("%f", &array_three_dimension[i][j]);
        }
    }
    printf("\nTHE MATRIX YOU ENTERED IS\n\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%f\t", array_three_dimension[i][j]);
        }
        printf("\n");
    }

    determinant_value = determinant(size, array_three_dimension);
    printf("\nThe value of the determinant is = %f\n", determinant_value);
    return 0;
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
                        (b == (size - 1)) ? (a++, b = 0) : (b = b);
                    }
                }
            }
            // Filling completed
            value_of_determinant += pow(-1, column) * arr[0][column] * determinant(size - 1, helpPtr);
        }
    }

    return value_of_determinant;
}