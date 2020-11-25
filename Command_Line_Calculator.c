/*
    Author : Neeraj Kumar
    Purpose : Practice exercise
    Date : 11/11/2020
    Time : 08:08 PM
*/
// This program calculates the arithmetic operation between two numbers taking the input from the command line
// Here we have used the function "atoi()" from the standard library "stdlib.h". This function converts string characters to int
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    if (strcmp(argv[1], "add") == 0)
    {
        printf("The sum is %d", atoi(argv[2]) + atoi(argv[3]));
    }
    else if (strcmp(argv[1], "subtract") == 0)
    {
        printf("The difference is %d", atoi(argv[2]) - atoi(argv[3]));
    }
    else if (strcmp(argv[1], "multiply") == 0)
    {
        printf("The product is %d", atoi(argv[2]) * atoi(argv[3]));
    }
    else if (strcmp(argv[1], "divide") == 0)
    {
        printf("The division is %d", atoi(argv[2]) / atoi(argv[3]));
    }
    else
    {
        printf("Enter the valid input among: add, subtract, multiply and divide\n");
    }

    return 0;
}