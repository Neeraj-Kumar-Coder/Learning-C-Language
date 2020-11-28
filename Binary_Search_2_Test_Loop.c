#include <stdio.h>

int binsearch(int x, int v[], int n);

int main(int argc, char const *argv[])
{
    int number_of_terms, unkown_number, return_value;
    printf("How many elements does your sequence contains? : ");
    scanf("%d", &number_of_terms);

    int arr[number_of_terms - 1];

    printf("****Enter the numbers in ascending order****\n");
    for (int i = 0; i < number_of_terms; i++)
    {
        printf("Enter the %d element of the array: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the number you want to find if it was there: ");
    scanf("%d", &unkown_number);

    return_value = binsearch(unkown_number, arr, number_of_terms);

    if (return_value != -1)
    {
        printf("The number is there\nIt's position is: %d\t(POSITION ZERO BEING THE 1st ELEMENT OF YOUR INPUT)", return_value);
    }
    else
    {
        printf("The given number donot exists in the inputs provided!");
    }

    return 0;
}

int binsearch(int x, int v[], int n)
{
    int low, high, mid;
    low = 0;
    high = n - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (x < v[mid])
        {
            high = mid - 1;
        }
        else if (x > v[mid])
        {
            low = mid + 1;
        }
        else
        {
            return mid;
        }
    }

    return -1;
}