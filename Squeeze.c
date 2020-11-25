/*
    Author : Neeraj Kumar
    Purpose : Practice exercise
    Date : 17/11/2020
    Time : 10:34 AM
*/
//This program will remove each character in s1[] that matches any character in the string s2[]
#include <stdio.h>
#include <string.h>
#define MAX 50 //Maximum length of the string which can be stored in the array

enum permission
{
    NO,
    YES
};

void squeeze(char s1[], char s2[]);

int main(int argc, char const *argv[])
{
    int a, b, i = 0;
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

    squeeze(s1, s2);

    printf("The string with the removed characters is: %s", s1);

    return 0;
}

void squeeze(char s1[], char s2[])
{
    int match = NO, k = 0;

    for (int i = 0; i < strlen(s1); i++)
    {
        for (int j = 0; j < strlen(s2); j++)
        {
            if (s1[i] == s2[j])
            {
                match = YES;
            }
        }

        if (match == NO)
        {
            s1[k++] = s1[i];
        }
        else
        {
            match = NO;
        }
    }

    s1[k] = '\0';
}