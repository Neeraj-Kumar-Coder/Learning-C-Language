/*
    Author : Neeraj Kumar
    Purpose : Just For Fun Program
    Date : 16/10/2020
    Time : 05:13 PM
*/
// This program will remove the tabs and extra spaces from the provided text
#include <stdio.h>
#include <string.h>

int main()
{
    int a = 0, b;
    printf("Enter the string to be formatted : ");
    b = getchar();

    printf("\n***** THE FORMATTED STRING IS   *****\n\n");

    for (int i = 0; b != EOF && b != '\n'; i++)
    {
        if (b == ' ' || b == '\t')
        {
            a++;
            if (a == 1)
            {
                printf(" ");
            }
            else if (a > 1)
            {
                b = getchar();
                continue;
            }
        }
        else
        {
            printf("%c", b);
            a = 0;
        }
        b = getchar();
    }
    printf("\n");
    return 0;
}