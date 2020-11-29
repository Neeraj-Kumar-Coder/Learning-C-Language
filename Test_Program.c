#include <stdio.h>
#include "Array_Arranging_Function.c"

int main(int argc, char const *argv[])
{
    int number_of_terms;
    printf("How many elements does your sequence contains? : ");
    scanf("%d", &number_of_terms);

    int arr[number_of_terms];

    printf("****Enter the numbers in ascending order****\n");
    for (int i = 0; i < number_of_terms; i++)
    {
        printf("Enter the %d element of the array: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("The shortest number is: %d\n", shortestNumberFinder(arr, number_of_terms));
    printf("The highest number is: %d\n", highestNumberFinder(arr, number_of_terms));
    return 0;
}