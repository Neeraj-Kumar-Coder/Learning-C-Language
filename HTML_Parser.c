/*
    Author : Neeraj Kumar
    Purpose : Practice exercise
    Date : 23/09/2020
    Time : 12:26 PM
*/
#include <stdio.h>
#include <string.h>
void parser(char arr[]);
void spaceremover(char arr[]);
int main()
{
    char code[50];
    printf("This is a HTML parser program\n");
    printf("Enter the HTML code to be parsed : ");
    gets(code);

    printf("The code before parsing is :**%s**\n", code);

    parser(code);
    spaceremover(code);

    printf("The code after parsing space is :**%s**\n", code);
    return 0;
}

void parser(char arr[]) //This function will remove the tags
{
    int a = 0, b = 0; //Here a is the tracker variable to track our location in the string
    for (int i = 0; i <= (strlen(arr)); i++)
    {
        if (arr[i] == '<')
        {
            a = 0;
            continue;
        }
        else if (arr[i] == '>')
        {
            a = 1;
            continue;
        }

        else if (a == 1)
        {
            arr[b] = arr[i];
            b++;
        }
    }
}

void spaceremover(char arr[]) //This function will remove the extra spaces
{
    while (arr[0] == ' ') //For removing beginning spaces
    {
        for (int i = 0; i < strlen(arr); i++)
        {
            arr[i] = arr[i + 1]; //This code will shift the string to the left, till the first element becomes a non white space
        }
    }

    while (arr[strlen(arr) - 1] == ' ') //For removing end trailing spaces
    {
        arr[strlen(arr) - 1] = '\0';
    }
}