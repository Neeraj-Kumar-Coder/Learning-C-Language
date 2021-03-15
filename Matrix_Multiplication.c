/*
    Author : Neeraj Kumar
    Purpose : Practice exercise
    Date : 01/10/2020
    Time : 05:48 PM
*/
#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter the number of rows of Matrix A: ");
    scanf("%d", &a);
    printf("Enter the number of column of Matrix A: ");
    scanf("%d", &b);
    int Mat_A[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("Enter the (%d, %d) element of Mat A: ", i, j);
            scanf("%d", &Mat_A[i][j]);
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d\t", Mat_A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Enter the number of rows of Matrix B: ");
    scanf("%d", &c);
    printf("Enter the number of column of Matrix B: ");
    scanf("%d", &d);
    int Mat_B[c][d];
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < d; j++)
        {
            printf("Enter the (%d, %d) element of Mat B: ", i, j);
            scanf("%d", &Mat_B[i][j]);
        }
    }
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < d; j++)
        {
            printf("%d\t", Mat_B[i][j]);
        }
        printf("\n");
    }

    if (!(b == c)) //for the multiplication of two matrix of order (axb and cxd) then for the product to be meaningful b=c is the must condition
    {
        printf("\nSorry! Your matrix couldnot be multiplied\n");
    }

    else
    {
        printf("\nThe matrix are successfully multiplied\nHere is the answer :\n");
        int mult[a][d];

        for (int i = 0; i < a; i++) //This is runned to make all the elements of the final matrix zero (initially)
        {
            for (int j = 0; j < d; j++)
            {
                mult[i][j] = 0; //Important for the next step
            }
        }

        //most important part done by observation of the method of matrix multiplication.

        for (int i = 0; i < a; i++) //This triple for loop is used here to get each element of the final matrix by adding the product of each element one by one
        {
            for (int j = 0; j < d; j++)
            {
                for (int k = 0; k < b; k++)
                {
                    mult[i][j] += Mat_A[i][k] * Mat_B[k][j]; //addition of each element one by one is executing. This is the reason why we have to make all the elements of the final matrix zero initially
                }
            }
        }

        for (int i = 0; i < a; i++) //printing the final matrix
        {
            for (int j = 0; j < d; j++)
            {
                printf("%d\t", mult[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}