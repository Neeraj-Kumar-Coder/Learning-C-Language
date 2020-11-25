#include <stdio.h>
int main()
{
    printf("Size of short is %ld bytes\n", sizeof(short));
    printf("Size of int is %ld bytes\n", sizeof(int));
    printf("Size of long is %ld bytes\n", sizeof(long));

    printf("Size of float is %ld bytes\n", sizeof(float));
    printf("Size of double is %ld bytes\n", sizeof(double));
    printf("Size of long long is %ld bytes\n", sizeof(long long));
    printf("Size of long double is %ld bytes\n", sizeof(long double));

    printf("Size of char is %ld bytes\n", sizeof(char));
    printf("Size of void is %ld bytes\n", sizeof(void));
    return 0;
}