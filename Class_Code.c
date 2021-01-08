#include <stdio.h>
#include "MyFunctions.c"

int main(void)
{
    int array[] = {5, 6, 2, 1, 4, 5, 7, 120, 456, 84, 68, 46, 4, 4654, 654, 15};
    printf("The largest number is: %d\n", largedNumberFinder(array, 16));
    printf("The smallest number is: %d\n", smallestNumberFinder(array, 16));
    return 0;
}