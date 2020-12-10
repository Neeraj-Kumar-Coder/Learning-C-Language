#include <stdio.h>
#include <string.h>
#include <math.h>

void itoa(int n, int f, char s[]);

int main(int argc, char const *argv[])
{
    int n, f;
    printf("Enter the number you want to convert into the character string: ");
    scanf("%d", &n);
    printf("Enter the field width you want to have: ");
    scanf("%d", &f);
    char s[f + 1]; // +1 for the NULL character
    itoa(n, f, s);
    printf("The converted string is:%s", s);
    return 0;
}

void itoa(int n, int f, char s[])
{
    int i = 0, sign = n, track = 0;
    do
    {
        s[i++] = (abs(n) % 10) + '0';
        ++track;
    } while ((n /= 10) != 0);

    if (sign < 0)
    {
        s[i++] = '-';
    }

    while ((f - track) != 0)
    {
        s[i++] = ' ';
        ++track;
    }
    s[i] = '\0';
    strrev(s);
}