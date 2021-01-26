#include <stdio.h>
#include <math.h>

float determinant(int size, float arr[][size]);

int main(void)
{
    ;
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