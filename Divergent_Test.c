#include <stdio.h>
#include <math.h>

int main(void)
{
    int n;
    double temp = 0;
    printf("Enter till the sum you want (value of n): ");
    scanf("%d", &n);

    for (double i = 1; i <= n; i++)
    {
        temp += pow(i, -1);
    }

    printf("The sum is = %.10f", temp);
    return 0;
}