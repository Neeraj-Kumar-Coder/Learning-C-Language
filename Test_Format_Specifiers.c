#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    unsigned b;
    double c;
    long d;
    unsigned long e;

    printf("Enter int number : ");
    scanf("%d", &a);

    printf("Enter unsigned number : ");
    scanf("%u", &b);

    printf("Enter the double number : ");
    scanf("%f", &c);

    printf("Enter the long number : ");
    scanf("%ld", &d);

    printf("Enter the unsigned long number : ");
    scanf("%ul", &e);

    printf("Value of:\nint = %d\nunsigned = %u\ndouble = %f\nlong = %ld\nunsigned long = %lu", a, b, c, d, e);
    return 0;
}