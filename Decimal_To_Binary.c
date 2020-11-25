/*
    Author : Neeraj Kumar
    Purpose : Practice program
    Date : 20/11/2020
    Time : 08:15 PM
*/
// This program will covert the provided number into binary number system
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, temp;
    printf("Enter the number to convert it to Binary form : ");
    scanf("%d", &a);

    printf("The number %d in binary form is :  ", a);

    temp = a;

    for (int j = 0; temp != 0; j++) // This loop is executed to provide required quantity of space to be filled using the backspace ('\b') escape sequences
    {
        printf(" ");
        temp /= 2;
    }

    for (int i = 0; a != 0; i++)
    {
        printf("\b\b%d", a % 2); // Double backspace is used to take the curser to the position where the is a white space ahead (example: 23| ---> | 23)
        a /= 2;
    }

    return 0;
}