/*
    Author : Neeraj Kumar
    Purpose : Practice exercise
    Date : 28/10/2020
    Time : 02:33 PM
*/
//This program will remove the front and trailing extra spaces from the input
#include <stdio.h>
#include <string.h>

int main()
{
    int a, i = 0;
    char store[100]; //Here we can change the amount of input we can store from the users input
    printf("Enter the input from here :");

    while ((a = getchar()) != '\n')
    {
        store[i] = a;
        ++i;
    }
    store[i] = '\0';

    while (store[0] == ' ' || store[0] == '\t') //This loop will shift the string until the first element of the array is not any character
    {
        for (int j = 0; j < i; ++j)
        {
            store[j] = store[j + 1];
        }
    }
    strrev(store); //This will reverse the string to do the same for the trailing spaces

    while (store[0] == ' ' || store[0] == '\t')
    {
        for (int j = 0; j < i; ++j)
        {
            store[j] = store[j + 1];
        }
    }

    strrev(store); //Reversing the same string as making original to print

    printf("The parsed output is :<<%s>>", store);
    return 0;
}