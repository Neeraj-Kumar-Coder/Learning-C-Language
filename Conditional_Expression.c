// ABOUT CONDITIONAL EXPRESSION:
// SYNTAX: expr1 ? expr2 : expr3
// first expr1 is calculated and if it is true then the final outcome of the expression is the expr2 else outcome is expr3
// it is equivalent to

// normal if-else statement

/* if (expr1)
{
    return expr2;
}
else
{
    return expr3;
} */

// alternative expression using conditional expression

/* expr1 ? expr2 : expr3 */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    printf("Enter your age (in years) : ");
    scanf("%d", &a);

    //conditional expression
    (a >= 18) ? (printf("You can vote!\n")) : (printf("You cannot vote!\n"));
    return 0;
}