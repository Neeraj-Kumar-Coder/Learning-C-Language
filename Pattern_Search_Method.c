/*
    Author : Neeraj Kumar
    Purpose : Optimization Technique Program
    Date : 01/12/2020
    Time : 09:57 AM
*/
// This is an Optimization Technique Program called "Hooke-Jeeves Pattern Search Method"
#include <stdio.h>
#include <math.h>

double func(double x1, double x2);
int explorer(double *x1, double *x2, double delta1, double delta2);
double minimumFinder(double temp1, double temp2, double temp3);
double delta(double x1, double x2);
double maxTeller(double value1, double value2);

double x1_temp, x2_temp;                                // These will store the previous value of x1 and x2 respectively
int permission1, permission2, permission3, permission4; // These are the permission variables for the ranges of x1 and x2
enum
{
    FAILURE,
    SUCCESS
};

int main(int argc, char const *argv[])
{
    double x1, x2, x_p1, x_p2, delta1, delta2, reduction_factor, termination_parameter;
    int iteration_count = 0, checker;

    printf("Enter vlaue of x1: ");
    scanf("%lf", &x1);
    printf("Enter vlaue of x2: ");
    scanf("%lf", &x2);
    x1_temp = x1;
    x2_temp = x2;
    printf("Should x1 be always greater than zero? (YES = 1 / NO = 0) : ");
    scanf("%d", &permission1);
    printf("Should x2 be always greater than zero? (YES = 1 / NO = 0) : ");
    scanf("%d", &permission2);
    printf("Should x1 be always less than zero? (YES = 1 / NO = 0) : ");
    scanf("%d", &permission3);
    printf("Should x2 be always less than zero? (YES = 1 / NO = 0) : ");
    scanf("%d", &permission4);
    printf("Enter vlaue of (increment vector) delta1: ");
    scanf("%lf", &delta1);
    printf("Enter vlaue of (increment vector) delta2: ");
    scanf("%lf", &delta2);
    printf("Enter the value of reduction factor (>1): ");
    scanf("%lf", &reduction_factor);
    printf("Enter the value of termination parameter: ");
    scanf("%lf", &termination_parameter);

    printf("delta = %lf\ntermination parameter = %lf\n\n", delta(delta1, delta2), termination_parameter); //To be removed

    while (delta(delta1, delta2) > termination_parameter)
    {
        ++iteration_count;
        checker = explorer(&x1, &x2, delta1, delta2);
        if (checker == FAILURE)
        {
            delta1 /= reduction_factor;
            delta2 /= reduction_factor;
            checker = SUCCESS;
            x1 = x1_temp;
            x2 = x2_temp;
            continue;
        }
        else
        {
            x_p1 = 2 * x1 - x1_temp;
            x_p2 = 2 * x2 - x2_temp;
            x1_temp = x1;
            x2_temp = x2;
            x1 = x_p1;
            x2 = x_p2;
            printf("xp1=%lf\nxp2=%lf\n", x1, x2);
        }
    }

    printf("x1 = %lf\nx2 = %lf\nf(x1, x2) = %lf\nNumber of Iterations = %d", x1, x2, func(x1, x2), iteration_count);
    return 0;
}

// Enter your function here
double func(double x1, double x2)
{
    // return (pow((pow(x1, 2) + x2 - 11), 2) + pow((x1 + pow(x2, 2) - 7), 2));
    return sqrt(pow((((1.76 * x1 - 1.776) / (23.52 * pow(x1, 2) - 47.51 * x1 + 27.09)) + (3.35 * pow(x1, 3)) / (23.52 * pow(x1, 4) - 761.09 * pow(x1, 2) + 6339.34)), 2) + pow((4.85 * pow(x1, 2) - 9.797 * x1 + 4.95) / (23.52 * pow(x1, 2) - 47.51 * x1 + 27.09) + 1 / (108 * x2) + (4.85 * pow(x1, 4) - 79.62 * pow(x1, 2)) / (23.52 * pow(x1, 4) - 761.09 * pow(x1, 2) + 6339.34), 2));
}

int explorer(double *x1, double *x2, double delta1, double delta2)
{
    double temp1, temp2, temp3, final;

    // Working on x1
    temp1 = func(*x1 + delta1, *x2);
    temp2 = func(*x1, *x2);
    temp3 = func(*x1 - delta1, *x2);
    printf("func(x1 + delta1, x2) = %lf\nfunc(x1, x2) = %lf\nfunc(x1 - delta1, x2) = %lf\n", temp1, temp2, temp3);

recheck1:
    if (minimumFinder(temp1, temp2, temp3) == temp1)
    {
        if (permission1 == 1)
        {
            if ((*x1 + delta1) > 0)
            {
                *x1 += delta1;
            }
            else
            {
                temp1 = maxTeller(temp2, temp3) + 1;
                goto recheck1;
            }
        }
        else if (permission3 == 1)
        {
            if ((*x1 + delta1) < 0)
            {
                *x1 += delta1;
            }
            else
            {
                temp1 = maxTeller(temp2, temp3) + 1;
                goto recheck1;
            }
        }

        else
        {
            *x1 += delta1;
        }
    }
    else if (minimumFinder(temp1, temp2, temp3) == temp2)
    {
        if (permission1 == 1)
        {
            if (*x1 > 0)
            {
                *x1 = *x1;
            }
            else
            {
                temp2 = maxTeller(temp1, temp3) + 1;
                goto recheck1;
            }
        }
        else if (permission3 == 1)
        {
            if (*x1 < 0)
            {
                *x1 = *x1;
            }
            else
            {
                temp2 = maxTeller(temp1, temp3) + 1;
                goto recheck1;
            }
        }
        else
        {
            *x1 = *x1;
        }
    }
    else if (minimumFinder(temp1, temp2, temp3) == temp3)
    {
        if (permission1 == 1)
        {
            if ((*x1 - delta1) > 0)
            {
                *x1 -= delta1;
            }
            else
            {
                temp3 = maxTeller(temp1, temp2) + 1;
                goto recheck1;
            }
        }
        else if (permission3 == 1)
        {
            if ((*x1 - delta1) < 0)
            {
                *x1 -= delta1;
            }
            else
            {
                temp3 = maxTeller(temp1, temp2) + 1;
                goto recheck1;
            }
        }
        else
        {
            *x1 -= delta1;
        }
    }

    // Working on x2
    temp1 = func(*x1, *x2 + delta2);
    temp2 = func(*x1, *x2);
    temp3 = func(*x1, *x2 - delta2);
    printf("func(x1 + delta1, x2 + delta2) = %lf\nfunc(x1 + delta1, x2) = %lf\nfunc(x1 - delta1, x2 - delta2) = %lf\n", temp1, temp2, temp3);

recheck2:
    if (minimumFinder(temp1, temp2, temp3) == temp1)
    {
        if (permission2 == 1)
        {
            if ((*x2 + delta2) > 0)
            {
                *x2 += delta2;
            }
            else
            {
                temp1 = maxTeller(temp2, temp3) + 1;
                goto recheck2;
            }
        }
        else if (permission4 == 1)
        {
            if ((*x2 + delta2) < 0)
            {
                *x2 += delta2;
            }
            else
            {
                temp1 = maxTeller(temp2, temp3) + 1;
                goto recheck2;
            }
        }

        else
        {
            *x2 += delta2;
        }
    }
    else if (minimumFinder(temp1, temp2, temp3) == temp2)
    {
        if (permission2 == 1)
        {
            if (*x2 > 0)
            {
                *x2 = *x2;
            }
            else
            {
                temp2 = maxTeller(temp1, temp3) + 1;
                goto recheck2;
            }
        }
        else if (permission4 == 1)
        {
            if (*x2 < 0)
            {
                *x2 = *x2;
            }
            else
            {
                temp2 = maxTeller(temp1, temp3) + 1;
                goto recheck2;
            }
        }
        else
        {
            *x2 = *x2;
        }
    }
    else if (minimumFinder(temp1, temp2, temp3) == temp3)
    {
        if (permission2 == 1)
        {
            if ((*x2 - delta2) > 0)
            {
                *x2 -= delta2;
            }
            else
            {
                temp3 = maxTeller(temp1, temp2) + 1;
                goto recheck2;
            }
        }
        else if (permission4 == 1)
        {
            if ((*x2 - delta2) < 0)
            {
                *x2 -= delta2;
            }
            else
            {
                temp3 = maxTeller(temp1, temp2) + 1;
                goto recheck2;
            }
        }
        else
        {
            *x2 -= delta2;
        }
    }
    printf("x1 = %lf\nx2 = %lf\n\n", *x1, *x2);

    // Testing for the success of the explorer
    if ((x1_temp == *x1 && x2_temp == *x2) || func(x1_temp, x2_temp) < func(*x1, *x2))
    {
        return FAILURE;
    }
    else
    {
        return SUCCESS;
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

double delta(double x1, double x2)
{
    return sqrt(pow(x1, 2) + pow(x2, 2));
}

double maxTeller(double value1, double value2)
{
    if (value1 > value2)
    {
        return value1;
    }
    else
    {
        return value2;
    }
}