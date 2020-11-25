/*
    Author : Neeraj Kumar
    Purpose : Just for fun program
    Date : 20/10/2020
    Time : 12:09 PM
*/
//This program will print the triangular pattern of desired size
#include <stdio.h>

void starprinter(int a);

int b = 0;

int main()
{
    int a, temp;
    printf("Enter the height of triangle you want to create : ");
    scanf("%d", &a);
    temp = a;
    for (int i = 0; i < temp; i++)
    {
        --a;
        starprinter(a);
    }

    return 0;
}

void starprinter(int a)
{
    for (int i = 0; i < a; i++)
    {
        printf(" ");
    }

    ++b;
    for (int j = 0; j < (2 * b - 1); j++)
    {
        printf("*");
    }
    printf("\n");
}