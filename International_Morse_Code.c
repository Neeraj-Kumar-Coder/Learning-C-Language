/*
    Author : Neeraj Kumar
    Purpose : Morse Code Project (FOR FUN)
    Date : 26/12/2020
    Time : 07:11 PM
*/
// This program can convert the TEXT TO MORSE CODE and also MORSE CODE TO TEXT

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void text_to_morse_code(char a);
void morse_code_to_text(char str[]);

int main(void)
{
    int choice;
    printf("Enter the conversion you want to perform:\n1. Text to Morse Code\n2. Morse Code to Text\nINPUT : ");
    scanf("%d", &choice);
    getchar();

    if (choice == 1)
    {
        char a;
        printf("Enter the message to convert it into Morse Code: ");
        while ((a = getchar()) != '\n')
        {
            text_to_morse_code(a);
        }
    }

    if (choice == 2)
    {
        char tempArr[6], a;
        int i = 0, space = 0;

        printf("Enter the encrypted message (MORSE CODE) : ");
        while ((a = getchar()) != '\n')
        {
            if (a == '.' || a == '-')
            {
                tempArr[i++] = a;
                space = 0;
            }
            else if (a == ' ')
            {
                tempArr[i] = '\0';
                space++;
                morse_code_to_text(tempArr);
                i = 0;
            }
            else
            {
                putchar(a);
            }

            if (space > 1)
            {
                printf(" ");
                space = 0;
                i = 0;
            }
        }
        tempArr[i] = '\0';
        morse_code_to_text(tempArr);
    }
    return 0;
}

void text_to_morse_code(char a)
{
    if (a == 'A' || a == 'a')
    {
        printf(".- ");
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

void morse_code_to_text(char str[])
{
    if (strcmp(str, ".-") == 0)
    {
        printf("a");
    }
    else if (strcmp(str, "-...") == 0)
    {
        printf("b");
    }
    else if (strcmp(str, "-.-.") == 0)
    {
        printf("c");
    }
    else if (strcmp(str, "-..") == 0)
    {
        printf("d");
    }
    else if (strcmp(str, ".") == 0)
    {
        printf("e");
    }
    else if (strcmp(str, "..-.") == 0)
    {
        printf("f");
    }
    else if (strcmp(str, "--.") == 0)
    {
        printf("g");
    }
    else if (strcmp(str, "....") == 0)
    {
        printf("h");
    }
    else if (strcmp(str, "..") == 0)
    {
        printf("i");
    }
    else if (strcmp(str, ".---") == 0)
    {
        printf("j");
    }
    else if (strcmp(str, "-.-") == 0)
    {
        printf("k");
    }
    else if (strcmp(str, ".-..") == 0)
    {
        printf("l");
    }
    else if (strcmp(str, "--") == 0)
    {
        printf("m");
    }
    else if (strcmp(str, "-.") == 0)
    {
        printf("n");
    }
    else if (strcmp(str, "---") == 0)
    {
        printf("o");
    }
    else if (strcmp(str, ".--.") == 0)
    {
        printf("p");
    }
    else if (strcmp(str, "--.-") == 0)
    {
        printf("q");
    }
    else if (strcmp(str, ".-.") == 0)
    {
        printf("r");
    }
    else if (strcmp(str, "...") == 0)
    {
        printf("s");
    }
    else if (strcmp(str, "-") == 0)
    {
        printf("t");
    }
    else if (strcmp(str, "..-") == 0)
    {
        printf("u");
    }
    else if (strcmp(str, "...-") == 0)
    {
        printf("v");
    }
    else if (strcmp(str, ".--") == 0)
    {
        printf("w");
    }
    else if (strcmp(str, "-..-") == 0)
    {
        printf("x");
    }
    else if (strcmp(str, "-.--") == 0)
    {
        printf("y");
    }
    else if (strcmp(str, "--..") == 0)
    {
        printf("z");
    }
    else if (strcmp(str, "-----") == 0)
    {
        printf("0");
    }
    else if (strcmp(str, ".----") == 0)
    {
        printf("1");
    }
    else if (strcmp(str, "..---") == 0)
    {
        printf("2");
    }
    else if (strcmp(str, "...--") == 0)
    {
        printf("3");
    }
    else if (strcmp(str, "....-") == 0)
    {
        printf("4");
    }
    else if (strcmp(str, ".....") == 0)
    {
        printf("5");
    }
    else if (strcmp(str, "-....") == 0)
    {
        printf("6");
    }
    else if (strcmp(str, "--...") == 0)
    {
        printf("7");
    }
    else if (strcmp(str, "---..") == 0)
    {
        printf("8");
    }
    else if (strcmp(str, "----.") == 0)
    {
        printf("9");
    }
}