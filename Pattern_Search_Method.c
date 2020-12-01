#include <stdio.h>
#include <math.h>

double func(double x1, double x2);
void explorer(double *x1, double *x2, double delta1, double delta2);
double minimumFinder(double temp1, double temp2, double temp3);
double delta(unsigned x1, unsigned x2);

int main(int argc, char const *argv[])
{
    double x1, x2, delta1, delta2, reduction_factor, termination_parameter, x1_temp, x2_temp;
    int iteration_count = 0;

    printf("Enter vlaue of x1: ");
    scanf("%lf", &x1);
    printf("Enter vlaue of x2: ");
    scanf("%lf", &x2);
    x1_temp = x1;
    x2_temp = x2;
    printf("Enter vlaue of (increment vector) delta1: ");
    scanf("%lf", &delta1);
    printf("Enter vlaue of (increment vector) delta2: ");
    scanf("%lf", &delta2);
    printf("Enter the value of reduction factor (>1): ");
    scanf("%lf", &reduction_factor);
    printf("Enter the value of termination parameter: ");
    scanf("%lf", &termination_parameter);

    while (delta(delta1, delta2) > termination_parameter)
    {
        ;
    }
    return 0;
}

double func(double x1, double x2)
{
    return (pow((pow(x1, 2) + x2 - 11), 2) + pow((x1 + pow(x2, 2) - 7), 2));
}

void explorer(double *x1, double *x2, double delta1, double delta2)
{
    double temp1, temp2, temp3, final;

    // Working on x1
    temp1 = func(*x1 + delta1, *x2);
    temp2 = func(*x1, *x2);
    temp3 = func(*x1 - delta1, *x2);
    if (minimumFinder(temp1, temp2, temp3) == temp1)
    {
        *x1 += delta1;
    }
    else if (minimumFinder(temp1, temp2, temp3) == temp2)
    {
        *x1 = *x1;
    }
    else if (minimumFinder(temp1, temp2, temp3) == temp3)
    {
        *x1 -= delta1;
    }

    // Working on x2
    temp1 = func(*x1, *x2 + delta2);
    temp2 = func(*x1, *x2);
    temp3 = func(*x1, *x2 - delta2);
    if (minimumFinder(temp1, temp2, temp3) == temp1)
    {
        *x2 += delta2;
    }
    else if (minimumFinder(temp1, temp2, temp3) == temp2)
    {
        *x2 = *x2;
    }
    else if (minimumFinder(temp1, temp2, temp3) == temp3)
    {
        *x2 -= delta2;
    }
}

double minimumFinder(double temp1, double temp2, double temp3)
{
    for (int i = 0; i < 2; i++)
    {
        if (temp1 > temp2)
        {
            temp1 = temp2;
            continue;
        }
        else if (temp1 > temp3)
        {
            temp1 = temp3;
            continue;
        }
    }
    return temp1;
}

double delta(unsigned x1, unsigned x2)
{
    return sqrt(pow(x1, 2) + pow(x2, 2));
}