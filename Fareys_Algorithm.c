#include <stdio.h>
int main()
{
    int b, c, d, e, g;
    float a;
    char f;
    printf("This is a Farey's Algorithm Program\n");
    printf("Enter the number you want the approximate fraction of: ");
    scanf("%f", &a);
    printf("This number is between two integers, enter the value of both integers from LHS to RHS\n");
    printf("The LHS integer is : ");
    scanf("%d", &b);
    printf("The RHS integer is : ");
    scanf("%d", &c);
    printf("For how much depth you want to calculate? : ");
    scanf("%d", &g);
    d = b + c;
    e = 1 + 1;
    for (int i = 1; i <= g; i++)
    {
        if ((float)d / e < a)
        {
            d = d + c;
            e = e + 1;
        }
        else if ((float)d / e > a)
        {
            d = d + b;
            e = e + 1;
        }
    }

    printf("The Final Fraction Is = %d/%d", d, e);
    return 0;
}