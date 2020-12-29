#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <limits.h>
#include <stdalign.h>
#include <stdbool.h>

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
#if 0
int main(void)
{
    // // _Bool a, b;
    // // or
    // bool a, b;

    // a = -9;
    // b = -9;
    // if (a == true)
    // {
    //     puts("This will print");
    // }
    // // if (b == false)
    // // or
    // if (!b)
    // {
    //     puts("This will also print");
    // }

    // _Bool a, b;
    // char *x = NULL;
    // int *y = NULL;

    // a = x, b = y;

    // if (!a)
    // {
    //     puts("Let's see if this will print");
    // }
    // if (!b)
    // {
    //     puts("Also testing this");
    // }

    // double *A = malloc(1 * sizeof *A);
    // if (!A)
    // {
    //     perror("allocation problems");
    //     exit(EXIT_FAILURE);
    // }
    // free(A);
}
#endif

#if 0
// chapter 6
int main(void)
{
    /*int a , b, index = 0;
    char holder[100], delimiter[10];

    printf("Enter the string: ");
    while ((a = getchar()) != EOF)
    {
        holder[index++] = a;
    }
    holder[index] = '\0';

    index = 0;

    printf("Enter the delimiter to be used for tokenizing: ");
    while ((b = getchar()) != EOF)
    {
        delimiter[index++] = b;
    }
    delimiter[index] = '\0';

    index = 0;

    printf("The tokenized string is :\n");
    char *token = strtok(holder, delimiter);
    while (token != NULL)
    {
        printf("%d.\t[%s]\n", ++index, token);
        token = strtok(NULL, delimiter); // NULL must be passed as the first argument to continue tokenizing the string
    } */

    /* char src[] = "Hello, this,is ,bittu";
    char delimiter[] = ",";

    char *first = strtok(src, delimiter);
    puts(first);

    char *second = strtok(NULL, delimiter);
    puts(second);

    char *third = strtok(NULL, delimiter);
    puts(third);

    char *fourth = strtok(NULL, delimiter);
    puts(fourth);
    // This shows that strtok() is not re-entrant because it is continued from where it left */

    // char a[] = "0123456789";
    // char b[5];

#if 0 // buffer overrun / overflow
    strcpy(b, a);
#endif

#if 0 // best alternative is to use snprintf() to avoid buffer overrun
    snprintf(b, sizeof(b), "%s", a);
#endif

#if 0 // it is a buffer overflow checking version of strcpy
    b[0]='\0';
    strncat(b, a, sizeof(b) - 1);
#endif

#if 0 // copies string and concatinating
    char a[] = "hello";
    char b[20] = "yes";
    // strcpy(b, a); // only copies: no contatination
    // snprintf(b,sizeof(b),"%s",a);
    strncat(b, a, sizeof(b) - 1); // only this will contatinate
    printf("%s", b);
#endif
}
#endif

#if 0
// Chapter 6 code test
int main(void)
{
#if 0
    // Using strtol() for convertion of string to long integer

    char value[] = "1234567890";
    char *helpPtr;
    long answer;
    answer = strtol(value, &helpPtr, 10);
    printf("The value of converted string is = %ld", answer);
#endif

#if 0
    // Using strtod() for convertion of string to double

    char value[] = "12527";
    char *helpPtr;
    double answer;
    answer = strtod(value, &helpPtr);
    printf("The value of converted string is = %f", answer);
#endif

#if 0
    // Using strtoll() for convertion of string to long long integer

    char value[] = "1234567890";
    char *helpPtr;
    long long answer;
    answer = strtoll(value, &helpPtr, 10);
    printf("The value of converted string is = %lld", answer);
#endif

#if 0
    // Using sprintf() to write formatted data to a string (array)

    char buffer[50];
    double PI = 3.1415926;
    sprintf(buffer, "PI = %.7f", PI);

    // Or

    sprintf(buffer, "0.22145");

    printf("%s\n", buffer);
#endif

#if 0
    // Using sscanf() to read formatted data from a string (array)

    // char sentence[] = "date : 06-06-2012";
    // char str[50];
    // int year;
    // int month;
    // int day;
    // sscanf(sentence, "%s : %2d-%2d-%4d", str, &day, &month, &year);
    // printf("%s -> %02d-%02d-%4d\n", str, day, month, year);

    // printf("str = %s\nday = %d\nmonth = %d\nyear = %d", str, day, month, year);

    char data[] = "Neeraj Kumar = 2020UCA1809";
    char name_first[15], name_last[15], mid[10];
    int front, last;

    sscanf(data, "%s %s = %4d%3s%4d", name_first, name_last, &front, mid, &last);

    printf("%s %s = %4d%s%4d\n", name_first, name_last, front, mid, last);
#endif

#if 0
    // Using strchr() for finding first occurance and strrchr() for finding the last occurance of a character in a string

    char toFind = 'a';
    char string[] = "This is a string, not tangled in bass";
    char *firstOcc = strchr(string, toFind);
    ptrdiff_t position1 = firstOcc - string;

    char *lastOcc = strrchr(string, toFind);
    ptrdiff_t position2 = lastOcc - string;

    printf("The position of first occurance of %c is : %td\n", toFind, position1);
    printf("The position of last occurance of %c is : %td\n", toFind, position2);
#endif

#if 0
    // Using strcmp() to compare the elements of the string Lexicographically (Alphabetically)
    char lhs[] = "abc";
    char rhs[] = "zyx";
    int result = strcmp(lhs, rhs); // compute comparison once
    if (result < 0)
    {
        printf("%s comes before %s\n", lhs, rhs);
    }
    else if (result == 0)
    {
        printf("%s equals %s\n", lhs, rhs);
    }
    else
    { // last case: result > 0
        printf("%s comes after %s\n", lhs, rhs);
    }
#endif

#if 0
    // Using strcasecmp() to compare elements of the string by making each element to its lower case
    char lhs[] = "ABC";
    char rhs[] = "abc";
    int result = strcasecmp(lhs, rhs); // compute comparison once
    if (result < 0)
    {
        printf("%s comes before %s\n", lhs, rhs);
    }
    else if (result == 0)
    {
        printf("%s equals %s\n", lhs, rhs);
    }
    else
    { // last case: result > 0
        printf("%s comes after %s\n", lhs, rhs);
    }
#endif

#if 0
    // Using strncmp() to compare atmost n characters of the string

    char lhs[] = "abcdSTRING";
    char rhs[] = "abcdNOOOO";

    int result = strncmp(lhs, rhs, 4); // This will show that both the strings are equal as the first 4 characters are equal for both

    if (result < 0)
    {
        printf("%s comes before %s\n", lhs, rhs);
    }
    else if (result == 0)
    {
        printf("%s equals %s\n", lhs, rhs);
    }
    else
    { // last case: result > 0
        printf("%s comes after %s\n", lhs, rhs);
    }
#endif

#if 0
    // Using strncasecmp() to compare atmost n characters of the string by converting them into lower case

    char lhs[] = "abcdSTRING";
    char rhs[] = "ABCDNOOOO";

    int result = strncasecmp(lhs, rhs, 4); // This will show that both the strings are equal as the first 4 characters are equal for both (after converting to the lower case characters)

    if (result < 0)
    {
        printf("%s comes before %s\n", lhs, rhs);
    }
    else if (result == 0)
    {
        printf("%s equals %s\n", lhs, rhs);
    }
    else
    { // last case: result > 0
        printf("%s comes after %s\n", lhs, rhs);
    }
#endif

#if 0
    // Using strtod() to convert string to double

    char value[] = "5263";
    char *ptr;
    double result = strtod(value, &ptr);
    printf("The converted value is = %f\n", result);
#endif

#if 0
    // Using strtol() to convert string to long

    char value[] = "5263";
    char *ptr;
    long result = strtol(value, &ptr, 10);
    printf("The converted value is = %ld\n", result);
#endif

#if 0
    // Using strtoll() to convert string to long long

    char value[] = "5263";
    char *ptr;
    long long result = strtoll(value, &ptr, 10);
    // long long result = strtoll(value, NULL, 10); // This can also be used in any convertion
    printf("The converted value is = %lld\n", result);
#endif

#if 0
    char str1[] = "geeks for geeks";
    const char str2[] = "geek";
    int n = strspn(str1, str2);
    // int n = strcspn(str1, str2);
    printf("The length of initial matching segment is : %d", n);
#endif
}
#endif

#if 0
// Chapter 7
int main(void)
{
    float a1 = 2.303f;
    double a2 = 2.303;
    long double a3 = 2.303L;
    printf("float = %f\ndouble = %f\nlong double = %Lf\n", a1, a2, a3);

    // Testing the escape sequences
    printf("This is a normal sample text to test the escape sequences");
    return 0;
}
#endif

// Chapter 8
int main(void)
{
    // Compound Literals (This is the same as creating an un-named array of integers)
    int *p = (int[]){1, 6, 7, -9, 10};         // Without specifing array length (length will taken from number of initializers)
    int *q = (int[10]){2, 8, 12};              // Compound literal having length of initializer less than array size specified (uninitialized elements are initialized by 0)
    const int *r = (const int[3]){6, 14, -98}; // Read Only compound Literal (this compound literal must be stored in a const pointer)

    // Compound Literal can be initialized in any way
    int a = 5, b = 2;
    int *s = (int[2]){a + b, a * b + *r};
    printf("First Element is %d\nSecond Element is %d\n", *p, *(p + 1));
    printf("First q Element is %d\nFourth q Element is %d\n", *q, *(q + 5));
    printf("Differently initialized compound literal = %d\n", *(s + 1));
    return 0;
}