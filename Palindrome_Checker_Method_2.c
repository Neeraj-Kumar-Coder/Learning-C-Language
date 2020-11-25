/*
    Author : Neeraj Kumar
    Purpose : Practice exercise
    Date : 03/10/2020
    Time : 11:10 AM
*/
#include <stdio.h>
#include <string.h>
int main()
{
    int a;
    char input[30];
    char rev[30];
    printf("Enter the string you want to check the Palindrome for : ");
    gets(input);
    strcpy(rev, strrev(input));
    strrev(input);
    a = strcmp(rev, input); //if both the strings are same then it gives the output as '0', hence checking is easy
    if (a == 0)
    {
        printf("\nYes, the input is a Palindrome\n");
    }
    else
    {
        printf("\nThe input is not a Palindrome\n");
    }
    return 0;
}