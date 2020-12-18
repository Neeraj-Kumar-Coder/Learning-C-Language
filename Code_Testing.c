#include <stdio.h>
#include <stdint.h>
#include <limits.h>
#include <stdalign.h>

#if 0
void bit_pattern(int u)
{
    int i, x, word;
    unsigned mask = 1;

    word = CHAR_BIT * sizeof(int);
    mask = mask << (word - 1); /* shift 1 to the leftmost position */
    for (i = 1; i <= word; i++)
    {
        x = (u & mask) ? 1 : 0; /* identify the bit */
        printf("%d", x);        /* print bit value */
        mask >>= 1;             /* shift mask to the right by 1 bit */
    }
}
#endif

// Using the if and endif preprocessor directives

#if 0
int main(void)
{
#if 0 // This is a preprocessor used to comment a batch of code
    printf("This code should not be executed\n");
#endif
    //comment
    puts("This is always executed");
    puts("Checking if new line prints!");
    return 0;
}
#endif

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

#if 0
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
    char *str="hi " "I am " "Neeraj " "Kumar "; // string concatination at compile time
    puts(str);

#if 0
    printf("Minimum value of signed char is : %d\n", SCHAR_MIN);
    printf("Maximum value of signed char is : %d\n", SCHAR_MAX);
    printf("Maximum value of unsigned char is : %d\n", UCHAR_MAX);
    printf("Minimum value of char is : %d\n", CHAR_MIN); // Default is taken as signed for unspecified char
    printf("Maximum value of char is : %d\n", CHAR_MAX); // Default is taken as signed for unspecified char
    printf("Maximum value of short integer is: %d\n", SHRT_MAX);
    printf("Minimum value of short integer is: %d\n", SHRT_MIN);
    printf("Maximum value of unsigned short integer is: %d\n", USHRT_MAX);
    printf("Maximum value of integer is : %d\n", INT_MAX);
    printf("Minimum value of integer is : %d\n", INT_MIN);
    printf("Maximum value of unsigned integer is : %u\n", UINT_MAX);
    printf("Maximum value of long integer is : %ld\n", LONG_MAX);
    printf("Minimum value of long integer is : %ld\n", LONG_MIN);
    printf("Maximum value of unsigned long integer is : %lu\n", ULONG_MAX);
    printf("Maximum value of long long integer is : %lld\n", LLONG_MAX);
    printf("Minimum value of long long integer is : %lld\n", LLONG_MIN);
    printf("Maximum value of unsigned long long integer is : %llu", ULLONG_MAX);
#endif
}
#endif

#if 0
// code testing from chapter 4
struct Code_Testing
{
    int x;
    int y;
};
#endif

#if 0
int main(void)
{
    // int a, b, c;
    // printf("Enter a, b, c here : ");
    // scanf("%d %d %d", &a, &b, &c);
    // printf("The largest number is %d\n", (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c)); // Nesting of conditional operator

    // printf("%d\n", -22 >> 1);
    // bit_pattern(26);
    // int x = 99, y = 42;
    // printf("%i\n", (x *= 2, y));
    // printf("%i\n", x);

    struct Code_Testing a;
    struct Code_Testing *pointer = &a;
    // p->x == (*p).x
    pointer->x = 10;
    pointer->y = 998;
    printf("%i\n%i\n", a.x, a.y);
    ptrdiff_t diff;
    int *ptr1, *ptr2;
    int a = 7, b = 95;
    ptr1 = &a;
    ptr2 = &b;
    diff = ptr1 - ptr2;
    printf("The difference between the pointers location difference is: %ti", diff);
    printf("The size of int is : %llu\n", sizeof(int));
    printf("The alignment of int is : %zu\n", alignof(int));
    printf("The size of char is : %llu\n", sizeof(char));
    printf("The alignment of char is : %zu\n", alignof(char));
    printf("The size of short is : %llu\n", sizeof(short));
    printf("The alignment of short is : %zu\n", alignof(short));
    printf("The size of long is : %llu\n", sizeof(long));
    printf("The alignment of long is : %zu\n", alignof(long));
    printf("The size of long long is : %llu\n", sizeof(long long));
    printf("The alignment of long long is : %zu\n", alignof(long long));
}
#endif

// from chapter 5
int main(void)
{
}