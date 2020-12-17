#include <stdio.h>
int main(void)
{
    printf("Size of short is %lld bytes\n", sizeof(short));
    printf("Size of int is %lld bytes\n", sizeof(int));
    printf("Size of long is %lld bytes\n", sizeof(long));

    printf("Size of float is %lld bytes\n", sizeof(float));
    printf("Size of double is %lld bytes\n", sizeof(double));
    printf("Size of long long is %lld bytes\n", sizeof(long long));
    printf("Size of long double is %lld bytes\n", sizeof(long double));

    printf("Size of char is %lld bytes\n", sizeof(char));
    printf("Size of void is %lld bytes\n", sizeof(void));
    return 0;
}