// Fibonacci Series: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89,...
/*
    Author : Neeraj Kumar
    Purpose : Practice exercise
    Date : 16/09/2020
    Time : 01:37 PM
    "The method used here is iterative"
*/
#include <stdio.h>
int main()
{
    int a, i;
    printf("This program will print the Fibonacci Series\n");
    printf("Enter for how many terms you want the Fibonacci Series for: ");
    scanf("%d", &a);
    int fibonacciarray[a]; //Defining the array used (size is defined by the user)
    fibonacciarray[0] = 0; //This is the base value of the array
    fibonacciarray[1] = 1; //This is the base value of the array
    printf("The Fibonaaci Series is as follows: %d, %d, ", 0, 1);
    for (i = 2; i < a; i++)
    {
        printf("%d, ", (fibonacciarray[i - 1] + fibonacciarray[i - 2]));
        fibonacciarray[i] = (fibonacciarray[i - 1] + fibonacciarray[i - 2]); //Here we are side by side inserting the values in the array
    }
    printf("\b\b."); //This will print a '.' character at the end of the series
    return 0;
}

//NOTE: This method is faster than the recursive method as used in the method 1 project.