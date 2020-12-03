#include <stdio.h>
#include <math.h>

int derivative(double x);
double func(double x);

double value;
enum derivative_test_result
{
    NO,
    YES
};

int main(int argc, char const *argv[])
{
    double x;
    int checker;
    printf("Enter the point (x) where you want to find the derivative: ");
    scanf("%lf", &x);

    checker = derivative(x);

    if (checker == YES)
    {
        printf("The value of derivative at x = %lf is = %lf", x, value);
    }
    else
    {
        printf("The function is not differentiable at x = %lf", x);
    }
    return 0;
}

int derivative(double x)
{
    double left_hand_derivative, right_hand_derivative, h = 1.0e-7;

    left_hand_derivative = ((func(x) - func(x - h)) / h);
    right_hand_derivative = ((func(x + h) - func(x)) / h);

    printf("LEFT HAND DERIVATIVE: %lf\nRIGHT HAND DERIVATIVE: %lf\n", left_hand_derivative, right_hand_derivative);

    if (fabs(left_hand_derivative - right_hand_derivative) < 0.0001)
    {
        value = ((left_hand_derivative + right_hand_derivative) / 2);
        return YES;
    }
    else
    {
        return NO;
    }
}

// Edit your function here
double func(double x)
{
    // return tan(x);
    return fabs(x);
    // return fabs(pow(x, 2) - 25);
    // return pow(tan(x), -1);
}