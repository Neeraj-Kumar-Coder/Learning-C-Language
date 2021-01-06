#include <stdio.h>

int factorial(int a);

int main(void)
{
    int n, sum = 0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum = sum + factorial(i);
    }
    printf("The sum of ");
    for (int i = 1; i <= n; i++)
    {
        printf("%d! + ", i);
    }
    printf("\b\b= %d\n", sum);
    return 0;
}

int factorial(int a)
{
    if (a == 0 || a == 1)
        return 1;
    else
    {
        return a * factorial(a - 1);
    }
}