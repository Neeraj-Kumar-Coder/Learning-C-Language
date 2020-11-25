// This algorithm will execute the loop 'log(2, N)' times (N is the power to be raised) to calculate the result

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x, p, prefix = 1;
    printf("Enter the number you want to get the power: ");
    scanf("%d", &x);

    printf("Enter the power to be raised: ");
    scanf("%d", &p);

    while (p != 1)
    {
        if (p % 2 == 0)
        {
            x = x * x;
        }
        else
        {
            prefix = prefix * x;
            x = x * x;
        }
        p /= 2;
    }

    printf("The value is: %d", prefix * x);
    return 0;
}