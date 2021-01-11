/*
    Author : Neeraj Kumar
    Purpose : Practice exercise
    Date : 29/09/2020
    Time : 10:25 PM
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int cputhinker();
void scorer(int a, int b, char str[]);
int d = 0, e = 0;

int main()
{
    int a, b, c, f, h, z = 0;
    printf("\n******* CLASSIC ROCK, PAPER and SCISSOR GAME *******\n");
    printf("Enter number of characters in your nick name : ");
    scanf("%d", &a);  //taking input from the user for better memory management
    char name[a + 1]; //size of the array is defined by the input of user
    printf("Enter your nick name : ");
    while ((h = getchar()) != '\n')
    {
        name[z] = h;
        ++z;
    }
    name[z] = '\0';

    printf("\nHi %s!, Welcome to the game\nHow many rounds do you want to play\?\n===>", name);
    scanf("%d", &b);

    for (int i = 1; i <= b; i++)
    {
    label:
        printf("\nROUND #%d\n", i);
        printf("Choose among the following :\n1. ROCK\n2. PAPER\n3. SCISSOR\n------->");
        scanf("%d", &c);
        if (c >= 1 && c <= 3)
        {
            f = cputhinker();   //call for cpu response
            scorer(c, f, name); //call for score counting
        }
        else
        {
            printf("Please enter a valid input!\n");
            goto label;
        }
    }

    printf("\nSCORE CARD:");
    printf("\n#########################\n");
    printf("The final score is \n%s : %d\nCPU : %d", name, d, e);
    printf("\n#########################\n\n");
    if (d == e)
    {
        printf("********************************************\n");
        printf("It's a tie between %s and CPU\n", name);
        printf("********************************************\n");
    }
    else if (d > e)
    {
        printf("***********************************************\n");
        printf("Congratulations %s !, You are the winner\n", name);
        printf("***********************************************\n");
    }
    else
    {
        printf("***********\n");
        printf("CPU Won !!!\n");
        printf("***********\n");
    }

    printf("\nTHANKS FOR PLAYING THE GAME\n;-)");
    return 0;
}

int cputhinker()
{
    int a;
    srand(time(NULL));  //for random number generation using time as seed
    a = rand() % 3 + 1; //for random number generation between 0 and 4 (i.e. 1, 2, 3)
    return a;           //returing the genereated number for evaluation
}

void scorer(int a, int b, char str[]) //for case and score distrubution
{
    if (a == 1 && b == 1)
    {
        printf("Your choice : ROCK\nCPU choice : ROCK\n\n");
        printf("The score is \n%s : %d\nCPU : %d\n", str, d, e);
    }
    else if (a == 1 && b == 2)
    {
        printf("Your choice : ROCK\nCPU choice : PAPER\n\n");
        e++;
        printf("The score is \n%s : %d\nCPU : %d\n", str, d, e);
    }
    else if (a == 1 && b == 3)
    {
        printf("Your choice : ROCK\nCPU choice : SCISSOR\n\n");
        d++;
        printf("The score is \n%s : %d\nCPU : %d\n", str, d, e);
    }
    else if (a == 2 && b == 1)
    {
        printf("Your choice : PAPER\nCPU choice : ROCK\n\n");
        d++;
        printf("The score is \n%s : %d\nCPU : %d\n", str, d, e);
    }
    else if (a == 2 && b == 2)
    {
        printf("Your choice : PAPER\nCPU choice : PAPER\n\n");
        printf("The score is \n%s : %d\nCPU : %d\n", str, d, e);
    }
    else if (a == 2 && b == 3)
    {
        printf("Your choice : PAPER\nCPU choice : SCISSOR\n\n");
        e++;
        printf("The score is \n%s : %d\nCPU : %d\n", str, d, e);
    }
    else if (a == 3 && b == 1)
    {
        printf("Your choice : SCISSOR\nCPU choice : ROCK\n\n");
        e++;
        printf("The score is \n%s : %d\nCPU : %d\n", str, d, e);
    }
    else if (a == 3 && b == 2)
    {
        printf("Your choice : SCISSOR\nCPU choice : PAPER\n\n");
        d++;
        printf("The score is \n%s : %d\nCPU : %d\n", str, d, e);
    }
    else if (a == 3 && b == 3)
    {
        printf("Your choice : SCISSOR\nCPU choice : SCISSOR\n\n");
        printf("The score is \n%s : %d\nCPU : %d\n", str, d, e);
    }
}