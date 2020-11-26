#include <stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y);

int main(int argc, char const *argv[])
{
    int x, p, n, y;
    printf("Ente the value of x: ");
    scanf("%d", &x);
    printf("Enter the position from where you want to get the bits: ");
    scanf("%d", &p);
    printf("Enter the number of bits you want to get: ");
    scanf("%d", &n);
    printf("Enter the value of y: ");
    scanf("%d", &y);

    printf("The value after setting bits is: %u", setbits(x, p, n, y));
    return 0;
}

unsigned setbits(unsigned x, int p, int n, unsigned y)
{
    y >>= n;
    y <<= n;
    return (y | ((x >> (p + 1 - n)) & ~(~0 << n)));
}