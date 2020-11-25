/*
    Author : Neeraj Kumar
    Purpose : Practice exercise
    Date : 19/11/2020
    Time : 07:40 PM
*/
//This program will count the number of 1-bits in the given number (e.g. 110101 has '4' 1-bit)
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int one_bit = 0, a;
    printf("Enter the number you want to know how many 1-bits are present: ");
    scanf("%d", &a);

    for (int i = 0; a != 0; a &= (a - 1))
    {
        ++one_bit;
    }

    printf("The number of 1-bits in the provided number is: %d", one_bit);

    return 0;
}