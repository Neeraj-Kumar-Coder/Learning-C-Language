#include <stdio.h>

void morseCode(char a);

int main(void)
{
    char a;
    printf("Enter the message to convert it into Morse Code: ");
    while ((a = getchar()) != '\n')
    {
        morseCode(a);
    }
    return 0;
}

void morseCode(char a)
{
    if (a == 'A' || a == 'a')
    {
        printf(".-");
    }
    else if (a == 'B' || a == 'b')
    {
        printf("-... ");
    }
    else if (a == 'C' || a == 'c')
    {
        printf("-.-. ");
    }
    else if (a == 'D' || a == 'd')
    {
        printf("-.. ");
    }
    else if (a == 'E' || a == 'e')
    {
        printf(". ");
    }
    else if (a == 'F' || a == 'f')
    {
        printf("..-. ");
    }
    else if (a == 'G' || a == 'g')
    {
        printf("--. ");
    }
    else if (a == 'H' || a == 'h')
    {
        printf(".... ");
    }
    else if (a == 'I' || a == 'i')
    {
        printf(".. ");
    }
    else if (a == 'J' || a == 'j')
    {
        printf(".--- ");
    }
    else if (a == 'K' || a == 'k')
    {
        printf("-.- ");
    }
    else if (a == 'L' || a == 'l')
    {
        printf(".-.. ");
    }
    else if (a == 'M' || a == 'm')
    {
        printf("-- ");
    }
    else if (a == 'N' || a == 'n')
    {
        printf("-. ");
    }
    else if (a == 'O' || a == 'o')
    {
        printf("--- ");
    }
    else if (a == 'P' || a == 'p')
    {
        printf(".--. ");
    }
    else if (a == 'Q' || a == 'q')
    {
        printf("--.- ");
    }
    else if (a == 'R' || a == 'r')
    {
        printf(".-. ");
    }
    else if (a == 'S' || a == 's')
    {
        printf("... ");
    }
    else if (a == 'T' || a == 't')
    {
        printf("- ");
    }
    else if (a == 'U' || a == 'u')
    {
        printf("..- ");
    }
    else if (a == 'V' || a == 'v')
    {
        printf("...- ");
    }
    else if (a == 'W' || a == 'w')
    {
        printf(".-- ");
    }
    else if (a == 'X' || a == 'x')
    {
        printf("-..- ");
    }
    else if (a == 'Y' || a == 'y')
    {
        printf("-.-- ");
    }
    else if (a == 'Z' || a == 'z')
    {
        printf("--.. ");
    }
    else if (a == '0')
    {
        printf("----- ");
    }
    else if (a == '1')
    {
        printf(".---- ");
    }
    else if (a == '2')
    {
        printf("..--- ");
    }
    else if (a == '3')
    {
        printf("...-- ");
    }
    else if (a == '4')
    {
        printf("....- ");
    }
    else if (a == '5')
    {
        printf("..... ");
    }
    else if (a == '6')
    {
        printf("-.... ");
    }
    else if (a == '7')
    {
        printf("--... ");
    }
    else if (a == '8')
    {
        printf("---.. ");
    }
    else if (a == '9')
    {
        printf("----. ");
    }
    else if (a == '.')
    {
        printf("[FULL STOP] ");
    }
    else if (a == ' ')
    {
        printf("   ");
    }
    else
    {
        putchar(a);
    }
}