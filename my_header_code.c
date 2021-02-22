// To compile it: gcc .\Extra_Practice.c .\my_header.c -o .\Extra_Practice
// my_header.c is included for using the function declerations in the header file

#include <stdio.h>
#include "my_header.h"

int main(void)
{
    printf("The addition of the number is = %d\n", add(7, 9));
    return 0;
}