#include <stdio.h>
#include <string.h>
#define TRUE 1
#define FALSE 0

int checkAB(char string[]);

int main(void)
{
    char string[] = "abbaaabb";
    int result = checkAB(string);
    (result == TRUE) ? printf("The string is according to rule\n") : printf("The string is not according to rule\n");
    return 0;
}

int checkAB(char string[])
{
    static int output = FALSE;
    if (string[0] != 'a')
        return FALSE; // This is a guard clause

    if (string[1] == 'a' || (string[1] == 'b' && string[2] == 'b'))
    {
        output = TRUE;
        checkAB(string + 1);
    }
    else if (strlen(string) == 1 || strlen(string) == 0)
    {
        return output;
    }
    else if (string[0] == 'b' && string[1] == 'b')
    {
        if (string[2] == 'a')
        {
            output = TRUE;
            checkAB(string + 2);
        }
        else if (string[2] == '\0')
        {
            return output;
        }
        else
        {
            output = FALSE;
        }
    }
    else
    {
        output = FALSE;
        return output;
    }
    return output;
}