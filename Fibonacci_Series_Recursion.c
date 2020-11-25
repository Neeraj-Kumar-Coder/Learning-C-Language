// Fibonacci Series: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89,...
/*
    Author : Neeraj Kumar
    Purpose : Practice exercise
    Date : 16/09/2020
    Time : 12:51 PM
    "The method used here is recursive"
*/
#include <stdio.h>
int fibonacci(int n);
int main()
{
    int a, i;
    printf("This program will print the Fibonacci Series\n");
    printf("Enter till how many terms you want the Fibonacci Series for: ");
    scanf("%d", &a);
    printf("The Fibonaaci Series is as follows: %d, %d, ", 0, 1); //Predefined output
    for (i = 3; i <= a; i++)
    {
        printf("%d, ", (fibonacci(i - 1) + fibonacci(i - 2))); //Fuction calling
    }

    printf("\b\b."); //This will print the '.' character at the end of the series
    return 0;
}

int fibonacci(int n) //Fibonacci Function
{
    if (n == 1) //This is the base case for the Fibonacci Function
    {
        return 0;
    }
    else if (n == 2) //This is the base case for the Fibonacci Function
    {
        return 1;
    }
    else
    {
        return (fibonacci(n - 1) + fibonacci(n - 2)); //Return value of the Fibonacci function in else case
    }
}

//This method is very slow as compared to the iterative one because of the continuous calling of the function.