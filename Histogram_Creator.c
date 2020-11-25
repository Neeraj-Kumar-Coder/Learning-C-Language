/*
    Author : Neeraj Kumar
    Purpose : Practice exercise
    Date : 16/10/2020
    Time : 07:04 PM
*/
//This program creates a histogram of the frequencies of the alphabets occuring in the input string by the user
#include <stdio.h>

void histogram(int a, int b);

int main()
{
    int freq[26];
    int a;

    for (int i = 0; i < 26; i++)
    {
        freq[i] = 0;
    }
    printf("Enter the string here: ");
    a = getchar();
    while (a != EOF && a != '\n')
    {
        if (a == 'A' || a == 'a')
        {
            freq[0]++;
            a = getchar();
            continue;
        }
        else if (a == 'B' || a == 'b')
        {
            freq[1]++;
            a = getchar();
            continue;
        }
        else if (a == 'C' || a == 'c')
        {
            freq[2]++;
            a = getchar();
            continue;
        }
        else if (a == 'D' || a == 'd')
        {
            freq[3]++;
            a = getchar();
            continue;
        }
        else if (a == 'E' || a == 'e')
        {
            freq[4]++;
            a = getchar();
            continue;
        }
        else if (a == 'F' || a == 'f')
        {
            freq[5]++;
            a = getchar();
            continue;
        }
        else if (a == 'G' || a == 'g')
        {
            freq[6]++;
            a = getchar();
            continue;
        }
        else if (a == 'H' || a == 'h')
        {
            freq[7]++;
            a = getchar();
            continue;
        }
        else if (a == 'I' || a == 'i')
        {
            freq[8]++;
            a = getchar();
            continue;
        }
        else if (a == 'J' || a == 'j')
        {
            freq[9]++;
            a = getchar();
            continue;
        }
        else if (a == 'K' || a == 'k')
        {
            freq[10]++;
            a = getchar();
            continue;
        }
        else if (a == 'L' || a == 'l')
        {
            freq[11]++;
            a = getchar();
            continue;
        }
        else if (a == 'M' || a == 'm')
        {
            freq[12]++;
            a = getchar();
            continue;
        }
        else if (a == 'N' || a == 'n')
        {
            freq[13]++;
            a = getchar();
            continue;
        }
        else if (a == 'O' || a == 'o')
        {
            freq[14]++;
            a = getchar();
            continue;
        }
        else if (a == 'P' || a == 'p')
        {
            freq[15]++;
            a = getchar();
            continue;
        }
        else if (a == 'Q' || a == 'q')
        {
            freq[16]++;
            a = getchar();
            continue;
        }
        else if (a == 'R' || a == 'r')
        {
            freq[17]++;
            a = getchar();
            continue;
        }
        else if (a == 'S' || a == 's')
        {
            freq[18]++;
            a = getchar();
            continue;
        }
        else if (a == 'T' || a == 't')
        {
            freq[19]++;
            a = getchar();
            continue;
        }
        else if (a == 'U' || a == 'u')
        {
            freq[20]++;
            a = getchar();
            continue;
        }
        else if (a == 'V' || a == 'v')
        {
            freq[21]++;
            a = getchar();
            continue;
        }
        else if (a == 'W' || a == 'w')
        {
            freq[22]++;
            a = getchar();
            continue;
        }
        else if (a == 'X' || a == 'x')
        {
            freq[23]++;
            a = getchar();
            continue;
        }
        else if (a == 'Y' || a == 'y')
        {
            freq[24]++;
            a = getchar();
            continue;
        }
        else if (a == 'Z' || a == 'z')
        {
            freq[25]++;
            a = getchar();
            continue;
        }
        else
        {
            a = getchar();
            continue;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        histogram(97 + i, freq[i]);
    }
    return 0;
}

void histogram(int a, int b)
{
    printf("%c : ", a);
    for (int i = 0; i < b; i++)
    {
        printf("=");
    }
    printf("%d\n", b);
}