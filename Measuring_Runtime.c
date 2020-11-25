// This is a sample to get to know what is the runtime of the C program using the time.h header
// Note that this will also take into account the time user takes to enter the input
#include <stdio.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    clock_t begin = clock();
    int one_bit = 0, a;
    printf("Enter the number you want to know how many 1-bits are present: ");
    scanf("%d", &a);

    for (int i = 0; a != 0; a &= (a - 1))
    {
        ++one_bit;
    }

    printf("The number of 1-bits in the provided number is: %d\n", one_bit);

    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

    printf("Time consumed: %f", time_spent);

    return 0;
}

/*This is the template*/

// clock_t begin = clock();

// /* here, do your time-consuming job */

// clock_t end = clock();
// double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;