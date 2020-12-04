#include <stdio.h>
// #include "Array_Arranging_Function.c"
#include "Shell_Sort_Algorithm.c"

int main(int argc, char const *argv[])
{
    int number_of_terms;
    printf("How many elements does your sequence contains? : ");
    scanf("%d", &number_of_terms);

    int arr[number_of_terms];

    printf("****Enter the numbers in ascending order****\n");
    for (int i = 0; i < number_of_terms; i++)
    {
        printf("Enter the %d element of the array: ", i);
        scanf("%d", &arr[i]);
    }

    // printf("The shortest number is: %d\n", shortestNumberFinder(arr, number_of_terms));
    // printf("The highest number is: %d\n", highestNumberFinder(arr, number_of_terms));

    // int new[number_of_terms];

    // // ascendingOrderArranger(arr, number_of_terms, new);
    // descendingOrderArranger(arr, number_of_terms, new);

    // for (int i = 0; i < number_of_terms; i++)
    // {
    //     printf("%d\t", new[i]);
    // }
    // printf("\n");

    shellSort(arr, number_of_terms);

    for (int i = 0; i < number_of_terms; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");

    return 0;
}