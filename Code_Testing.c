#include <stdio.h>
#include <stdint.h>

// Using the if and endif preprocessor directives

/* int main(void)
{
    #if 0
    printf("This code should not be executed\n");
    #endif
    //comment
    printf("This is always executed\n");
    return 0;
} */

int main(void)
{
    // char a = 'Z';
    // char *name[10];
    // name[0] = &a;
    // char **ptr = name;
    // printf("%c\n", *name[0]);
    // printf("Address = %d, %d\n", name[0], *ptr);
    // uint8_t u32 = 32; // Integer exactly 8 bit wide (for unsigned)
    // int8_t u8 = -32;  // Integer exactly 8 bit wide (for signed)
    // printf("%d\n%d\n", u32, u8);

    /* the following variables are initialized to the same value: */
    int d = 42;   /* decimal constant (base10) */
    int o = 052;  /* octal constant (base8) */
    int x = 0xaf; /* hexadecimal constants (base16) */
    int X = 0XAf; /* (letters 'a' through 'f' (case insensitive) represent 10 through 15) */
    printf("d = %d\no = %d\nx = %d\nX = %d\n", d, o, x, X);
}