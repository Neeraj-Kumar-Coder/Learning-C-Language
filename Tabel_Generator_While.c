#include <stdio.h>
int main()
{
    int num, index, i = 1;
    printf("Enter the number you want the table of: ");
    scanf("%d", &num);

    printf("Enter the number till you want the table for %d: ", num);
    scanf("%d", &index);

    printf("The table is as follows:\n");

    while (i <= index)
    {
        printf("%d x %d = %d\n", num, i, num * i);
        i = i + 1;
    }
    return 0;
}