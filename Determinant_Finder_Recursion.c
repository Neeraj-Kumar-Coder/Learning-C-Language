#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float determinant(int size, float arr[size][size]);

int main(void)
{
    float arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    determinant(3, arr);
    return 0;
}

float determinant(int size, float arr[size][size])
{
    int a, b;
    if (size == 1)
    {
        return arr[0][0];
    }
    else
    {
        // Dynamically creating an Array to store parsed elements
        float *helpPtr[size - 1];
        for (int i = 0; i < size - 1; i++)
        {
            helpPtr[i] = (float *)malloc((size - 1) * sizeof(float));
        }
        // Allocation of memory completed

        // Filling the parsed array
        for (int column = 0; column < size; column++)
        {
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
        }
        // Filling completed
    }
}