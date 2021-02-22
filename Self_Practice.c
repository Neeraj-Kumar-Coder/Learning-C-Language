#include <stdio.h>
#include "MyFunctions.c"

int main(void)
{
    int a = 5, b = 6;
    printf("a = %d\tb = %d\n", a, b);
    swap(&a, &b);
    printf("a = %d\tb = %d\n", a, b);
    return 0;
}