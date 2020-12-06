/*
    Author : Neeraj Kumar
    Purpose : Useful Program
    Date : 06/12/2020
    Time : 05:00 PM
*/
// This is a Golden Section Method Program to find the minimum value and range of the function where it is minimum
#include <stdio.h>
#include <math.h>

void goldenSectionAlgorithm(double a, double b, double e);
double func(double x);

double values[9];

int main(int argc, char const *argv[])
{
    double a, b, e;
    printf("Enter the value of lower bound a: ");
    scanf("%lf", &a);

    printf("Enter the value of upper bound b: ");
    scanf("%lf", &b);

    printf("Enter the small number e: ");
    scanf("%lf", &e);

    goldenSectionAlgorithm(a, b, e);

    printf("a_w = %lf\nb_w = %lf\nx_a = %lf\nx_b = %lf\nf(a_w) = %lf\nf(b_w) = %lf\nf(x_a) = %lf\nf(x_b) = %lf\nNumber of Iterations = %.0lf", values[0], values[1], values[2], values[3], values[4], values[5], values[6], values[7], values[8]);
    return 0;
}

void goldenSectionAlgorithm(double a, double b, double e)
{
    double a_w = 0, b_w = 1, l_w = 1, w1, w2;
    double k = 0; // Iteration Counter

    while (l_w > e)
    {
        ++k;
        printf("***** ITERATION %.0lf *****\na_w = %lf\nb_w = %lf\n########################\n\n", k, a_w, b_w);
        l_w = b_w - a_w;
        w1 = a_w + 0.618 * l_w;
        w2 = b_w - 0.618 * l_w;

        if (func((b - a) * w1 + a) < func((b - a) * w2 + a))
        {
            a_w = w2;
        }
        else if (func((b - a) * w1 + a) > func((b - a) * w2 + a))
        {
            b_w = w1;
        }
        else
        {
            a_w = w2;
            b_w = w1;
        }
    }

    values[0] = a_w, values[1] = b_w, values[2] = (b - a) * w1 + a, values[3] = (b - a) * w2 + a, values[4] = func(a_w), values[5] = func(b_w), values[6] = func(values[2]), values[7] = func(values[3]), values[8] = k;
}

// Edit your function here
double func(double x)
{
    // return (exp(x) - 34) * x;
    return (pow(x, 2) + 54 * pow(x, -1));
}