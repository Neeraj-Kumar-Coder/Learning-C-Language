#include <stdio.h>
#include <math.h>
float func(float x);
float xstar(float a, float b);
//for scientific notation replace all %f with %E
int main(void)
{
    float a, b, x;
    int n;
    printf("Enter the vlaue of a : ");
    scanf("%f", &a);
    printf("Enter the vlaue of b : ");
    scanf("%f", &b);
    printf("How many times you want to iterate this method : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("a = %f\n", a);
        printf("b = %f\n", b);
        printf("x* = %f\n\n", xstar(a, b));
        printf("f(a) = %f\n", func(a));
        printf("f(b) = %f\n", func(b));
        x = xstar(a, b);
        printf("f(x*) = %f\n", func(x));
        printf("\n*********************************\n");
        a = b;
        b = x;
    }

    return 0;
}

float func(float x)
{
    return -0.654 * exp(-3 * x / 5) + 1.14 * sin(2 * x) + 0.34 * cos(2 * x); //edit your function here
}

float xstar(float a, float b)
{
    float c, d;
    c = func(b) * (a - b);
    d = func(a) - func(b);
    return b - c / d;
}