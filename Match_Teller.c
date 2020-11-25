/*
    Author : Neeraj Kumar
    Purpose : Practice exercise
    Date : 17/11/2020
    Time : 10:54 AM
*/
//This program will tell the position of the first matching character (if any) of the string s1[] & s2[]
#include <stdio.h>
#include <string.h>
#define MAX 50 //Maximum length of the string which can be stored in the array

int matchTeller(char s1[], char s2[]);

int main(int argc, char const *argv[])
{
    int a, b, i = 0, return_value;
    char s1[MAX], s2[MAX];
    printf("Enter your input stream 1: ");

    while ((a = getchar()) != '\n')
    {
        s1[i] = a;
        ++i;
    }
    s1[i] = '\0';
    i = 0;

    printf("Enter your input stream 2: ");

    while ((b = getchar()) != '\n')
    {
        s2[i] = b;
        ++i;
    }
    s2[i] = '\0';

    return_value = matchTeller(s1, s2);

    if (return_value != -1)
    {
        printf("The first location of the matching character is: %d", return_value);
    }
    else
    {
        printf("There is no matching character\n");
    }

    return 0;
}

int matchTeller(char s1[], char s2[])
{
    for (int i = 0; i < strlen(s1); i++)
    {
        for (int j = 0; j < strlen(s2); j++)
        {
            if (s1[i] == s2[j])
            {
                return i + 1;
            }
        }
    }
    return -1;
}