#include <stdio.h>

int main(void)
{
    printf("One Two Three\x1b[s\r");
    //                   ^^^^^^         ESC[s ==> save cursor position
    printf("###\x1b[u");
    //         ^^^^^^                   ESC[u ==> restore cursor position
    printf("FOUR FIVE SIX\n");
    return 0;
}