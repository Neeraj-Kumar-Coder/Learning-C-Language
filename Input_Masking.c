#include <stdio.h>
#include <conio.h>
#define MAXSIZE 100

int main(void)
{
    char a, password[MAXSIZE];
    int i = 0;
    printf("Enter the password here : ");
    fflush(stdin);                               // To flush the newline buffer
    while ((a = getch()) != '\r' && i < MAXSIZE) // Used the condition '\r' because the enter key will take the cursor to the start of the next line
    {
        password[i++] = a;
        if (a == '\b')
        {
            printf("\b \b"); // Prints the backspace character and removes the last '*'
        }
        else
        {
            printf("*");
        }
    }
    password[i] = '\0';
    printf("\nThe entered password is : %s\n", password);
    return 0;
}