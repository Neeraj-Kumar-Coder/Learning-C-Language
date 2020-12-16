#include <stdio.h>
#include <stdint.h>

// Using the if and endif preprocessor directives

/* int main(void)
{
#if 0 // This is a preprocessor used to comment a batch of code
    printf("This code should not be executed\n");
#endif
    //comment
    puts("This is always executed");
    puts("Checking if new line prints!");
    return 0;
} */

#if 0
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
    // int d = 42;   /* decimal constant (base10) */
    // int o = 052;  /* octal constant (base8) */
    // int x = 0xaf; /* hexadecimal constants (base16) */
    // int X = 0XAf; /* (letters 'a' through 'f' (case insensitive) represent 10 through 15) */
    // printf("d = %d\no = %d\nx = %d\nX = %d\n", d, o, x, X);

    char *name[10];   // It is a collection of 10 pointers to char
    char(*place)[10]; // It is a pointer to an array of size 10
    char arr[10] = "Test";
    // place = arr;
    place = &arr;
    printf("%c", *place[0]);
}
#endif

// Fixed width integer type (must use <stdint.h> header)
int main(void)
{
    /* commonly used types include */
    // uint32_t u32 = 32;  /* exactly 32-bits wide */
    // uint8_t u8 = 255;   /* exactly 8-bits wide */
    // int64_t i64 = -65;  /* exactly 64 bit in two's complement representation */
    // signed int a = -98; /* how it works (Format %u ) */
    // char b = 'g';

    // printf("%llu", sizeof(int));

    // signed int c = 25;
    // c <<= 28; // This will not work as the signed bit is destroyed
    // printf("%u", c);

    // char c[3] = "mod";
    // char *c="mod"; // string literal
    // c[0]='f'; // undefined behaviour for changing string literal. Best is to use char const *c
    // puts(c); // Produce undesired output bcoz of absense of space for the null character
}