#include <stdio.h>
#define MASTER 100
#define LEGEND 9999
#if !defined(LEGEND) // (03)
#define LEGEND 999
#endif
#define STAR 101
#define max(A, B) (((A) > (B)) ? (A) : (B))
#define dprint(expr) printf(#expr) // (02)
// #undef STAR // This will undefine the STAR macro, and hence it will not be expanded (01)

int main(void)
{
    printf("Hello, World\n");
    printf("Hello"
           "World\n");
    dprint(hello\n);
    printf("The maximum numbe is : %d\nLEGEND = %d\n", max(MASTER, STAR), LEGEND);
    return 0;
}

/*
01 #undef name_of_test => it is used to test whether the name_of_test is a function or a macro, if it is a macro then it will be undefined after this will execute
02 The '#' used in the printf() will transform the expr to quoted string and expands as: dprint(hello) => printf("hello")
03 The defined() checks whether the aregument is defined(return 1) or not(return 0)
** alternatively we can use => ifndef LEGEND
*/