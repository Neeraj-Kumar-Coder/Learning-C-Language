/*
    Author : Neeraj Kumar
    Purpose : Self made project
    Date : 19/09/2020
    Time : 12:08 PM
*/
//This program is based on the concept of "Farey's Algorithm"
#include <stdio.h>
int main()
{
    int b, c, d, e, g, k;
    float a;
    char f, h;
    printf("This program will approximate your irrational number\n");
    printf("Enter the number you want the approximate fraction of: ");
    scanf("%f", &a);
    printf("This number is between two (nearest) integers, enter the value of both integers on LHS and RHS\n");
    printf("The LHS integer is : ");
    scanf("%d", &b);
    printf("The RHS integer is : ");
    scanf("%d", &c);
    printf("For how much depth you want to calculate? : ");
    scanf("%d", &g); //This is not actually depth, it is the number of times the "for loop" will execute. Greater the "g" is greater is the accuracy
    d = b + c;
    e = 1 + 1;

    for (int i = 1; i <= g; i++)
    {
        if ((float)d / e == a)
        {
            goto end;
        }

        else if ((float)d / e > a)
        {
            d = d + b;
            e = e + 1;
        }

        else if ((float)d / e < a)
        {
            d = d + c;
            e = e + 1;
        }
    }

end: //Jump Statement

    printf("The final (approximate) fraction with depth %d is a/b : a = %d , b = %d\n\n", g, d, e);

label1: //Jump Statement

    printf("Do you want more depth?(y/n) : ");
    scanf(" %c", &h);

    if (h == 'y')
    {
        goto label;
    }
    else if (h == 'n')
    {
        goto exit;
    }
    else
    {
        printf("Please enter a valid input\n");
        goto label1;
    }

label: //Jump Statement

    printf("How much depth you want to increase further? : ");
    scanf("%d", &k);

    for (int i = 1; i <= k; i++)
    {
        if ((float)d / e == a)
        {
            goto end1;
        }

        else if ((float)d / e > a)
        {
            d = d + b;
            e = e + 1;
        }

        else if ((float)d / e < a)
        {
            d = d + c;
            e = e + 1;
        }
    }

end1: //Jump Statement

    printf("The final (approximate) fraction with increased depth %d is a/b : a = %d , b = %d\n\n", k, d, e);

    goto label1;

exit: //Jump Statement

    return 0;
}