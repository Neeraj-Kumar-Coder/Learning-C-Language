// For reference: https://www.geeksforgeeks.org/difference-between-const-int-const-int-const-and-int-const/
#include <stdio.h>

int main(void)
{
    int variable_1 = 100, variable_2 = 999;
    printf("Value before changing is = %d\n", variable_1);

    int const *pointer_1 = &variable_1;
    // This is a pointer to a constant integer value.
    // This means that the variable_1 being declared is a pointer, pointing to a constant integer.
    // Effectively, this implies that the pointer is pointing to a value that shouldn’t be changed.
    // Const qualifier doesn’t affect the pointer in this scenario so the pointer is allowed to point to some other address.
    // The first const keyword can go either side of data type,
    // hence int const* is equivalent to const int*.

    *pointer_1 = 101;        // Error
    pointer_1 = &variable_2; // No Error

    int *const pointer_2 = &variable_1;
    // int *const is a constant pointer to integer
    // This means that the variable_1 being declared is a constant pointer pointing to an integer.
    // Effectively, this implies that the pointer shouldn’t point to some other address.
    // Const qualifier doesn’t affect the value of integer in this scenario so the value being stored in the address is allowed to change.

    *pointer_2 = 101;        //No Error
    pointer_2 = &variable_2; // Error

    const int *const pointer_3 = &variable_1;
    // const int* const is a constant pointer to constant integer
    // This means that the variable being declared is a constant pointer pointing to a constant integer.
    // Effectively, this implies that a constant pointer is pointing to a constant value.
    // Hence, neither the pointer should point to a new address nor the value being pointed to should be changed.
    // The first const keyword can go either side of data type, hence const int* const is equivalent to int const* const.

    *pointer_3 = 101;        // Error
    pointer_3 = &variable_2; // Error
    printf("Value after changing is = %d\n", variable_1);
    return 0;
}