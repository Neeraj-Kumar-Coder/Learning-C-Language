// This algorithm will execute the loop 'N' times (N is the power to be raised) to calculate the result

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x = 1, n, p;
    printf("Enter the number you want to raise the power of: ");
    scanf("%d", &n);

    printf("Enter the power to be raised: ");
    scanf("%d", &p);

    while (p > 0)
    {
        x = x * n;
        p = p - 1;
    }

    printf("The value is: %d", x);
    return 0;
}