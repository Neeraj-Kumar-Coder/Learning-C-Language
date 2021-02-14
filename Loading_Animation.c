/*
** NAME : NEERAJ KUMAR
** PURPOSE : JUST FOR FUN PROGRAM (TYPE : ANIMATION)
** DATE : 10/02/2020
** TIME : 05:37 PM
*/
// This program is an animation of the loading bar (example: [#####-------]: 37%)
#include <stdio.h>
#include <unistd.h>

int main(void)
{
    printf("\nStarting the application...\n");
    sleep(1);
    printf("Loading...\n");
    sleep(1);
    printf("[--------------------] :\x1b[s%2d%%\r", 0); // The \x1b[s is used to store the current cursor position
    for (int i = 0; i < 20; i++)
    {
        printf("[");
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        printf("\x1b[u%2d%%\r", 5 * (i + 1)); // The \x1b[u is used to retrieve the position of the cursor stored earlier
        if (i == 5 || i == 10 || i == 15)
            continue;
        sleep(1);
    }
    sleep(1);
    printf("\nLoading completed...\n");
    return 0;
}