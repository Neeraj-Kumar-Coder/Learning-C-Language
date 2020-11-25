/*
    Author : Neeraj Kumar
    Purpose : Useful Program
    Date : 01/11/2020
    Time : 06:40 PM
*/
//This program will format the full text document. Including: Proper Spaces, After fullstop captalization and space after comma

#include <stdio.h>

int capsMaker(int a);

int main(int argc, char const *argv[])
{
    int a, b, c, space = 0, fullstop = 0 /*track whether fullstop is present*/, ftrack = 0 /*track next character after fullstop*/, comma = 0 /*track whether comma is present*/, ctrack = 0 /*track next character after comma*/;
    FILE *ptr = NULL;
    FILE *ptr1 = NULL;
    FILE *ptr2 = NULL;
    FILE *ptr3 = NULL;

    ptr = fopen("C:\\Neeraj Kumar\\Learning C Language\\TestPad", "r");   //Original File
    ptr1 = fopen("C:\\Neeraj Kumar\\Learning C Language\\TestPad1", "w"); //File with proper spaces
    ptr2 = fopen("C:\\Neeraj Kumar\\Learning C Language\\TestPad2", "w"); //File with proper captalization
    ptr3 = fopen("C:\\Neeraj Kumar\\Learning C Language\\Final", "w");    //File with Everything done

    while ((a = fgetc(ptr)) != EOF) //This will removed extra spaces
    {
        if (a == ' ' || a == '\t')
        {
            ++space;
            if (space == 1)
            {
                fputc(a, ptr1);
            }
            else
            {
                continue;
            }
        }
        else
        {
            fputc(a, ptr1);
            space = 0;
        }
    }

    fclose(ptr);
    fclose(ptr1);

    ptr1 = fopen("C:\\Neeraj Kumar\\Learning C Language\\TestPad1", "r");

    while ((b = fgetc(ptr1)) != EOF)
    {
        if (b == '.')
        {
            fputc(b, ptr2);
            fullstop = 1;
            continue;
        }

        if (fullstop == 1)
        {
            if (b == ' ' || b == '\n')
            {
                fputc(b, ptr2);
                ftrack = 1;
                continue;
            }
            else
            {
                if (ftrack == 1)
                {
                    fputc(b = capsMaker(b), ptr2);
                    fullstop = 0;
                    ftrack = 0;
                    continue;
                }
                else
                {
                    fputc(' ', ptr2);
                    fputc(b = capsMaker(b), ptr2);
                    fullstop = 0;
                    ftrack = 0;
                }
            }
        }

        else
        {
            fputc(b, ptr2);
        }
    }

    fclose(ptr1);
    fclose(ptr2);

    ptr2 = fopen("C:\\Neeraj Kumar\\Learning C Language\\TestPad2", "r");

    while ((c = fgetc(ptr2)) != EOF)
    {
        if (c == ',')
        {
            fputc(c, ptr3);
            comma = 1;
            continue;
        }

        if (comma == 1)
        {
            if (c == ' ' || c == '\n')
            {
                fputc(c, ptr3);
                ctrack = 1;
                continue;
            }
            else
            {
                if (ctrack == 1)
                {
                    fputc(c, ptr3);
                    comma = 0;
                    ctrack = 0;
                    continue;
                }
                else
                {
                    fputc(' ', ptr3);
                    fputc(c, ptr3);
                    comma = 0;
                    ctrack = 0;
                }
            }
        }

        else
        {
            fputc(c, ptr3);
        }
    }

    fclose(ptr2);
    fclose(ptr3);
    return 0;
}

int capsMaker(int a)
{
    if (a == 'a' || a == 'A')
    {
        return 'A';
    }
    else if (a == 'b' || a == 'B')
    {
        return 'B';
    }
    else if (a == 'c' || a == 'C')
    {
        return 'C';
    }
    else if (a == 'd' || a == 'D')
    {
        return 'D';
    }
    else if (a == 'e' || a == 'E')
    {
        return 'E';
    }
    else if (a == 'f' || a == 'F')
    {
        return 'F';
    }
    else if (a == 'g' || a == 'G')
    {
        return 'G';
    }
    else if (a == 'h' || a == 'H')
    {
        return 'H';
    }
    else if (a == 'i' || a == 'I')
    {
        return 'I';
    }
    else if (a == 'j' || a == 'J')
    {
        return 'J';
    }
    else if (a == 'k' || a == 'K')
    {
        return 'K';
    }
    else if (a == 'l' || a == 'L')
    {
        return 'L';
    }
    else if (a == 'm' || a == 'M')
    {
        return 'M';
    }
    else if (a == 'n' || a == 'N')
    {
        return 'N';
    }
    else if (a == 'o' || a == 'O')
    {
        return 'O';
    }
    else if (a == 'p' || a == 'P')
    {
        return 'P';
    }
    else if (a == 'q' || a == 'Q')
    {
        return 'Q';
    }
    else if (a == 'r' || a == 'R')
    {
        return 'R';
    }
    else if (a == 's' || a == 'S')
    {
        return 'S';
    }
    else if (a == 't' || a == 'T')
    {
        return 'T';
    }
    else if (a == 'u' || a == 'U')
    {
        return 'U';
    }
    else if (a == 'v' || a == 'V')
    {
        return 'V';
    }
    else if (a == 'w' || a == 'W')
    {
        return 'W';
    }
    else if (a == 'x' || a == 'X')
    {
        return 'X';
    }
    else if (a == 'y' || a == 'Y')
    {
        return 'Y';
    }
    else if (a == 'z' || a == 'Z')
    {
        return 'Z';
    }
}