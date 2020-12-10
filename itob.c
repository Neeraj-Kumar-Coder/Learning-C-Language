#include <stdio.h>
#include <string.h>

void itob(int n, char s[], int b);

int main(int argc, char const *argv[])
{
    int n, b;
    char s[64];
    printf("Enter the number you want to convert: ");
    scanf("%d", &n);
    printf("Enter the base you want it to convert to: ");
    scanf("%d", &b);

    itob(n, s, b);
    printf("The required number is : %s", s);
    return 0;
}

void itob(int n, char s[], int b)
{
    int i = 0;
    if (b >= 0 && b <= 10 && n > 0)
    {
        do
        {
            s[i++] = n % b + '0';
        } while ((n /= b) != 0);
        s[i] = '\0';
        strrev(s);
    }
    else if (b == 16 && b > 0)
    {
        do
        {
            if ((n % b) > 10)
            {
                s[i++] = (n % b) + 55; // For getting the corresponding Alphabetical notation
            }
            else
            {
                s[i++] = n % b + '0';
            }

        } while ((n /= b) != 0);
        s[i] = '\0';
        strrev(s);
    }
    else
    {
        s[i++] = 'N', s[i++] = '/', s[i++] = 'A', s[i] = '\0';
    }
}