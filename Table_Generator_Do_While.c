#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, c = 1;
    printf("Enter the number you want the table of: ");
    scanf("%d", &a);
    printf("Enter the number till you want the table for: ");
    scanf("%d", &b);
    printf("The table is as follows\n");
    do
    {
        printf("%d x %d = %d\n", a, c, a * c);
        c = c + 1;
    } while (c <= b);

    return 0;
}