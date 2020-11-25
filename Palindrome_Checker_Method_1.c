/*
    Author : Neeraj Kumar
    Purpose : Practice exercise
    Date : 02/10/2020
    Time : 09:22 PM
*/
#include <stdio.h>
#include <string.h>
int main()
{
    int i = 0, a = 0;
    char input[30];
    char rev[30];
    printf("Enter the input you want the Palindrome check for : ");
    gets(input);
    strcpy(rev, strrev(input)); //when doing this, the original string also gets reversed.
    strrev(input);              //it is done to make the original string in real state again
    while (input[i] == rev[i])  //compairing each element of the reversed string with the originl string for Palindrome check
    {
        a++;
        i++;
    }
    if (a == (strlen(input) + 1)) //here "strlen(input)+1" is taken because after checking the real length of the string the loop will also check the last element of the string i.e. the null element '\0'
    {
        printf("Yes, the entered input is a Palindrome\n");
    }
    else
    {
        printf("The given input is not a Palindrome\n");
    }
    return 0;
}