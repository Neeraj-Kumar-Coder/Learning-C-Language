/*
    Author : Neeraj Kumar
    Purpose : Practice exercise
    Date : 18/10/2020
    Time : 12:13 PM
*/
// To end your input just press "Ctrl + z + ENTER", this is called the EOF marker.
// For UNIX operating system press "Ctrl + d + ENTER"
#include <stdio.h>

int main()
{
    int c, nw, nl, nc;
    int a = 0; //tracer variable
    nw = nl = nc = 0;

    printf("\nEnter your input from here\n");

    while ((c = getchar()) != EOF)
    {
        ++nc;
        if (c == '\n')
        {
            ++nl;
        }

        if (c == ' ' || c == '\n' || c == '\t')
        {
            a = 0;
        }
        else
        {
            a++;
        }

        if (a == 1)
        {
            ++nw;
        }
    }

    printf("\nLines = %d\nWords = %d\nCharacters = %d\n", nl, nw, nc);
    return 0;
}