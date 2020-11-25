/*
    Author : Neeraj Kumar
    Purpose : Practice exercise
    Date : 23/11/2020
    Time : 07:10 PM
*/
// This program will right rotate the provided number by a-bit positions
#include <stdio.h>

unsigned rightRot(unsigned x, int n, int length);

int main(int argc, char const *argv[])
{
    int length = 0, temp, x, a;

    printf("Enter the number you want to right rotate: ");
    scanf("%d", &x);

    printf("Enter the number of bits to be rotated: ");
    scanf("%d", &a);

    temp = x;

    while ((temp >>= 1) != 0)
    {
        ++length;
    }

    printf("The right rotated number is : %d", rightRot(x, a, length));
    return 0;
}

unsigned rightRot(unsigned x, int n, int length)
{
    while (n != 0)
    {
        if (x & 1) // If position 0 contains bit-1 then this will execute
        {
            x = ((x >> 1) | (1 << length));
        }
        else
        {
            x = x >> 1;
        }
        --n;
    }
    return x;
}