#include <stdio.h>
int main()
{
    int n, i, a;
    printf("Enter the number you want the table for: ");
    scanf("%d", &n);

    printf("Enter the number till you want the table for %d: ", n);
    scanf("%d", &a);

    printf("The table is as follows:\n");

    for (i = 1; i <= a; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}