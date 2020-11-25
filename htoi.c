/*
    Author : Neeraj Kumar
    Purpose : Practice exercise
    Date : 16/11/2020
    Time : 04:09 PM
*/
//This program will convert the string of HEXADECIMAL number into the corresponding DECIMAL number
#include <stdio.h>
#define LIMIT 10 //This is the maximum length of the HEXADECIMAL number

void hexaConvertNum(char *digit, int *num);
int hexaConverter(int arr[]);

int main(int argc, char const *argv[])
{
    int a, i = 0;
    char hexadigit[LIMIT];
    int hexanumber[LIMIT];

    printf("Enter the HEXADECIMAL number here (in the form 0Xhhh or hhh): ");

    while ((a = getchar()) != '\n')
    {
        if (a == 'x' || a == 'X')
        {
            continue;
        }

        hexadigit[i] = a;
        ++i;
    }
    hexadigit[i] = '\0';

    hexaConvertNum(hexadigit, hexanumber);

    printf("The Corresponding Number In The Decimal System Is: %d", hexaConverter(hexanumber));

    return 0;
}

void hexaConvertNum(char *digit, int *num) //This function will convert the string of HEXADECIMAL character to the corresponding NUMERICAL equivalent
{
    int i = 0, j = 0;
    while (digit[i] != '\0')
    {
        if (digit[i] == 'a' || digit[i] == 'A')
        {
            num[j] = 10;
            ++j;
            ++i;
            continue;
        }
        else if (digit[i] == 'b' || digit[i] == 'B')
        {
            num[j] = 11;
            ++j;
            ++i;
            continue;
        }
        else if (digit[i] == 'c' || digit[i] == 'C')
        {
            num[j] = 12;
            ++j;
            ++i;
            continue;
        }
        else if (digit[i] == 'd' || digit[i] == 'D')
        {
            num[j] = 13;
            ++j;
            ++i;
            continue;
        }
        else if (digit[i] == 'e' || digit[i] == 'E')
        {
            num[j] = 14;
            ++j;
            ++i;
            continue;
        }
        else if (digit[i] == 'f' || digit[i] == 'F')
        {
            num[j] = 15;
            ++j;
            ++i;
            continue;
        }
        else if (digit[i] >= '0' && digit[i] <= '9')
        {
            num[j] = digit[i] - '0';
            ++j;
            ++i;
            continue;
        }
    }
    num[j] = -1; //We have used this as the input to indicate the end of input because '\0' has the value zero (0) which can be mismatched as in the number 502
}

int hexaConverter(int arr[])
{
    int a = arr[0], i = 0;
    while (arr[i + 1] != -1)
    {
        a = a * 16 + arr[i + 1];
        ++i;
    }
    return a;
}