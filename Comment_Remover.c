/*
    Author : Neeraj Kumar
    Purpose : Practice Program
    Date : 03/11/2020
    Time : 09:04 PM
*/
//This program will remove all types of comment from a C program
#include <stdio.h>
#define YES 1
#define NO 0

int main(int argc, char const *argv[])
{
    int a, invt_comma = 0, permission = YES, comment = 0, star_comment = 0;
    FILE *ptr = NULL;
    FILE *ptr1 = NULL;
    ptr = fopen("C:\\Neeraj Kumar\\Learning C Language\\cCode", "r");
    ptr1 = fopen("C:\\Neeraj Kumar\\Learning C Language\\cCodeParsed", "w");

    while ((a = fgetc(ptr)) != EOF)
    {
        if (a == '"')
        {
            ++invt_comma;
            fputc(a, ptr1);
            continue;
        }

        if (invt_comma == 1) //Inside the string
        {
            fputc(a, ptr1);
            permission = NO;
            continue;
        }
        else if (invt_comma == 2) //String ended
        {
            fputc(a, ptr1);
            invt_comma = 0;
            permission = YES;
            continue;
        }

        if (permission == YES) //Means we are not in a string
        {
            if (a == '/')
            {
                ++comment;
                continue;
            }
            else if (a == '*' && comment == 1)
            {
                ++star_comment;
                continue;
            }

            if (comment == 2) //For single line comments
            {
                if (a == '\n') //Comment ended if this is true
                {
                    fputc('\n', ptr1);
                    comment = 0;
                    continue;
                }
                else
                {
                    continue;
                }
            }
            else if (star_comment == 1) //For multi line comments
            {
                if (a == '*')
                {
                    if ((a = fgetc(ptr)) == '/') //Comment ended if this is true
                    {
                        comment = 0;
                        star_comment = 0;
                        continue;
                    }
                    else
                    {
                        comment = 0;
                        continue;
                    }
                }
                else
                {
                    comment = 0;
                    continue;
                }
            }
        }

        if (comment == 1) //If it is not a comment then we have to print the character '/'
        {
            fputc('/', ptr1);
        }

        fputc(a, ptr1);
        comment = 0;
        star_comment = 0;
    }

    fclose(ptr);
    fclose(ptr1);
    return 0;
}