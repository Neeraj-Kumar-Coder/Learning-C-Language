/*
    Author : Neeraj Kumar
    Purpose : Practice exercise
    Date : 17/09/2020
    Time : 12:51 PM
*/
//This exercise is solved using the concept of functions
#include <stdio.h>
void printfstarR(int n); //Declaration of the upcoming function
void printfstarI(int n); //Declaration of the upcoming function
int main()
{
    char a;
    int b;
    printf("This program will print the desired star pattern!\n\n");
label:
    printf("Select which type of star pattern you want\n1.Right triangular pattern\n2.Inverted Right triangular pattern\n(q to quit the program)\nEnter here: ");
    scanf(" %c", &a); //The space used here is to make sure that scanf don't consider blank spaces or newline character as characters.

    if (a == '1')
    {
        printf("Enter the size of the star pattern you want: ");
        scanf("%d", &b);
        printfstarR(b); //Call for the printstarR function
        goto label;
    }

    else if (a == '2')
    {
        printf("Enter the size of the star pattern you want: ");
        scanf("%d", &b);
        printfstarI(b); //Call for the printstarI function
        goto label;
    }

    else if (a == 'q')
    {
        goto end;
    }

    else
    {
        printf("Enter a valid input!\n\n");
        goto label;
    }

end:
    return 0;
}

void printfstarR(int n) //This function will print the Right triangular star pattern
{
    int i, j;
    for (i = 1; i <= n; i++) //Outside "for loop"
    {
        for (j = 1; j <= i; j++) //Inside "for loop"
        {
            printf("%c", '*');
        }
        printf("\n"); //This is used to print a new line after the execution of the inside "for loop" once
    }
}

void printfstarI(int n) //This function will print the inverse Right triangular star pattern
{
    int i, j;
    for (i = n; i >= 1; i--) //Outside "for loop"
    {
        for (j = i; j >= 1; j--) //Inside "for loop"
        {
            printf("%c", '*');
        }
        printf("\n"); //This is used to print a new line after the execution of the inside "for loop" once
    }
}