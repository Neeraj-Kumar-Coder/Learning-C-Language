// This program will count the number of 1-bits in the number entered by the user (when the number is converted in binary form).
#include <stdio.h>

int bitcount(unsigned x);

int main(int argc, char const *argv[])
{
    int a;
    printf("Enter the number you want to know the number of 1-bits in: ");
    scanf("%d", &a);

    printf("The number of 1-bits is: %d", bitcount(a));
    return 0;
}

int bitcount(unsigned x) //Unsigned integer is used to ensure that the vacant spaces are filled with zeroes
{
    int b; //This varible counts the number of 1-bits

    for (b = 0; x != 0; x >>= 1)    // This will shift x to the right until x becomes zero (0)
    {
        if (x & 01)
        {
            ++b;
        }
    }

    return b;
}