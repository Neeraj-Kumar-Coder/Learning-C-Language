/*
    Author : Neeraj Kumar
    Purpose : Practice exercise
    Date : 23/11/2020
    Time : 07:29 PM
*/
// This program will return x with the n-bits that begins at position p inverted, leaving the others unchanged

// Example:

// if the number is (173)_10 = (10101101)_2
// values: x = 173, p = 5, n = 6
// then,
// The answer is: (1101)_2 or (13)_10

// Logic:

//  101101
// ^100000
//  001101 = Answer
#include <stdio.h>

unsigned invert(unsigned x, int p, int n);

int main(int argc, char const *argv[])
{
    int x, p, n;
    printf("Enter the number you want to invert (according to the definition): ");
    scanf("%d", &x);

    printf("Enter the position from where you want the bits: ");
    scanf("%d", &p);

    printf("Enter the number of bits you want to get: ");
    scanf("%d", &n);

    printf("The final number is: %d", invert(x, p, n));

    return 0;
}

unsigned invert(unsigned x, int p, int n)
{
    int temp, length = 0;

    x = ((x >> (p + 1 - n)) & ~(~0 << n));

    temp = x;

    while ((temp >>= 1) != 0)
    {
        ++length;
    }

    return (x ^ (1 << length));
}